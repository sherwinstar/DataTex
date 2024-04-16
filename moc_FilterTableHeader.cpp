/****************************************************************************
** Meta object code from reading C++ file 'FilterTableHeader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "custom_widgets/FilterTableHeader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterTableHeader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilterTableHeader_t {
    QByteArrayData data[24];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterTableHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterTableHeader_t qt_meta_stringdata_FilterTableHeader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FilterTableHeader"
QT_MOC_LITERAL(1, 18, 13), // "filterChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "size_t"
QT_MOC_LITERAL(4, 40, 6), // "column"
QT_MOC_LITERAL(5, 47, 5), // "value"
QT_MOC_LITERAL(6, 53, 13), // "addCondFormat"
QT_MOC_LITERAL(7, 67, 6), // "filter"
QT_MOC_LITERAL(8, 74, 21), // "allCondFormatsCleared"
QT_MOC_LITERAL(9, 96, 17), // "condFormatsEdited"
QT_MOC_LITERAL(10, 114, 12), // "filterValues"
QT_MOC_LITERAL(11, 127, 6), // "values"
QT_MOC_LITERAL(12, 134, 15), // "generateFilters"
QT_MOC_LITERAL(13, 150, 6), // "number"
QT_MOC_LITERAL(14, 157, 24), // "number_of_hidden_filters"
QT_MOC_LITERAL(15, 182, 15), // "adjustPositions"
QT_MOC_LITERAL(16, 198, 12), // "clearFilters"
QT_MOC_LITERAL(17, 211, 9), // "setFilter"
QT_MOC_LITERAL(18, 221, 12), // "inputChanged"
QT_MOC_LITERAL(19, 234, 9), // "new_value"
QT_MOC_LITERAL(20, 244, 11), // "inputValues"
QT_MOC_LITERAL(21, 256, 21), // "addFilterAsCondFormat"
QT_MOC_LITERAL(22, 278, 19), // "clearAllCondFormats"
QT_MOC_LITERAL(23, 298, 15) // "editCondFormats"

    },
    "FilterTableHeader\0filterChanged\0\0"
    "size_t\0column\0value\0addCondFormat\0"
    "filter\0allCondFormatsCleared\0"
    "condFormatsEdited\0filterValues\0values\0"
    "generateFilters\0number\0number_of_hidden_filters\0"
    "adjustPositions\0clearFilters\0setFilter\0"
    "inputChanged\0new_value\0inputValues\0"
    "addFilterAsCondFormat\0clearAllCondFormats\0"
    "editCondFormats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterTableHeader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       6,    2,   94,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      10,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,  108,    2, 0x0a /* Public */,
      12,    1,  113,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    0,  117,    2, 0x0a /* Public */,
      17,    2,  118,    2, 0x0a /* Public */,
      18,    1,  123,    2, 0x08 /* Private */,
      20,    0,  126,    2, 0x08 /* Private */,
      21,    1,  127,    2, 0x08 /* Private */,
      22,    0,  130,    2, 0x08 /* Private */,
      23,    0,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   13,   14,
    QMetaType::Void, 0x80000000 | 3,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FilterTableHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterTableHeader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filterChanged((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->addCondFormat((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->allCondFormatsCleared((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 3: _t->condFormatsEdited((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 4: _t->filterValues((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->generateFilters((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 6: _t->generateFilters((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 7: _t->adjustPositions(); break;
        case 8: _t->clearFilters(); break;
        case 9: _t->setFilter((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->inputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->inputValues(); break;
        case 12: _t->addFilterAsCondFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->clearAllCondFormats(); break;
        case 14: _t->editCondFormats(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterTableHeader::*)(size_t , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterTableHeader::filterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterTableHeader::*)(size_t , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterTableHeader::addCondFormat)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FilterTableHeader::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterTableHeader::allCondFormatsCleared)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FilterTableHeader::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterTableHeader::condFormatsEdited)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FilterTableHeader::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterTableHeader::filterValues)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FilterTableHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_meta_stringdata_FilterTableHeader.data,
    qt_meta_data_FilterTableHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterTableHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterTableHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterTableHeader.stringdata0))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int FilterTableHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void FilterTableHeader::filterChanged(size_t _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FilterTableHeader::addCondFormat(size_t _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FilterTableHeader::allCondFormatsCleared(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FilterTableHeader::condFormatsEdited(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FilterTableHeader::filterValues(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
