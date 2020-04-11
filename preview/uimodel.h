#ifndef UIMODEL_H
#define UIMODEL_H

#include <QList>
#include <QObject>
#include "controller/controller.h"


class uiModel : public QObject
{
    Q_OBJECT

public:
    uiModel(QObject *parent = nullptr);
    QList<int> paint_model;


public slots:
     void getParam( int index);


signals:
    void setUiModel(QList<int> list);

private:
    controller* control;

};

#endif // UIMODEL_H
