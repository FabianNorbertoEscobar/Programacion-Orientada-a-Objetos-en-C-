#include "Pedal.hpp"

#include <iostream>

using namespace std;

Pedal::Pedal(bool plastico)
{
    this->plastico=plastico;
}

ostream& operator << (ostream &stream,const Pedal &pedal)
{
    return stream << "Pedal con pl�stico: " << (pedal.plastico?"SI":"NO");
}
