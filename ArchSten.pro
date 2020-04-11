#-------------------------------------------------
#
# Project created by QtCreator 2020-04-11T14:33:29
#
#-------------------------------------------------

QT       += core gui

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ArchSten
TEMPLATE = app


SOURCES += main.cpp\
        start.cpp \
    drivers/ftdi.cpp \
    controller/controller.cpp \
    controller/dataframe.cpp \
    usecase/usecase.cpp \
    entity/ventilator.cpp \
    entity/ventilatoroff.cpp \
    entity/ventilatoron.cpp \
    preview/uimodel.cpp


HEADERS  += start.h \
    drivers/ftdi.h \
    controller/controller.h \
    controller/dataframe.h \
    usecase/usecase.h \
    entity/command.h \
    entity/ventilator.h \
    entity/ventilatoroff.h \
    entity/ventilatoron.h \
    preview/uimodel.h


FORMS    += start.ui
