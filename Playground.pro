#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T23:29:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Playground
TEMPLATE = app


SOURCES += main.cpp \
    myreact.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    score.cpp \
    health.cpp

HEADERS  += \
    myreact.h \
    bullet.h \
    enemy.h \
    game.h \
    score.h \
    health.h

FORMS    +=

RESOURCES += \
    resources.qrc
