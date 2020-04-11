#ifndef USECASE_H
#define USECASE_H

#include <QObject>
#include <entity/command.h>
#include "entity/ventilator.h"
#include "entity/ventilatoron.h"
#include <controller/dataframe.h>

class useCase: public QObject
{
    Q_OBJECT

public:
    useCase(QObject *parent = nullptr);

    void chooseClass(int index,int type_cadr);

    void setCommand(command* cmd);
    void actionCmd();

    command* cmd;

public slots:
     void getDataFrame(DataFrame *frame_);

signals:
    void updateView(int index);

private:
    ventilator * vent;

    ventilatorON* ventCmdON;

    DataFrame *frame;

};

#endif // USECASE_H
