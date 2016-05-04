TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    record.cpp \
    bucket.cpp \
    hashfile.cpp

HEADERS += \
    record.h \
    bucket.h \
    hashfile.h
