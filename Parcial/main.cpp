//DANIEL ANTONIO CHACON MORATAYA
#include <iostream>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iomanip>
#include "encabezadoparcial.h"

using namespace std;


int main()
{
    char opcion;
    do{
    system("cls");
    srand(getpid());
    cout << "\nCamaras de la Industia"<< endl;
    float matriz1[NUMERO_EMPRESAS][NUMERO_FECHAS+1];
    char camara1[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA] = {"Empresa1     ", "Empresa2               ", "Empresa3  ", "Empresa4      ","Empresa5                "};
    llenarMatriz(matriz1);
    imprimirMatriz1(matriz1, camara1);
    float totalMonto1 = 0;
    for (int y = 0; y < NUMERO_EMPRESAS; y++)
    {
    totalMonto1 += matriz1[y][NUMERO_FECHAS];
    }
    float promedioMonto1 = totalMonto1 / NUMERO_EMPRESAS;
    cout << "\nEl promedio total para la Camara de la Industria es: " << promedioMonto1 << endl;
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    cout << "\nCamaras de la Construccion"<< endl;
    float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1];
    char camara2[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA] = {"Empresa1                 ", "Empresa2                   ", "Empresa3                     ", "Empresa4       ","Empresa5       "};
    llenarMatriz2(matriz2);
    imprimirMatriz2(matriz2, camara2);
    float totalMonto2 = 0;
    for (int y = 0; y < NUMERO_EMPRESAS; y++)
    {
    totalMonto2 += matriz2[y][NUMERO_FECHAS];
    }
    float promedioMonto2 = totalMonto2 / NUMERO_EMPRESAS;
    cout << "\nEl promedio total para la Camara de la Construccion es: " << promedioMonto2 << endl;
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    cout << "\nCamaras de Trasporte"<< endl;
    float matriz3[NUMERO_EMPRESAS][NUMERO_FECHAS+1];
    char camara3[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA] = {"Empresa1                 ", "Empresa2                   ", "Empresa3                     ", "Empresa4       ","Empresa5 "};
    llenarMatriz2(matriz2);
    imprimirMatriz3(matriz3, camara3);
    float totalMonto3 = 0;
    for (int y = 0; y < NUMERO_EMPRESAS; y++)
    {
    totalMonto3 += matriz3[y][NUMERO_FECHAS];
    }
    float promedioMonto3= totalMonto3 / NUMERO_EMPRESAS;
    cout << "\nEl promedio total para la Camara de Transporte es: " << promedioMonto3 << endl;
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    if (promedioMonto1 > promedioMonto2 && promedioMonto1 > promedioMonto3)
    {
        cout << "\n LA MEJOR CAMARA ES: CAMARA DE LA INDUSTRIA, CON UN PROMEDIO DE: "<< promedioMonto1 <<"!!!\n"<< endl;
    }else if (promedioMonto2 > promedioMonto1 && promedioMonto2 > promedioMonto1)
    {
        cout << "\n LA MEJOR CAMARA ES: CAMARA DE LA CONSTRUCCION, CON UN PROMEDIO DE: "<< promedioMonto2 <<"!!!\n" <<endl;
    }else
    {
        cout << "\n LA MEJOR CAMARA ES: CAMARA DE TRANSPORTE, CON UN PROMEDIO DE: "<< promedioMonto3 <<"!!!" <<endl;
    }
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << " "<< endl;
     cout << "¿Alguna nueva peticion? escribir s si Si, o n si No"<<endl;
    cin >> opcion;
    }while (opcion == 's');
    cout << " "<< endl;
    cout << "No se realizara"<< endl;
    system ("pause > nul");
    return 0;
}
