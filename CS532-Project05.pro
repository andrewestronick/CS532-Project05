TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bucket.cpp \
    hashfile.cpp \
    record.cpp

HEADERS += \
    bucket.h \
    hashfile.h \
    record.h
