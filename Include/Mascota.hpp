#pragma once
#include <Alimentos.hpp>

class Mascota{
private:
    int vida;
public:
    Mascota(){
        this->vida =0;
    }
    Mascota(){}
    void comer (Alimentos alimento){
        vida += alimento.ExtraerEnergia()
    }
    void jugar(){
        this->vida -- 2;
    }
    int Leervida(){
        return this->vida; 
    }
};