#include <iostream>
#include <Alimentos.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
#include<list>
#include<Animacion.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais, mascota;
    Alimentos carne(10);

    firulais.comer(carne);

    firulais.jugar();
    firulais.jugar();
    firulais.jugar();

    cout
        << "vida de firulais"
        << firulais.Leervida()
        << endl;

    Dibujo dibujo("./assets/Animal.txt");
    Dibujo dibujo2("./assets/Animal2.txt");

    list<Dibujo> dibujo
    dibujo.push_back(dibujo);
    dibujo.push_back(dibujo2);
    
    Animacion animacion(dibujos);
    animacion.Reproducir();
    return 0;
}
