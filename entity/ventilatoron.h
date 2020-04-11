#ifndef VENTILATORON_H
#define VENTILATORON_H

#include "command.h"
#include "ventilator.h"

class ventilatorON  : public command
{
public:
    ventilatorON(ventilator* vent);

    void execute();

    ventilator* vent;
};

#endif // VENTILATORON_H
