/****************************************************************************
** Meta object code from reading C++ file 'purchasetravelinsurance.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../courseWork/purchasetravelinsurance.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchasetravelinsurance.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS = QtMocHelpers::stringData(
    "PurchaseTravelInsurance",
    "closed",
    "",
    "on_startDatePb_clicked",
    "on_endDatePb_clicked",
    "on_purchasePb_clicked",
    "on_startCalendar_activated",
    "date",
    "on_endCalendar_activated",
    "onDialogClosed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[24];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[21];
    char stringdata5[22];
    char stringdata6[27];
    char stringdata7[5];
    char stringdata8[25];
    char stringdata9[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS_t qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "PurchaseTravelInsurance"
        QT_MOC_LITERAL(24, 6),  // "closed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 22),  // "on_startDatePb_clicked"
        QT_MOC_LITERAL(55, 20),  // "on_endDatePb_clicked"
        QT_MOC_LITERAL(76, 21),  // "on_purchasePb_clicked"
        QT_MOC_LITERAL(98, 26),  // "on_startCalendar_activated"
        QT_MOC_LITERAL(125, 4),  // "date"
        QT_MOC_LITERAL(130, 24),  // "on_endCalendar_activated"
        QT_MOC_LITERAL(155, 14)   // "onDialogClosed"
    },
    "PurchaseTravelInsurance",
    "closed",
    "",
    "on_startDatePb_clicked",
    "on_endDatePb_clicked",
    "on_purchasePb_clicked",
    "on_startCalendar_activated",
    "date",
    "on_endCalendar_activated",
    "onDialogClosed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPurchaseTravelInsuranceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       8,    1,   63,    2, 0x08,    7 /* Private */,
       9,    0,   66,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PurchaseTravelInsurance::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPurchaseTravelInsuranceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PurchaseTravelInsurance, std::true_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startDatePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_endDatePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_purchasePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startCalendar_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'on_endCalendar_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'onDialogClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PurchaseTravelInsurance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PurchaseTravelInsurance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_startDatePb_clicked(); break;
        case 2: _t->on_endDatePb_clicked(); break;
        case 3: _t->on_purchasePb_clicked(); break;
        case 4: _t->on_startCalendar_activated((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 5: _t->on_endCalendar_activated((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 6: _t->onDialogClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PurchaseTravelInsurance::*)();
            if (_t _q_method = &PurchaseTravelInsurance::closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PurchaseTravelInsurance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PurchaseTravelInsurance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPurchaseTravelInsuranceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PurchaseTravelInsurance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PurchaseTravelInsurance::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
