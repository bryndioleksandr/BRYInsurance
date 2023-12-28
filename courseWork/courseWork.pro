QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


MOC_DIR = moc
RCC_DIR = rcc
UI_DIR = ui
unix:OBJECTS_DIR = unix
win32:OBJECTS_DIR = win32
macx:OBJECTS_DIR = mac
CONFIG(release, debug|release) {
    win32:QMAKE_POST_LINK = $$(QTDIR)/bin/windeployqt $$OUT_PWD/release
}

SOURCES += \
    Logger.cpp \
    Person.cpp \
    User.cpp \
    admintools.cpp \
    allinsurances.cpp \
    autoinsurance.cpp \
    confirmpurchasingauto.cpp \
    confirmpurchasinggadget.cpp \
    confirmpurchasingtravel.cpp \
    forgotpw.cpp \
    gadgetinsurance.cpp \
    insurancecompany.cpp \
    insuranceevents.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    manageinsurances.cpp \
    myaccount.cpp \
    myinsurances.cpp \
    mysqldbmanager.cpp \
    purchaseautoinsurance.cpp \
    purchasegadgetinsurance.cpp \
    purchasetravelinsurance.cpp \
    registr.cpp \
    resetpassword.cpp \
    savereceiptpdf.cpp \
    shop.cpp \
    showevents.cpp \
    travelinsurance.cpp

HEADERS += \
    Logger.h \
    Person.h \
    User.h \
    admintools.h \
    allinsurances.h \
    autoinsurance.h \
    confirmpurchasingauto.h \
    confirmpurchasinggadget.h \
    confirmpurchasingtravel.h \
    dbmanager.h \
    forgotpw.h \
    gadgetinsurance.h \
    insurancecompany.h \
    insuranceevents.h \
    login.h \
    mainwindow.h \
    manageinsurances.h \
    myaccount.h \
    myinsurances.h \
    mysqldbmanager.h \
    purchaseautoinsurance.h \
    purchasegadgetinsurance.h \
    purchasetravelinsurance.h \
    registr.h \
    resetpassword.h \
    savereceiptpdf.h \
    shop.h \
    showevents.h \
    travelinsurance.h

FORMS += \
    admintools.ui \
    allinsurances.ui \
    confirmpurchasingauto.ui \
    confirmpurchasinggadget.ui \
    confirmpurchasingtravel.ui \
    forgotpw.ui \
    insurancecompany.ui \
    insuranceevents.ui \
    login.ui \
    mainwindow.ui \
    manageinsurances.ui \
    myaccount.ui \
    myinsurances.ui \
    purchaseautoinsurance.ui \
    purchasegadgetinsurance.ui \
    purchasetravelinsurance.ui \
    registr.ui \
    resetpassword.ui \
    shop.ui \
    showevents.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc


