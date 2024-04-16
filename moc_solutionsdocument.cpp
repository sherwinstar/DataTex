/****************************************************************************
** Meta object code from reading C++ file 'solutionsdocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/solutionsdocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'solutionsdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SolutionsDocument_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolutionsDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolutionsDocument_t qt_meta_stringdata_SolutionsDocument = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SolutionsDocument"
QT_MOC_LITERAL(1, 18, 11), // "ItemChecked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 48, 4), // "item"
QT_MOC_LITERAL(5, 53, 6), // "column"
QT_MOC_LITERAL(6, 60, 12), // "DocumentText"
QT_MOC_LITERAL(7, 73, 22), // "on_BuildButton_clicked"
QT_MOC_LITERAL(8, 96, 30), // "on_ExercisesInDocument_clicked"
QT_MOC_LITERAL(9, 127, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 139, 5), // "index"
QT_MOC_LITERAL(11, 145, 25), // "on_BuildButtonDoc_clicked"
QT_MOC_LITERAL(12, 171, 12) // "findSolution"

    },
    "SolutionsDocument\0ItemChecked\0\0"
    "QTreeWidgetItem*\0item\0column\0DocumentText\0"
    "on_BuildButton_clicked\0"
    "on_ExercisesInDocument_clicked\0"
    "QModelIndex\0index\0on_BuildButtonDoc_clicked\0"
    "findSolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolutionsDocument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SolutionsDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SolutionsDocument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ItemChecked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->DocumentText(); break;
        case 2: _t->on_BuildButton_clicked(); break;
        case 3: _t->on_ExercisesInDocument_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_BuildButtonDoc_clicked(); break;
        case 5: _t->findSolution(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SolutionsDocument::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SolutionsDocument.data,
    qt_meta_data_SolutionsDocument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SolutionsDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolutionsDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SolutionsDocument.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SolutionsDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
