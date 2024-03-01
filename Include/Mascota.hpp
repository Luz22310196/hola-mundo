#pragma once
#include <Alimentos.hpp>

class Mascota{
private:
    int vida;
public:
    Mascota(){
        this->vida =0;
    }
    void comer (Alimentos alimento){
        vida += alimento.ExtraerEnergia();
    }
    void jugar(){
        this->vida -= 2;
    }
    int Leervida(){
        return this->vida; 
    }
};