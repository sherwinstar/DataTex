/****************************************************************************
** Meta object code from reading C++ file 'latexhighlighter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/latexhighlighter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexhighlighter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LatexHighlighter_t {
    QByteArrayData data[17];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LatexHighlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LatexHighlighter_t qt_meta_stringdata_LatexHighlighter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LatexHighlighter"
QT_MOC_LITERAL(1, 17, 21), // "SetAlwaysIgnoredWords"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "ignoredWords"
QT_MOC_LITERAL(4, 53, 9), // "setColors"
QT_MOC_LITERAL(5, 63, 13), // "QList<QColor>"
QT_MOC_LITERAL(6, 77, 6), // "colors"
QT_MOC_LITERAL(7, 84, 15), // "setSpellChecker"
QT_MOC_LITERAL(8, 100, 9), // "Hunspell*"
QT_MOC_LITERAL(9, 110, 7), // "checker"
QT_MOC_LITERAL(10, 118, 19), // "activateInlineSpell"
QT_MOC_LITERAL(11, 138, 6), // "enable"
QT_MOC_LITERAL(12, 145, 9), // "SetEditor"
QT_MOC_LITERAL(13, 155, 17), // "LatexTextBrowser*"
QT_MOC_LITERAL(14, 173, 2), // "ed"
QT_MOC_LITERAL(15, 176, 14), // "setModeGraphic"
QT_MOC_LITERAL(16, 191, 1) // "m"

    },
    "LatexHighlighter\0SetAlwaysIgnoredWords\0"
    "\0ignoredWords\0setColors\0QList<QColor>\0"
    "colors\0setSpellChecker\0Hunspell*\0"
    "checker\0activateInlineSpell\0enable\0"
    "SetEditor\0LatexTextBrowser*\0ed\0"
    "setModeGraphic\0m"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LatexHighlighter[] = {

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
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,
      12,    1,   56,    2, 0x0a /* Public */,
      15,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void LatexHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LatexHighlighter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetAlwaysIgnoredWords((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setColors((*reinterpret_cast< QList<QColor>(*)>(_a[1]))); break;
        case 2: _t->setSpellChecker((*reinterpret_cast< Hunspell*(*)>(_a[1]))); break;
        case 3: _t->activateInlineSpell((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetEditor((*reinterpret_cast< LatexTextBrowser*(*)>(_a[1]))); break;
        case 5: _t->setModeGraphic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QColor> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LatexTextBrowser* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LatexHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_LatexHighlighter.data,
    qt_meta_data_LatexHighlighter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LatexHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatexHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LatexHighlighter.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int LatexHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
