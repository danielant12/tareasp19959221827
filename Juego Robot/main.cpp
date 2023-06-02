#include <iostream>
#include <windows.h>
#include "player.h"
#include "mapcell.h"
#include "gamemap.h"

using namespace std;

int main()
{
    // Aplicativo elaborado en el curso de Programacion I - Universidad Mariano Galvez
    // desarrollador: Grupo 3 - Mayo 2023

    int minutos = 10;
    int segundos = 0;

    gamemap map;
    player hero;
    map.drawPortada();
    //map.draw();
    while(map.isGameOver==false )
    {
      cout << "" << endl;
      cout << "" << endl;
      cout << "Tiempo restante: " << minutos << ":" << segundos << endl;
      cout << "Introduce comando de movimiento <w>, <a>, <s>, <d> : <x> --> Salir " << endl;
      cout << "" << endl;
      hero.callInput();

      segundos--;//Resta 1 a los segundos

      //Cuando los segundos son 0, resta 1 minuto
      if (segundos<=0)
      {
          minutos--;
          segundos = 59;
      }

      if (minutos < 0 )
      {
          cout << "" << endl;
          cout << " -- Limite de tiempo alcanzado -- " << endl;

          hero.drawCreditos();
          map.isGameOver = true;//Termina el ciclo while
      }


      //Actualizar información del jugador en el mapa
      if(map.setPlayerCell(hero.getValueX(), hero.getValueY()))
      {
     //   system("cls");
        map.draw();
      } else
      {
       // system("cls");
        hero.resetToSafePosition();
        //Dibujamos el mapa
        map.draw();
      }
      //map.draw();
      Sleep(1000);
    }

    return 0;
}
