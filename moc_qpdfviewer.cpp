/****************************************************************************
** Meta object code from reading C++ file 'qpdfviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "pdfviewer/qpdfviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpdfviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPdfViewer_t {
    QByteArrayData data[17];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPdfViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPdfViewer_t qt_meta_stringdata_QPdfViewer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QPdfViewer"
QT_MOC_LITERAL(1, 11, 4), // "open"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 11), // "docLocation"
QT_MOC_LITERAL(4, 29, 10), // "getPdfView"
QT_MOC_LITERAL(5, 40, 20), // "QAbstractScrollArea*"
QT_MOC_LITERAL(6, 61, 11), // "hideToolBar"
QT_MOC_LITERAL(7, 73, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(8, 97, 22), // "on_actionPdf_triggered"
QT_MOC_LITERAL(9, 120, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(10, 145, 26), // "on_actionZoom_In_triggered"
QT_MOC_LITERAL(11, 172, 27), // "on_actionZoom_Out_triggered"
QT_MOC_LITERAL(12, 200, 32), // "on_actionPrevious_Page_triggered"
QT_MOC_LITERAL(13, 233, 28), // "on_actionNext_Page_triggered"
QT_MOC_LITERAL(14, 262, 29), // "on_actionContinuous_triggered"
QT_MOC_LITERAL(15, 292, 26), // "on_actionHideTab_triggered"
QT_MOC_LITERAL(16, 319, 26) // "on_actionShowTab_triggered"

    },
    "QPdfViewer\0open\0\0docLocation\0getPdfView\0"
    "QAbstractScrollArea*\0hideToolBar\0"
    "on_actionOpen_triggered\0on_actionPdf_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionZoom_In_triggered\0"
    "on_actionZoom_Out_triggered\0"
    "on_actionPrevious_Page_triggered\0"
    "on_actionNext_Page_triggered\0"
    "on_actionContinuous_triggered\0"
    "on_actionHideTab_triggered\0"
    "on_actionShowTab_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPdfViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    0x80000000 | 5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QPdfViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPdfViewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: { QAbstractScrollArea* _r = _t->getPdfView();
            if (_a[0]) *reinterpret_cast< QAbstractScrollArea**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->hideToolBar(); break;
        case 3: _t->on_actionOpen_triggered(); break;
        case 4: _t->on_actionPdf_triggered(); break;
        case 5: _t->on_actionPrint_triggered(); break;
        case 6: _t->on_actionZoom_In_triggered(); break;
        case 7: _t->on_actionZoom_Out_triggered(); break;
        case 8: _t->on_actionPrevious_Page_triggered(); break;
        case 9: _t->on_actionNext_Page_triggered(); break;
        case 10: _t->on_actionContinuous_triggered(); break;
        case 11: _t->on_actionHideTab_triggered(); break;
        case 12: _t->on_actionShowTab_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPdfViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_QPdfViewer.data,
    qt_meta_data_QPdfViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPdfViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPdfViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPdfViewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QPdfViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
