#include <iostream>
#include <Alimentos.hpp>
#include <Mascota.hpp>
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
   <<"vida de firulais"
   <<firulais.Leervida()
   <<endl;

    return 0;
}
