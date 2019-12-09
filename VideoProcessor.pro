QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VideoProcessor
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

INCLUDEPATH += /usr/local/include/opencv4
LIBS += -L/usr/local/lib -L/usr/arm-linux-gnueabi/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc -lopencv_videoio -lopencv_objdetect -lwiringPi
INCLUDEPATH += /usr/arm-linux-gnueabi/include

target.path = /home/pi/blackbox
INSTALLS += target
