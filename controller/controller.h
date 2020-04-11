#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <drivers/ftdi.h>
#include "dataframe.h"
#include <usecase/usecase.h>


class controller: public QObject
{
    Q_OBJECT

public:
    controller(QObject *parent = nullptr);

    void parseCadr(uint8_t *data, uint32_t size);

    useCase *usecase;

public slots:
    void getftdiData(uint8_t *data, uint32_t size);

signals:
    void setDataFrame(DataFrame *frame);

private:
   ftdi* ftdi_interface;
   DataFrame *frame;


   struct CadrStrType1
   {
     uint8_t start = 0x2;
     uint8_t len   = 0;
     uint32_t crc  = 0;
     uint8_t end   = 0x3;
   } cadrstr;


};

#endif // CONTROLLER_H
