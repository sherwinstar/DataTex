/****************************************************************************
** Meta object code from reading C++ file 'zoomselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "pdfviewer/zoomselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZoomSelector_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZoomSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZoomSelector_t qt_meta_stringdata_ZoomSelector = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ZoomSelector"
QT_MOC_LITERAL(1, 13, 15), // "zoomModeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "QPdfView::ZoomMode"
QT_MOC_LITERAL(4, 49, 8), // "zoomMode"
QT_MOC_LITERAL(5, 58, 17), // "zoomFactorChanged"
QT_MOC_LITERAL(6, 76, 10), // "zoomFactor"
QT_MOC_LITERAL(7, 87, 13), // "setZoomFactor"
QT_MOC_LITERAL(8, 101, 5), // "reset"
QT_MOC_LITERAL(9, 107, 20), // "onCurrentTextChanged"
QT_MOC_LITERAL(10, 128, 4) // "text"

    },
    "ZoomSelector\0zoomModeChanged\0\0"
    "QPdfView::ZoomMode\0zoomMode\0"
    "zoomFactorChanged\0zoomFactor\0setZoomFactor\0"
    "reset\0onCurrentTextChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZoomSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QReal,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void ZoomSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZoomSelector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zoomModeChanged((*reinterpret_cast< QPdfView::ZoomMode(*)>(_a[1]))); break;
        case 1: _t->zoomFactorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->setZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->onCurrentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZoomSelector::*)(QPdfView::ZoomMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomSelector::zoomModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ZoomSelector::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomSelector::zoomFactorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZoomSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_ZoomSelector.data,
    qt_meta_data_ZoomSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZoomSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZoomSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomSelector.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int ZoomSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ZoomSelector::zoomModeChanged(QPdfView::ZoomMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZoomSelector::zoomFactorChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
