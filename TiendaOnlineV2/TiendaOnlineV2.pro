#-------------------------------------------------
#
# Project created by QtCreator 2018-11-28T17:15:59
#
#-------------------------------------------------

QT       += core gui widgets sql

TARGET = TiendaOnlineV2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    clientwindow.cpp \
    adminwindow.cpp \
    cliente.cpp \
    persona.cpp \
    administrador.cpp \
    solicitudcompra.cpp \
    compra.cpp \
    sucursal.cpp \
    celular.cpp \
    documento.cpp \
    confirmacion_doc.cpp \
    rechazo_doc.cpp \
    form_newclient.cpp \
    lista.cpp \
    carritowindow.cpp \
    store.cpp \
    storesonata.cpp \
    storeponiente.cpp \
    storeange.cpp \
    storeserdan.cpp \
    ubiserdan.cpp \
    grafo.cpp

HEADERS += \
        mainwindow.h \
    clientwindow.h \
    adminwindow.h \
    cliente.h \
    persona.h \
    administrador.h \
    solicitudcompra.h \
    compra.h \
    sucursal.h \
    celular.h \
    documento.h \
    confirmacion_doc.h \
    rechazo_doc.h \
    form_newclient.h \
    lista.h \
    carritowindow.h \
    store.h \
    storesonata.h \
    storeponiente.h \
    storeange.h \
    storeserdan.h \
    ubiserdan.h \
    grafo.h

FORMS += \
        mainwindow.ui \
    clientwindow.ui \
    adminwindow.ui \
    form_newclient.ui \
    carritowindow.ui \
    store.ui \
    storesonata.ui \
    storeponiente.ui \
    storeange.ui \
    storeserdan.ui \
    ubiserdan.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
