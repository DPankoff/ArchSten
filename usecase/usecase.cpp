#include "usecase.h"


useCase::useCase(QObject *parent)
{
   vent      = new ventilator();
   ventCmdON = new ventilatorON(vent);
}

void useCase::chooseClass(int index, int type_cadr)
{
    if (type_cadr == 0)
    {
        switch(index)
        {
        case 0:
            setCommand(ventCmdON);
            actionCmd();
            updateView(index);
            break;
        default:
            break;
        }
    }

}

void useCase::setCommand(command *cmd)
{
    this->cmd = cmd;
}

void useCase::actionCmd()
{
    cmd->execute();
}

void useCase::getDataFrame(DataFrame *frame_)
{
    frame = frame_;

    for(int i = 0; i< frame->data.matrix_cadr.length(); i++)
        chooseClass(frame->data.matrix_cadr.at(i), frame->data.type_cadr);
}

