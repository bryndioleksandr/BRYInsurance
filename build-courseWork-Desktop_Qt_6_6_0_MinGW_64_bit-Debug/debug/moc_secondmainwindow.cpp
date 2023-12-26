/****************************************************************************
** Meta object code from reading C++ file 'secondmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../courseWork/secondmainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secondmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSecondMainwindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSecondMainwindowENDCLASS = QtMocHelpers::stringData(
    "SecondMainwindow",
    "closed",
    "",
    "on_autoInsurancePb_clicked",
    "on_travelInsurancePb_clicked",
    "on_gadgetInsurancePb_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSecondMainwindowENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[17];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[29];
    char stringdata5[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSecondMainwindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSecondMainwindowENDCLASS_t qt_meta_stringdata_CLASSSecondMainwindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "SecondMainwindow"
        QT_MOC_LITERAL(17, 6),  // "closed"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 26),  // "on_autoInsurancePb_clicked"
        QT_MOC_LITERAL(52, 28),  // "on_travelInsurancePb_clicked"
        QT_MOC_LITERAL(81, 28)   // "on_gadgetInsurancePb_clicked"
    },
    "SecondMainwindow",
    "closed",
    "",
    "on_autoInsurancePb_clicked",
    "on_travelInsurancePb_clicked",
    "on_gadgetInsurancePb_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSecondMainwindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SecondMainwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSecondMainwindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSecondMainwindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSecondMainwindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SecondMainwindow, std::true_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_autoInsurancePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_travelInsurancePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_gadgetInsurancePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SecondMainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecondMainwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_autoInsurancePb_clicked(); break;
        case 2: _t->on_travelInsurancePb_clicked(); break;
        case 3: _t->on_gadgetInsurancePb_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecondMainwindow::*)();
            if (_t _q_method = &SecondMainwindow::closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *SecondMainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondMainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSecondMainwindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SecondMainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SecondMainwindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
