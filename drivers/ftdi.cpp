#include "ftdi.h"

#define POINT  0

ftdi::ftdi(QObject *parent)
{

}

void ftdi::write_data(void* handle, uint8_t* data, uint32_t size)
{
    setData(data,size);
}

void ftdi::read_data(void* handle, uint8_t* data, uint32_t size)
{
    getData(data,size);
}

void ftdi::setData(uint8_t *data, uint32_t size)
{
     write_data(POINT, data,size);
}

