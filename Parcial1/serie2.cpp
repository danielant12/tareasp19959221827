#include <iostream>

using namespace std;
//Definiendo mi primera clase en c++
class Tio
{
public:
    //Definiendo atributos de la clase
    string Nombre;
    //Definiendo los contructores
    Tio()
    {
        Nombre="Mario";
    }
    Tio(string pNombre)
    {
        Nombre = pNombre;
    }
    //Definiendo los comportamientos o metodos
    void Hola()
    {
        cout << Nombre << " dice Hola " << endl;
    }
};
int main()
{
    //Creando mi primer objeto
    Tio miPrimerTio;
    cout << "Mi primer Tio creado es un hombre y se llama:  " << miPrimerTio.Nombre << endl;
    Tio miSegundoTio("Juan");
    cout << "Mi segundo Tio creado es otro hombre y se llama:  " << miSegundoTio.Nombre << endl;
    Tio miTercerTio("Carlos");
    cout << "Mi tercer Tio creado es otro hombre y se llama:  " << miTercerTio.Nombre << endl;
    cout << "Mi primer Tio se comunica " << endl;
    miPrimerTio.Hola();
    miSegundoTio.Hola();
    miTercerTio.Hola();
    return 0;
}

