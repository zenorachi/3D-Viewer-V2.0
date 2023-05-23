QT       += core gui opengl openglwidgets
include(QtGifimage/gifimage/qtgifimage.pri)
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controller/adapter.cc \
    Controller/facade.cc \
    View/main.cc \
    View/mainwindow.cc \
    myopengl.cc \
    Model/model.cc \
    Controller/controller.cc

HEADERS += \
    myopengl.h \
    Controller/adapter.h \
    Controller/facade.h \
    Controller/singleton.h \
    View/mainwindow.h \
    Controller/controller.h \
    Model/model.h

FORMS += \
    View/mainwindow.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

