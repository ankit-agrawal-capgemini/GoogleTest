#-------------------------------------------------
#
# Project created by QtCreator 2019-04-01T18:05:42
#
#-------------------------------------------------

QT       += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GoogleTest
TEMPLATE = app

CONFIG += testcase

LIBS += -lgtest -lgtest_main

INCLUDEPATH += gtest/include gtest

SOURCES += main.cpp\
        Person.cpp \
        Test/PersonTest.cpp

HEADERS  += Person.h

FORMS    += Person.ui
