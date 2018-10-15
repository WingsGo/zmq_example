#-------------------------------------------------
#
# Project created by QtCreator 2018-10-15T16:30:11
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = zmq_client
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

win32: LIBS += -L$$PWD/../zmq/lib/ -llibzmq-v90-mt-4_0_4

INCLUDEPATH += $$PWD/../zmq/include
DEPENDPATH += $$PWD/../zmq/include
