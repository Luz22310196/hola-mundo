#pragma once
class Alimentos
{
private:
    int energia;

public:
    Alimentos(int energia)
    {
        this->energia = energia;
    }
    Alimentos() {}
    int ExtraerEnergia()
    {
        return energia;
    }
};
