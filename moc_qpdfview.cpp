/****************************************************************************
** Meta object code from reading C++ file 'qpdfview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "pdfviewer/qpdfview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpdfview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPdfView_t {
    QByteArrayData data[28];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPdfView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPdfView_t qt_meta_stringdata_QPdfView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QPdfView"
QT_MOC_LITERAL(1, 9, 15), // "documentChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "QPdfDocument*"
QT_MOC_LITERAL(4, 40, 8), // "document"
QT_MOC_LITERAL(5, 49, 15), // "pageModeChanged"
QT_MOC_LITERAL(6, 65, 8), // "PageMode"
QT_MOC_LITERAL(7, 74, 8), // "pageMode"
QT_MOC_LITERAL(8, 83, 15), // "zoomModeChanged"
QT_MOC_LITERAL(9, 99, 8), // "ZoomMode"
QT_MOC_LITERAL(10, 108, 8), // "zoomMode"
QT_MOC_LITERAL(11, 117, 17), // "zoomFactorChanged"
QT_MOC_LITERAL(12, 135, 10), // "zoomFactor"
QT_MOC_LITERAL(13, 146, 18), // "pageSpacingChanged"
QT_MOC_LITERAL(14, 165, 11), // "pageSpacing"
QT_MOC_LITERAL(15, 177, 22), // "documentMarginsChanged"
QT_MOC_LITERAL(16, 200, 8), // "QMargins"
QT_MOC_LITERAL(17, 209, 15), // "documentMargins"
QT_MOC_LITERAL(18, 225, 11), // "setPageMode"
QT_MOC_LITERAL(19, 237, 4), // "mode"
QT_MOC_LITERAL(20, 242, 11), // "setZoomMode"
QT_MOC_LITERAL(21, 254, 13), // "setZoomFactor"
QT_MOC_LITERAL(22, 268, 6), // "factor"
QT_MOC_LITERAL(23, 275, 10), // "SinglePage"
QT_MOC_LITERAL(24, 286, 9), // "MultiPage"
QT_MOC_LITERAL(25, 296, 10), // "CustomZoom"
QT_MOC_LITERAL(26, 307, 10), // "FitToWidth"
QT_MOC_LITERAL(27, 318, 9) // "FitInView"

    },
    "QPdfView\0documentChanged\0\0QPdfDocument*\0"
    "document\0pageModeChanged\0PageMode\0"
    "pageMode\0zoomModeChanged\0ZoomMode\0"
    "zoomMode\0zoomFactorChanged\0zoomFactor\0"
    "pageSpacingChanged\0pageSpacing\0"
    "documentMarginsChanged\0QMargins\0"
    "documentMargins\0setPageMode\0mode\0"
    "setZoomMode\0setZoomFactor\0factor\0"
    "SinglePage\0MultiPage\0CustomZoom\0"
    "FitToWidth\0FitInView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPdfView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   86, // properties
       2,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
      11,    1,   68,    2, 0x06 /* Public */,
      13,    1,   71,    2, 0x06 /* Public */,
      15,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   77,    2, 0x0a /* Public */,
      20,    1,   80,    2, 0x0a /* Public */,
      21,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,   19,
    QMetaType::Void, 0x80000000 | 9,   19,
    QMetaType::Void, QMetaType::QReal,   22,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       7, 0x80000000 | 6, 0x0049510b,
      10, 0x80000000 | 9, 0x0049510b,
      12, QMetaType::QReal, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      17, 0x80000000 | 16, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    2,  120,
       9,    9, 0x0,    3,  124,

 // enum data: key, value
      23, uint(QPdfView::SinglePage),
      24, uint(QPdfView::MultiPage),
      25, uint(QPdfView::CustomZoom),
      26, uint(QPdfView::FitToWidth),
      27, uint(QPdfView::FitInView),

       0        // eod
};

void QPdfView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPdfView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->documentChanged((*reinterpret_cast< QPdfDocument*(*)>(_a[1]))); break;
        case 1: _t->pageModeChanged((*reinterpret_cast< PageMode(*)>(_a[1]))); break;
        case 2: _t->zoomModeChanged((*reinterpret_cast< ZoomMode(*)>(_a[1]))); break;
        case 3: _t->zoomFactorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->pageSpacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->documentMarginsChanged((*reinterpret_cast< QMargins(*)>(_a[1]))); break;
        case 6: _t->setPageMode((*reinterpret_cast< PageMode(*)>(_a[1]))); break;
        case 7: _t->setZoomMode((*reinterpret_cast< ZoomMode(*)>(_a[1]))); break;
        case 8: _t->setZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPdfView::*)(QPdfDocument * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPdfView::documentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPdfView::*)(PageMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPdfView::pageModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPdfView::*)(ZoomMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPdfView::zoomModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QPdfView::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPdfView::zoomFactorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QPdfView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPdfView::pageSpacingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QPdfView::*)(QMargins );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPdfView::documentMarginsChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPdfView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPdfDocument**>(_v) = _t->document(); break;
        case 1: *reinterpret_cast< PageMode*>(_v) = _t->pageMode(); break;
        case 2: *reinterpret_cast< ZoomMode*>(_v) = _t->zoomMode(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->zoomFactor(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->pageSpacing(); break;
        case 5: *reinterpret_cast< QMargins*>(_v) = _t->documentMargins(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPdfView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDocument(*reinterpret_cast< QPdfDocument**>(_v)); break;
        case 1: _t->setPageMode(*reinterpret_cast< PageMode*>(_v)); break;
        case 2: _t->setZoomMode(*reinterpret_cast< ZoomMode*>(_v)); break;
        case 3: _t->setZoomFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setPageSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setDocumentMargins(*reinterpret_cast< QMargins*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPdfView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_QPdfView.data,
    qt_meta_data_QPdfView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPdfView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPdfView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPdfView.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QPdfView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPdfView::documentChanged(QPdfDocument * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPdfView::pageModeChanged(PageMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPdfView::zoomModeChanged(ZoomMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPdfView::zoomFactorChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPdfView::pageSpacingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QPdfView::documentMarginsChanged(QMargins _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
