#-------------------------------------------------
#
# Project created by QtCreator 2017-03-09T22:21:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Trabalho1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Bubble.cpp \
    heap_sort.cpp \
    Inserction.cpp \
    Merge_Sort.cpp \
    Quick_Sort.cpp \
    Selection.cpp

HEADERS  += mainwindow.h \
    Bubble.h \
    heap_sort.h \
    Inserction.h \
    Merge_Sort.h \
    Quick_Sort.h \
    Selection.h

FORMS    += mainwindow.ui

RC_ICONS = favicon.ICO
