#-------------------------------------------------
#
# Project created by QtCreator 2016-09-11T17:51:01
#
#-------------------------------------------------

QT       += core gui
CONFIG+= static
LIBS+=Qt5Cored.lib
LIBS+=Qt5Widgetsd.lib
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CodeLinkQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    desk.cpp \
    link.cpp \
    block.cpp \
    lua/lapi.c \
    lua/lauxlib.c \
    lua/lbaselib.c \
    lua/lbitlib.c \
    lua/lcode.c \
    lua/lcorolib.c \
    lua/lctype.c \
    lua/ldblib.c \
    lua/ldebug.c \
    lua/ldo.c \
    lua/ldump.c \
    lua/lfunc.c \
    lua/lgc.c \
    lua/linit.c \
    lua/liolib.c \
    lua/llex.c \
    lua/lmathlib.c \
    lua/lmem.c \
    lua/loadlib.c \
    lua/lobject.c \
    lua/lopcodes.c \
    lua/loslib.c \
    lua/lparser.c \
    lua/lstate.c \
    lua/lstring.c \
    lua/lstrlib.c \
    lua/ltable.c \
    lua/ltablib.c \
    lua/ltm.c \
    lua/lua.c \
    lua/luac.c \
    lua/lundump.c \
    lua/lutf8lib.c \
    lua/lvm.c \
    lua/lzio.c

HEADERS  += mainwindow.h \
    desk.h \
    link.h \
    block.h \
    lua/lapi.h \
    lua/lauxlib.h \
    lua/lcode.h \
    lua/lctype.h \
    lua/ldebug.h \
    lua/ldo.h \
    lua/lfunc.h \
    lua/lgc.h \
    lua/llex.h \
    lua/llimits.h \
    lua/lmem.h \
    lua/lobject.h \
    lua/lopcodes.h \
    lua/lparser.h \
    lua/lprefix.h \
    lua/lstate.h \
    lua/lstring.h \
    lua/ltable.h \
    lua/ltm.h \
    lua/lua.h \
    lua/luaconf.h \
    lua/lualib.h \
    lua/lundump.h \
    lua/lvm.h \
    lua/lzio.h \
    lua/lua.hpp

FORMS    += mainwindow.ui \
    desk.ui

INCLUDEPATH += $$PWD/../../../Downloads/opencv/build/include
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Downloads/opencv/build/x64/vc12/bin/ -lopencv_world310
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Downloads/opencv/build/x64/vc12/bin/ -lopencv_world310d
else:unix:!macx: LIBS += -L$$PWD/../../../Downloads/opencv/build/x64/vc12/bin/ -lopencv_world310
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../Downloads/opencv/build/x64/vc12/lib/ -lopencv_world310
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../Downloads/opencv/build/x64/vc12/lib/ -lopencv_world310d
else:unix:!macx: LIBS += -L$$PWD/../../../Downloads/opencv/build/x64/vc12/lib/ -lopencv_world310

INCLUDEPATH += $$PWD/../../../Downloads/opencv/build/x64/vc12
DEPENDPATH += $$PWD/../../../Downloads/opencv/build/x64/vc12

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../Downloads/opencv/build/x64/vc12/lib/libopencv_world310.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../Downloads/opencv/build/x64/vc12/lib/libopencv_world310d.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../Downloads/opencv/build/x64/vc12/lib/opencv_world310.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../Downloads/opencv/build/x64/vc12/lib/opencv_world310d.lib
else:unix:!macx: PRE_TARGETDEPS += $$PWD/../../../Downloads/opencv/build/x64/vc12/lib/libopencv_world310.a
