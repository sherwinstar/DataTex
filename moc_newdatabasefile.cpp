/****************************************************************************
** Meta object code from reading C++ file 'newdatabasefile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "datatex/newdatabasefile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newdatabasefile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewDatabaseFile_t {
    QByteArrayData data[57];
    char stringdata0[906];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewDatabaseFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewDatabaseFile_t qt_meta_stringdata_NewDatabaseFile = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NewDatabaseFile"
QT_MOC_LITERAL(1, 16, 12), // "acceptSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "fileName"
QT_MOC_LITERAL(4, 39, 11), // "acceptClone"
QT_MOC_LITERAL(5, 51, 12), // "sendFileInfo"
QT_MOC_LITERAL(6, 64, 4), // "page"
QT_MOC_LITERAL(7, 69, 11), // "DBFileInfo*"
QT_MOC_LITERAL(8, 81, 8), // "fileInfo"
QT_MOC_LITERAL(9, 90, 4), // "move"
QT_MOC_LITERAL(10, 95, 15), // "updateTableView"
QT_MOC_LITERAL(11, 111, 11), // "QTableView*"
QT_MOC_LITERAL(12, 123, 5), // "table"
QT_MOC_LITERAL(13, 129, 9), // "QueryText"
QT_MOC_LITERAL(14, 139, 34), // "ExerciseFileList_selection_ch..."
QT_MOC_LITERAL(15, 174, 16), // "NewFilePathAndId"
QT_MOC_LITERAL(16, 191, 33), // "on_ExerciseFileList_doubleCli..."
QT_MOC_LITERAL(17, 225, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 237, 5), // "index"
QT_MOC_LITERAL(19, 243, 10), // "closeEvent"
QT_MOC_LITERAL(20, 254, 12), // "QCloseEvent*"
QT_MOC_LITERAL(21, 267, 5), // "event"
QT_MOC_LITERAL(22, 273, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(23, 295, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(24, 317, 21), // "on_addChapter_clicked"
QT_MOC_LITERAL(25, 339, 19), // "on_addField_clicked"
QT_MOC_LITERAL(26, 359, 22), // "on_removeField_clicked"
QT_MOC_LITERAL(27, 382, 24), // "on_removeChapter_clicked"
QT_MOC_LITERAL(28, 407, 21), // "on_addSection_clicked"
QT_MOC_LITERAL(29, 429, 24), // "on_removeSection_clicked"
QT_MOC_LITERAL(30, 454, 20), // "on_addExType_clicked"
QT_MOC_LITERAL(31, 475, 23), // "on_removeExType_clicked"
QT_MOC_LITERAL(32, 499, 17), // "EditModeIsEnabled"
QT_MOC_LITERAL(33, 517, 18), // "CloneModeIsEnabled"
QT_MOC_LITERAL(34, 536, 9), // "cloneMode"
QT_MOC_LITERAL(35, 546, 22), // "on_addFileType_clicked"
QT_MOC_LITERAL(36, 569, 25), // "on_removeFileType_clicked"
QT_MOC_LITERAL(37, 595, 15), // "FileTypeClicked"
QT_MOC_LITERAL(38, 611, 13), // "FieldsClicked"
QT_MOC_LITERAL(39, 625, 15), // "ChaptersClicked"
QT_MOC_LITERAL(40, 641, 14), // "SectionClicked"
QT_MOC_LITERAL(41, 656, 14), // "UpdateFileInfo"
QT_MOC_LITERAL(42, 671, 17), // "SubSectionClicked"
QT_MOC_LITERAL(43, 689, 18), // "FindListItemByData"
QT_MOC_LITERAL(44, 708, 23), // "QList<QListWidgetItem*>"
QT_MOC_LITERAL(45, 732, 12), // "QListWidget*"
QT_MOC_LITERAL(46, 745, 4), // "list"
QT_MOC_LITERAL(47, 750, 4), // "text"
QT_MOC_LITERAL(48, 755, 13), // "LoadFileTypes"
QT_MOC_LITERAL(49, 769, 15), // "InitialSettings"
QT_MOC_LITERAL(50, 785, 12), // "SaveSettings"
QT_MOC_LITERAL(51, 798, 24), // "GetDataFromSelectionList"
QT_MOC_LITERAL(52, 823, 18), // "QList<QStringList>"
QT_MOC_LITERAL(53, 842, 13), // "setDBFileInfo"
QT_MOC_LITERAL(54, 856, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(55, 878, 21), // "on_BackButton_clicked"
QT_MOC_LITERAL(56, 900, 5) // "reset"

    },
    "NewDatabaseFile\0acceptSignal\0\0fileName\0"
    "acceptClone\0sendFileInfo\0page\0DBFileInfo*\0"
    "fileInfo\0move\0updateTableView\0QTableView*\0"
    "table\0QueryText\0ExerciseFileList_selection_changed\0"
    "NewFilePathAndId\0on_ExerciseFileList_doubleClicked\0"
    "QModelIndex\0index\0closeEvent\0QCloseEvent*\0"
    "event\0on_buttonBox_accepted\0"
    "on_buttonBox_rejected\0on_addChapter_clicked\0"
    "on_addField_clicked\0on_removeField_clicked\0"
    "on_removeChapter_clicked\0on_addSection_clicked\0"
    "on_removeSection_clicked\0on_addExType_clicked\0"
    "on_removeExType_clicked\0EditModeIsEnabled\0"
    "CloneModeIsEnabled\0cloneMode\0"
    "on_addFileType_clicked\0on_removeFileType_clicked\0"
    "FileTypeClicked\0FieldsClicked\0"
    "ChaptersClicked\0SectionClicked\0"
    "UpdateFileInfo\0SubSectionClicked\0"
    "FindListItemByData\0QList<QListWidgetItem*>\0"
    "QListWidget*\0list\0text\0LoadFileTypes\0"
    "InitialSettings\0SaveSettings\0"
    "GetDataFromSelectionList\0QList<QStringList>\0"
    "setDBFileInfo\0on_NextButton_clicked\0"
    "on_BackButton_clicked\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewDatabaseFile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       4,    0,  202,    2, 0x06 /* Public */,
       5,    3,  203,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,  210,    2, 0x08 /* Private */,
      14,    0,  215,    2, 0x08 /* Private */,
      15,    0,  216,    2, 0x08 /* Private */,
      16,    1,  217,    2, 0x08 /* Private */,
      19,    1,  220,    2, 0x08 /* Private */,
      22,    0,  223,    2, 0x08 /* Private */,
      23,    0,  224,    2, 0x08 /* Private */,
      24,    0,  225,    2, 0x08 /* Private */,
      25,    0,  226,    2, 0x08 /* Private */,
      26,    0,  227,    2, 0x08 /* Private */,
      27,    0,  228,    2, 0x08 /* Private */,
      28,    0,  229,    2, 0x08 /* Private */,
      29,    0,  230,    2, 0x08 /* Private */,
      30,    0,  231,    2, 0x08 /* Private */,
      31,    0,  232,    2, 0x08 /* Private */,
      32,    0,  233,    2, 0x08 /* Private */,
      33,    1,  234,    2, 0x08 /* Private */,
      35,    0,  237,    2, 0x08 /* Private */,
      36,    0,  238,    2, 0x08 /* Private */,
      37,    0,  239,    2, 0x08 /* Private */,
      38,    0,  240,    2, 0x08 /* Private */,
      39,    0,  241,    2, 0x08 /* Private */,
      40,    0,  242,    2, 0x08 /* Private */,
      41,    0,  243,    2, 0x08 /* Private */,
      42,    0,  244,    2, 0x08 /* Private */,
      43,    2,  245,    2, 0x08 /* Private */,
      48,    0,  250,    2, 0x08 /* Private */,
      49,    0,  251,    2, 0x08 /* Private */,
      50,    0,  252,    2, 0x08 /* Private */,
      51,    1,  253,    2, 0x08 /* Private */,
      53,    0,  256,    2, 0x08 /* Private */,
      54,    0,  257,    2, 0x08 /* Private */,
      55,    0,  258,    2, 0x08 /* Private */,
      56,    0,  259,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Int,    6,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
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
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 44, 0x80000000 | 45, QMetaType::QString,   46,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 52, 0x80000000 | 45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewDatabaseFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewDatabaseFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->acceptSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->acceptClone(); break;
        case 2: _t->sendFileInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< DBFileInfo*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->updateTableView((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->ExerciseFileList_selection_changed(); break;
        case 5: _t->NewFilePathAndId(); break;
        case 6: _t->on_ExerciseFileList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 8: _t->on_buttonBox_accepted(); break;
        case 9: _t->on_buttonBox_rejected(); break;
        case 10: _t->on_addChapter_clicked(); break;
        case 11: _t->on_addField_clicked(); break;
        case 12: _t->on_removeField_clicked(); break;
        case 13: _t->on_removeChapter_clicked(); break;
        case 14: _t->on_addSection_clicked(); break;
        case 15: _t->on_removeSection_clicked(); break;
        case 16: _t->on_addExType_clicked(); break;
        case 17: _t->on_removeExType_clicked(); break;
        case 18: _t->EditModeIsEnabled(); break;
        case 19: _t->CloneModeIsEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_addFileType_clicked(); break;
        case 21: _t->on_removeFileType_clicked(); break;
        case 22: _t->FileTypeClicked(); break;
        case 23: _t->FieldsClicked(); break;
        case 24: _t->ChaptersClicked(); break;
        case 25: _t->SectionClicked(); break;
        case 26: _t->UpdateFileInfo(); break;
        case 27: _t->SubSectionClicked(); break;
        case 28: { QList<QListWidgetItem*> _r = _t->FindListItemByData((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QListWidgetItem*>*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->LoadFileTypes(); break;
        case 30: _t->InitialSettings(); break;
        case 31: _t->SaveSettings(); break;
        case 32: { QList<QStringList> _r = _t->GetDataFromSelectionList((*reinterpret_cast< QListWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->setDBFileInfo(); break;
        case 34: _t->on_NextButton_clicked(); break;
        case 35: _t->on_BackButton_clicked(); break;
        case 36: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBFileInfo* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTableView* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QListWidget* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QListWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewDatabaseFile::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewDatabaseFile::acceptSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewDatabaseFile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewDatabaseFile::acceptClone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NewDatabaseFile::*)(int , DBFileInfo * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewDatabaseFile::sendFileInfo)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NewDatabaseFile::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_NewDatabaseFile.data,
    qt_meta_data_NewDatabaseFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewDatabaseFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewDatabaseFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewDatabaseFile.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewDatabaseFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void NewDatabaseFile::acceptSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NewDatabaseFile::acceptClone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NewDatabaseFile::sendFileInfo(int _t1, DBFileInfo * _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
