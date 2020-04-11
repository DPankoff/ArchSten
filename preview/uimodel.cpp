#include "uimodel.h"


uiModel::uiModel(QObject *parent)
{
    control = new controller();
    QObject::connect(control->usecase,SIGNAL(updateView(index)),this,SLOT(getParam(index)));
}

void uiModel::getParam(int index)
{

}

