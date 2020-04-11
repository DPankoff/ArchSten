#include "ventilatoron.h"

ventilatorON::ventilatorON(ventilator *vent)
{
    this->vent = vent;
}

void ventilatorON::execute()
{
    vent->on();
}



