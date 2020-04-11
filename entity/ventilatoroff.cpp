#include "ventilatoroff.h"

ventilatorOFF::ventilatorOFF(ventilator *vent)
{
    this->vent = vent;
}

void ventilatorOFF::execute()
{
       vent->on();
}

