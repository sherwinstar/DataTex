/****************************************************************************
** Meta object code from reading C++ file 'solvedatabaseexercise.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/solvedatabaseexercise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'solvedatabaseexercise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SolveDatabaseExercise_t {
    QByteArrayData data[21];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolveDatabaseExercise_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolveDatabaseExercise_t qt_meta_stringdata_SolveDatabaseExercise = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SolveDatabaseExercise"
QT_MOC_LITERAL(1, 22, 8), // "on_close"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "text"
QT_MOC_LITERAL(4, 37, 8), // "solution"
QT_MOC_LITERAL(5, 46, 16), // "SolutionsTexFile"
QT_MOC_LITERAL(6, 63, 11), // "FileContent"
QT_MOC_LITERAL(7, 75, 30), // "ExerciseTable_SelectionChanged"
QT_MOC_LITERAL(8, 106, 15), // "RebuildSolution"
QT_MOC_LITERAL(9, 122, 22), // "on_CloseButton_clicked"
QT_MOC_LITERAL(10, 145, 14), // "CreateSolution"
QT_MOC_LITERAL(11, 160, 28), // "on_NewSolutionButton_clicked"
QT_MOC_LITERAL(12, 189, 32), // "on_DeleteCurrentSolution_clicked"
QT_MOC_LITERAL(13, 222, 36), // "on_SolutionsCombo_currentText..."
QT_MOC_LITERAL(14, 259, 2), // "id"
QT_MOC_LITERAL(15, 262, 12), // "updateFilter"
QT_MOC_LITERAL(16, 275, 6), // "values"
QT_MOC_LITERAL(17, 282, 10), // "closeEvent"
QT_MOC_LITERAL(18, 293, 12), // "QCloseEvent*"
QT_MOC_LITERAL(19, 306, 5), // "event"
QT_MOC_LITERAL(20, 312, 15) // "RebuildExercise"

    },
    "SolveDatabaseExercise\0on_close\0\0text\0"
    "solution\0SolutionsTexFile\0FileContent\0"
    "ExerciseTable_SelectionChanged\0"
    "RebuildSolution\0on_CloseButton_clicked\0"
    "CreateSolution\0on_NewSolutionButton_clicked\0"
    "on_DeleteCurrentSolution_clicked\0"
    "on_SolutionsCombo_currentTextChanged\0"
    "id\0updateFilter\0values\0closeEvent\0"
    "QCloseEvent*\0event\0RebuildExercise"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolveDatabaseExercise[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    1,   88,    2, 0x08 /* Private */,
      15,    1,   91,    2, 0x08 /* Private */,
      17,    1,   94,    2, 0x08 /* Private */,
      20,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QStringList,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,

       0        // eod
};

void SolveDatabaseExercise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SolveDatabaseExercise *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_close((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->solution((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ExerciseTable_SelectionChanged(); break;
        case 3: _t->RebuildSolution(); break;
        case 4: _t->on_CloseButton_clicked(); break;
        case 5: _t->CreateSolution(); break;
        case 6: _t->on_NewSolutionButton_clicked(); break;
        case 7: _t->on_DeleteCurrentSolution_clicked(); break;
        case 8: _t->on_SolutionsCombo_currentTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->updateFilter((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 10: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 11: _t->RebuildExercise(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SolveDatabaseExercise::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SolveDatabaseExercise::on_close)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SolveDatabaseExercise::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SolveDatabaseExercise::solution)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SolveDatabaseExercise::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SolveDatabaseExercise.data,
    qt_meta_data_SolveDatabaseExercise,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SolveDatabaseExercise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolveDatabaseExercise::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SolveDatabaseExercise.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SolveDatabaseExercise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SolveDatabaseExercise::on_close(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SolveDatabaseExercise::solution(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
