/****************************************************************************
** Meta object code from reading C++ file 'preamblesettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/preamblesettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preamblesettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreambleSettings_t {
    QByteArrayData data[14];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreambleSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreambleSettings_t qt_meta_stringdata_PreambleSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PreambleSettings"
QT_MOC_LITERAL(1, 17, 17), // "newpreamblesignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "EditLine_DataTex"
QT_MOC_LITERAL(4, 53, 4), // "Line"
QT_MOC_LITERAL(5, 58, 20), // "on_OkButton_accepted"
QT_MOC_LITERAL(6, 79, 28), // "PackageList_SelectionChanged"
QT_MOC_LITERAL(7, 108, 20), // "on_OkButton_rejected"
QT_MOC_LITERAL(8, 129, 20), // "on_AddButton_clicked"
QT_MOC_LITERAL(9, 150, 23), // "on_RemoveButton_clicked"
QT_MOC_LITERAL(10, 174, 46), // "on_PreambleContentWidget_curs..."
QT_MOC_LITERAL(11, 221, 12), // "EnableAccept"
QT_MOC_LITERAL(12, 234, 8), // "getClass"
QT_MOC_LITERAL(13, 243, 11) // "getLanguage"

    },
    "PreambleSettings\0newpreamblesignal\0\0"
    "EditLine_DataTex\0Line\0on_OkButton_accepted\0"
    "PackageList_SelectionChanged\0"
    "on_OkButton_rejected\0on_AddButton_clicked\0"
    "on_RemoveButton_clicked\0"
    "on_PreambleContentWidget_cursorPositionChanged\0"
    "EnableAccept\0getClass\0getLanguage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreambleSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   72,    2, 0x0a /* Public */,
       5,    0,   75,    2, 0x08 /* Private */,
       6,    0,   76,    2, 0x08 /* Private */,
       7,    0,   77,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void PreambleSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreambleSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newpreamblesignal((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->EditLine_DataTex((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: { QStringList _r = _t->on_OkButton_accepted();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->PackageList_SelectionChanged(); break;
        case 4: _t->on_OkButton_rejected(); break;
        case 5: _t->on_AddButton_clicked(); break;
        case 6: _t->on_RemoveButton_clicked(); break;
        case 7: _t->on_PreambleContentWidget_cursorPositionChanged(); break;
        case 8: _t->EnableAccept(); break;
        case 9: _t->getClass(); break;
        case 10: { bool _r = _t->getLanguage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreambleSettings::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreambleSettings::newpreamblesignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PreambleSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PreambleSettings.data,
    qt_meta_data_PreambleSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreambleSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreambleSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreambleSettings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PreambleSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PreambleSettings::newpreamblesignal(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
