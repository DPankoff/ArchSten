#ifndef DATAFRAME_H
#define DATAFRAME_H

#include <stdint.h>
#include <QString>
#include <QList>

class DataFrame
{
public:
    DataFrame();

    struct Data
    {
     int type_cadr;
     QByteArray matrix_cadr;
     QList<QString> names;
    } data;

};

#endif // DATAFRAME_H
