/****************************************************************************
** Meta object code from reading C++ file 'backup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/backup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BackUp_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BackUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BackUp_t qt_meta_stringdata_BackUp = {
    {
QT_MOC_LITERAL(0, 0, 6), // "BackUp"
QT_MOC_LITERAL(1, 7, 28), // "on_BackUpFilesButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 47), // "on_OpenDatabasesTreeWidget_it..."
QT_MOC_LITERAL(4, 85, 21), // "on_SelectPath_clicked"
QT_MOC_LITERAL(5, 107, 14), // "CreateTexFiles"
QT_MOC_LITERAL(6, 122, 9), // "CopyFiles"
QT_MOC_LITERAL(7, 132, 12), // "QStringList&"
QT_MOC_LITERAL(8, 145, 4), // "list"
QT_MOC_LITERAL(9, 150, 6) // "folder"

    },
    "BackUp\0on_BackUpFilesButton_clicked\0"
    "\0on_OpenDatabasesTreeWidget_itemSelectionChanged\0"
    "on_SelectPath_clicked\0CreateTexFiles\0"
    "CopyFiles\0QStringList&\0list\0folder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackUp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,

       0        // eod
};

void BackUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackUp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_BackUpFilesButton_clicked(); break;
        case 1: _t->on_OpenDatabasesTreeWidget_itemSelectionChanged(); break;
        case 2: _t->on_SelectPath_clicked(); break;
        case 3: _t->CreateTexFiles(); break;
        case 4: _t->CopyFiles((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BackUp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BackUp.data,
    qt_meta_data_BackUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BackUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackUp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BackUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
