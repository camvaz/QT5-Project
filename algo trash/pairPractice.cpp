#include <iostream>
#include <pair>
#include <vector>

using namespace std;

class Telefono{
private:
    string nombre;
public:
    Telefono(){}
    Telefono(string &newName): nombre(newName){}

};

class Sucursal
{
private:
    string nombre, ubicacion, colonia;
    pair < Telefono, int > *Telefonos;
    int cantidadCel;
public:
    Sucursal(string& newName, string& newUbicacion, string& nuevaColonia): nombre(newName), ubicacion(newUbicacion), colonia(nuevaColonia), cantidadCel(0), Telefonos(new pair <Telefono, int>[8]) {}
    void agrega(Telefono& cel, int& num){


        }
};


int main()
{
}
