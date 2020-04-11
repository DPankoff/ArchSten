#ifndef VENTILATOROFF_H
#define VENTILATOROFF_H

#include "command.h"
#include "ventilator.h"

class ventilatorOFF : public command
{
public:
    ventilatorOFF(ventilator * vent);

    void execute();

    ventilator* vent;
};

#endif // VENTILATOROFF_H
