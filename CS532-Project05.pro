TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    record.cpp \
    bucket.cpp \
    hash.cpp

HEADERS += \
    record.h \
    bucket.h \
    hash.h
