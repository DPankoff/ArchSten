#include "controller.h"


controller::controller(QObject *parent)
{

    ftdi_interface = new ftdi();
    frame   =  new DataFrame();
    usecase =  new useCase();


    QObject::connect(ftdi_interface, SIGNAL(getData(uint8_t*,uint32_t)),this,SLOT(getftdiData(uint8_t*,uint32_t)));
    QObject::connect(this, SIGNAL(setDataFrame(DataFrame*)),usecase,SLOT(getDataFrame(DataFrame*)));
}

void controller::parseCadr(uint8_t *data, uint32_t size)
{
    int len = data[1];

    if ((data[0] == cadrstr.start) && (len == data[size-4]))
    {
            frame->data.type_cadr = 0;
            frame->data.matrix_cadr.append((const char*)data[3],len);
            setDataFrame(frame);

    }
}

void controller::getftdiData(uint8_t *data, uint32_t size)
{

}

