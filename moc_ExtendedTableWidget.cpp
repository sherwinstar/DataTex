/****************************************************************************
** Meta object code from reading C++ file 'ExtendedTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "custom_widgets/ExtendedTableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtendedTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UniqueFilterModel_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UniqueFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UniqueFilterModel_t qt_meta_stringdata_UniqueFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 17) // "UniqueFilterModel"

    },
    "UniqueFilterModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UniqueFilterModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void UniqueFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject UniqueFilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_UniqueFilterModel.data,
    qt_meta_data_UniqueFilterModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UniqueFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UniqueFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UniqueFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int UniqueFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ExtendedTableWidgetEditorDelegate_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtendedTableWidgetEditorDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtendedTableWidgetEditorDelegate_t qt_meta_stringdata_ExtendedTableWidgetEditorDelegate = {
    {
QT_MOC_LITERAL(0, 0, 33), // "ExtendedTableWidgetEditorDele..."
QT_MOC_LITERAL(1, 34, 19), // "dataAboutToBeEdited"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 67, 5) // "index"

    },
    "ExtendedTableWidgetEditorDelegate\0"
    "dataAboutToBeEdited\0\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtendedTableWidgetEditorDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ExtendedTableWidgetEditorDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtendedTableWidgetEditorDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataAboutToBeEdited((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExtendedTableWidgetEditorDelegate::*)(QModelIndex ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidgetEditorDelegate::dataAboutToBeEdited)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExtendedTableWidgetEditorDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_ExtendedTableWidgetEditorDelegate.data,
    qt_meta_data_ExtendedTableWidgetEditorDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtendedTableWidgetEditorDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedTableWidgetEditorDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedTableWidgetEditorDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ExtendedTableWidgetEditorDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ExtendedTableWidgetEditorDelegate::dataAboutToBeEdited(QModelIndex _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< ExtendedTableWidgetEditorDelegate *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ExtendedTableWidget_t {
    QByteArrayData data[40];
    char stringdata0[496];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtendedTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtendedTableWidget_t qt_meta_stringdata_ExtendedTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ExtendedTableWidget"
QT_MOC_LITERAL(1, 20, 17), // "foreignKeyClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "sqlb::ObjectIdentifier"
QT_MOC_LITERAL(4, 62, 5), // "table"
QT_MOC_LITERAL(5, 68, 11), // "std::string"
QT_MOC_LITERAL(6, 80, 6), // "column"
QT_MOC_LITERAL(7, 87, 5), // "value"
QT_MOC_LITERAL(8, 93, 11), // "switchTable"
QT_MOC_LITERAL(9, 105, 4), // "next"
QT_MOC_LITERAL(10, 110, 21), // "openFileFromDropEvent"
QT_MOC_LITERAL(11, 132, 23), // "selectedRowsToBeDeleted"
QT_MOC_LITERAL(12, 156, 15), // "editCondFormats"
QT_MOC_LITERAL(13, 172, 19), // "currentIndexChanged"
QT_MOC_LITERAL(14, 192, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 204, 7), // "current"
QT_MOC_LITERAL(16, 212, 8), // "previous"
QT_MOC_LITERAL(17, 221, 19), // "dataAboutToBeEdited"
QT_MOC_LITERAL(18, 241, 5), // "index"
QT_MOC_LITERAL(19, 247, 20), // "requestUrlOrFileOpen"
QT_MOC_LITERAL(20, 268, 9), // "urlString"
QT_MOC_LITERAL(21, 278, 10), // "filesfound"
QT_MOC_LITERAL(22, 289, 8), // "rowcount"
QT_MOC_LITERAL(23, 298, 14), // "reloadSettings"
QT_MOC_LITERAL(24, 313, 15), // "selectTableLine"
QT_MOC_LITERAL(25, 329, 4), // "text"
QT_MOC_LITERAL(26, 334, 15), // "openPrintDialog"
QT_MOC_LITERAL(27, 350, 9), // "setFilter"
QT_MOC_LITERAL(28, 360, 6), // "size_t"
QT_MOC_LITERAL(29, 367, 11), // "filterTable"
QT_MOC_LITERAL(30, 379, 5), // "query"
QT_MOC_LITERAL(31, 385, 12), // "QSqlDatabase"
QT_MOC_LITERAL(32, 398, 8), // "database"
QT_MOC_LITERAL(33, 407, 8), // "isSorted"
QT_MOC_LITERAL(34, 416, 11), // "cellClicked"
QT_MOC_LITERAL(35, 428, 18), // "updateSectionWidth"
QT_MOC_LITERAL(36, 447, 12), // "logicalIndex"
QT_MOC_LITERAL(37, 460, 7), // "oldSize"
QT_MOC_LITERAL(38, 468, 7), // "newSize"
QT_MOC_LITERAL(39, 476, 19) // "updateSectionHeight"

    },
    "ExtendedTableWidget\0foreignKeyClicked\0"
    "\0sqlb::ObjectIdentifier\0table\0std::string\0"
    "column\0value\0switchTable\0next\0"
    "openFileFromDropEvent\0selectedRowsToBeDeleted\0"
    "editCondFormats\0currentIndexChanged\0"
    "QModelIndex\0current\0previous\0"
    "dataAboutToBeEdited\0index\0"
    "requestUrlOrFileOpen\0urlString\0"
    "filesfound\0rowcount\0reloadSettings\0"
    "selectTableLine\0text\0openPrintDialog\0"
    "setFilter\0size_t\0filterTable\0query\0"
    "QSqlDatabase\0database\0isSorted\0"
    "cellClicked\0updateSectionWidth\0"
    "logicalIndex\0oldSize\0newSize\0"
    "updateSectionHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtendedTableWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   99,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
      10,    1,  109,    2, 0x06 /* Public */,
      11,    0,  112,    2, 0x06 /* Public */,
      12,    1,  113,    2, 0x06 /* Public */,
      13,    2,  116,    2, 0x06 /* Public */,
      17,    1,  121,    2, 0x06 /* Public */,
      19,    1,  124,    2, 0x06 /* Public */,
      21,    1,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    0,  130,    2, 0x0a /* Public */,
      24,    2,  131,    2, 0x0a /* Public */,
      26,    0,  136,    2, 0x0a /* Public */,
      27,    2,  137,    2, 0x0a /* Public */,
      29,    3,  142,    2, 0x0a /* Public */,
      34,    1,  149,    2, 0x08 /* Private */,
      35,    3,  152,    2, 0x08 /* Private */,
      39,    3,  159,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QByteArray,    4,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Int, QMetaType::Int,   22,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   25,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 31, QMetaType::Bool,   30,   32,   33,
    QMetaType::Void, 0x80000000 | 14,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   36,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   36,   37,   38,

       0        // eod
};

void ExtendedTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtendedTableWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->foreignKeyClicked((*reinterpret_cast< const sqlb::ObjectIdentifier(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->switchTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->openFileFromDropEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->selectedRowsToBeDeleted(); break;
        case 4: _t->editCondFormats((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->currentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->dataAboutToBeEdited((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->requestUrlOrFileOpen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { int _r = _t->filesfound((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->reloadSettings(); break;
        case 10: _t->selectTableLine((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->openPrintDialog(); break;
        case 12: _t->setFilter((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->filterTable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: _t->cellClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->updateSectionWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->updateSectionHeight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExtendedTableWidget::*)(const sqlb::ObjectIdentifier & , const std::string & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::foreignKeyClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::switchTable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::openFileFromDropEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::selectedRowsToBeDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::editCondFormats)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::currentIndexChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::dataAboutToBeEdited)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ExtendedTableWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::requestUrlOrFileOpen)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = int (ExtendedTableWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTableWidget::filesfound)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExtendedTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_ExtendedTableWidget.data,
    qt_meta_data_ExtendedTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtendedTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int ExtendedTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ExtendedTableWidget::foreignKeyClicked(const sqlb::ObjectIdentifier & _t1, const std::string & _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExtendedTableWidget::switchTable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ExtendedTableWidget::openFileFromDropEvent(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ExtendedTableWidget::selectedRowsToBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ExtendedTableWidget::editCondFormats(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ExtendedTableWidget::currentIndexChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ExtendedTableWidget::dataAboutToBeEdited(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ExtendedTableWidget::requestUrlOrFileOpen(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
int ExtendedTableWidget::filesfound(int _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
