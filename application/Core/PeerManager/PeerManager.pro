# -------------------------------------------------
# Project created by QtCreator 2009-10-05T19:14:23
# -------------------------------------------------
QT += network
QT -= gui
TARGET = PeerManager

INCLUDEPATH += . \
    ../.. \
    ${PROTOBUF}/src
LIBS += -L${PROTOBUF}/src/.libs \
    -lprotobuf

TEMPLATE = lib
DESTDIR = "output/debug"
MOC_DIR = ".tmp/debug"
OBJECTS_DIR = ".tmp/debug"
DEFINES += PEERMANAGER_LIBRARY
SOURCES += priv/PeerManager.cpp \
    priv/Peer.cpp
HEADERS += PeerManager_global.h \
    IPeerManager.h \
    IPeer.h \
    IGetEntries.h \
    priv/PeerManager.h \
    priv/Peer.h