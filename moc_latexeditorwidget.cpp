/****************************************************************************
** Meta object code from reading C++ file 'latexeditorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/latexeditorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexeditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LatexTextBrowser_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LatexTextBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LatexTextBrowser_t qt_meta_stringdata_LatexTextBrowser = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LatexTextBrowser"
QT_MOC_LITERAL(1, 17, 11), // "resizeEvent"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 44, 1), // "e"
QT_MOC_LITERAL(5, 46, 15), // "ShowDifferences"
QT_MOC_LITERAL(6, 62, 17), // "LatexTextBrowser*"
QT_MOC_LITERAL(7, 80, 7), // "widget1"
QT_MOC_LITERAL(8, 88, 7), // "widget2"
QT_MOC_LITERAL(9, 96, 11), // "clearFormat"
QT_MOC_LITERAL(10, 108, 6), // "widget"
QT_MOC_LITERAL(11, 115, 25), // "updateLineNumberAreaWidth"
QT_MOC_LITERAL(12, 141, 13), // "newBlockCount"
QT_MOC_LITERAL(13, 155, 20) // "updateLineNumberArea"

    },
    "LatexTextBrowser\0resizeEvent\0\0"
    "QResizeEvent*\0e\0ShowDifferences\0"
    "LatexTextBrowser*\0widget1\0widget2\0"
    "clearFormat\0widget\0updateLineNumberAreaWidth\0"
    "newBlockCount\0updateLineNumberArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LatexTextBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    2,   52,    2, 0x0a /* Public */,
       9,    1,   57,    2, 0x0a /* Public */,
      11,    1,   60,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,
      13,    1,   66,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 6,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void LatexTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LatexTextBrowser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->ShowDifferences((*reinterpret_cast< LatexTextBrowser*(*)>(_a[1])),(*reinterpret_cast< LatexTextBrowser*(*)>(_a[2]))); break;
        case 2: _t->clearFormat((*reinterpret_cast< LatexTextBrowser*(*)>(_a[1]))); break;
        case 3: _t->updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateLineNumberArea((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 5: _t->updateLineNumberArea((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateLineNumberArea(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LatexTextBrowser* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LatexTextBrowser* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LatexTextBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_LatexTextBrowser.data,
    qt_meta_data_LatexTextBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LatexTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatexTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LatexTextBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int LatexTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_LatexTextEdit_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LatexTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LatexTextEdit_t qt_meta_stringdata_LatexTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LatexTextEdit"
QT_MOC_LITERAL(1, 14, 17), // "SetEditorReadOnly"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "LatexTextEdit*"
QT_MOC_LITERAL(4, 48, 6) // "widget"

    },
    "LatexTextEdit\0SetEditorReadOnly\0\0"
    "LatexTextEdit*\0widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LatexTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void LatexTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LatexTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetEditorReadOnly((*reinterpret_cast< LatexTextEdit*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LatexTextEdit* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LatexTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<LatexTextBrowser::staticMetaObject>(),
    qt_meta_stringdata_LatexTextEdit.data,
    qt_meta_data_LatexTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LatexTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatexTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LatexTextEdit.stringdata0))
        return static_cast<void*>(this);
    return LatexTextBrowser::qt_metacast(_clname);
}

int LatexTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LatexTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_LineNumberArea_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineNumberArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineNumberArea_t qt_meta_stringdata_LineNumberArea = {
    {
QT_MOC_LITERAL(0, 0, 14) // "LineNumberArea"

    },
    "LineNumberArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineNumberArea[] = {

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

void LineNumberArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LineNumberArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LineNumberArea.data,
    qt_meta_data_LineNumberArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineNumberArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineNumberArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineNumberArea.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LineNumberArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FileToolBar_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileToolBar_t qt_meta_stringdata_FileToolBar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileToolBar"
QT_MOC_LITERAL(1, 12, 11), // "showTexFile"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "showPdfFile"
QT_MOC_LITERAL(4, 37, 5) // "Build"

    },
    "FileToolBar\0showTexFile\0\0showPdfFile\0"
    "Build"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showTexFile(); break;
        case 1: _t->showPdfFile(); break;
        case 2: _t->Build(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileToolBar::showTexFile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileToolBar::showPdfFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileToolBar::Build)) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FileToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_FileToolBar.data,
    qt_meta_data_FileToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileToolBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int FileToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FileToolBar::showTexFile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileToolBar::showPdfFile()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileToolBar::Build()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_LatexTextWidget_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LatexTextWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LatexTextWidget_t qt_meta_stringdata_LatexTextWidget = {
    {
QT_MOC_LITERAL(0, 0, 15) // "LatexTextWidget"

    },
    "LatexTextWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LatexTextWidget[] = {

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

void LatexTextWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LatexTextWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LatexTextWidget.data,
    qt_meta_data_LatexTextWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LatexTextWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LatexTextWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LatexTextWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LatexTextWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
