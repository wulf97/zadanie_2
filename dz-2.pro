#-------------------------------------------------
#
# Project created by QtCreator 2019-01-10T15:58:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dz-2
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

win32 {
    CONFIG(debug, debug|release) {
        TARGET_SUFFIX = d
        message(Debug On)
        CONFIG += DebugBuild
    } else:CONFIG(release, debug|release) {
        message(Release On)
        CONFIG += ReleaseBuild
    } else {
        error(Unsupported build)
    }

    BASEDIR = $${IN_PWD}
    DebugBuild {
        DESTDIR = $${_PRO_FILE_PWD_}/../debug
        BUILDDIR = $${_PRO_FILE_PWD_}/../trash/build-debug$${TARGET}
    }
    ReleaseBuild {
        DESTDIR = $${_PRO_FILE_PWD_}/../release
        BUILDDIR = $${_PRO_FILE_PWD_}/../trash/build-release$${TARGET}
    OBJECTS_DIR = $${BUILDDIR}/obj
    MOC_DIR =$${BUILDDIR}/moc
    UI_DIR =$${BUILDDIR}/ui
    RCC_DIR =$${BUILDDIR}/rcc

    message(BUILDDIR $$BUILDDIR)
    message(BASEDIR $$BASEDIR DESTDIR $$DESTDIR TARGET $$TARGET)

}
}

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    valwidget.cpp \
    operationswidget.cpp \
    numtopwidget.cpp \
    numbottomwidget.cpp \
    equwidget.cpp

HEADERS += \
    mainwindow.h \
    valwidget.h \
    operationswidget.h \
    numtopwidget.h \
    numbottomwidget.h \
    equwidget.h

FORMS += \
    mainwindow.ui \
    valwidget.ui \
    operationswidget.ui \
    numtopwidget.ui \
    numbottomwidget.ui \
    equwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
