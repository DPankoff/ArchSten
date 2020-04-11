#ifndef FTDI_H
#define FTDI_H

#include <stdint.h>
#include <QObject>

class ftdi : public QObject
{
    Q_OBJECT

public:
    ftdi(QObject *parent = nullptr);

    void write_data(void* handle, uint8_t* data, uint32_t size);
    void read_data (void* handle, uint8_t* data, uint32_t size);

signals:
    void getData(uint8_t *data, uint32_t size);

public slots:
    void setData(uint8_t *data, uint32_t size);

};

#endif // FTDI_H
