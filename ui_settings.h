/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "settings.h"

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_8;
    QDialogButtonBox *buttonBox;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QListWidget *ListOfSettings;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QLabel *label_31;
    QSpinBox *FontSize;
    QHBoxLayout *horizontalLayout_4;
    QSlider *IconSize;
    QLabel *SliderValue;
    QLabel *label_10;
    QComboBox *LanguageSelect;
    QLabel *label_14;
    QLabel *label_11;
    QFontComboBox *FontSelect;
    QComboBox *ThemeSelect;
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_17;
    QLabel *label_16;
    QLineEdit *Author;
    QLineEdit *NamePrefix;
    QLineEdit *lineEdit_2;
    QLabel *label_17;
    QLabel *label_18;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_10;
    QLineEdit *SaveLocation;
    QPushButton *OpenSaveLocation;
    QLabel *label_15;
    QWidget *page1;
    QVBoxLayout *verticalLayout_12;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_16;
    QPushButton *AddBase;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *DatabaseLineEdit;
    QPushButton *BaseButton;
    QComboBox *ComboBaseList;
    QGridLayout *gridLayout_4;
    QTableView *DatabaseFieldTable;
    QLabel *label_7;
    QLabel *label_4;
    QPushButton *DeleteFilesBase;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *UseDatabasePrefix;
    QLineEdit *DatabasePrefix;
    QPushButton *saveFDBPrefix;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *EncryptDatabase;
    QPushButton *savePasswordFDB;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_32;
    QLineEdit *DatabaseUserName;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QPushButton *KeyGeneratorFDB;
    PasswordLineEdit *DatabasePassword;
    QFrame *line_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_11;
    QComboBox *ComboNote;
    QGridLayout *gridLayout_15;
    QLabel *label_28;
    QTableView *DatabaseFolderTable;
    QPushButton *NoteButton;
    QLabel *label_23;
    QPushButton *AddDocDatabaseButton;
    QPushButton *DeleteBase;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_24;
    QLineEdit *NotesPath;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *UseDocDatabasePrefix;
    QLineEdit *DocDatabasePrefix;
    QPushButton *saveDDBPrefix;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *EncryptDocDatabase;
    QPushButton *savePasswordDDB;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_33;
    QLineEdit *DocDatabaseUserName;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_34;
    QPushButton *KeyGeneratorDDB;
    PasswordLineEdit *DocDatabasePassword;
    QWidget *page_7;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_10;
    QTableView *BibliographyFieldsTable;
    QLabel *label_8;
    QWidget *page_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_13;
    QLabel *label_5;
    LatexTextEdit *PreambleText;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *PreambleCombo;
    QPushButton *AddPreambleButton;
    QPushButton *RemovePreambleButton;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_14;
    QLabel *label_27;
    QFontComboBox *EditorFontSelect;
    QLabel *label_30;
    QSpinBox *EditorFontSize;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_18;
    QHBoxLayout *horizontalLayout;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer;
    QPushButton *commandColorButton;
    QLineEdit *commandColor;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QFrame *line_4;
    QLabel *label_2;
    QLineEdit *PdfLatexPath;
    QPushButton *OpenPdfLatexPath;
    QLabel *label_19;
    QLineEdit *LatexPath;
    QPushButton *OpenLatexPath;
    QLabel *label_20;
    QLineEdit *XelatexPath;
    QPushButton *OpenXeLatexPath;
    QLabel *label_21;
    QLineEdit *LualatexPath;
    QPushButton *OpenLuaLatexPath;
    QLabel *label_22;
    QLineEdit *PythontexPath;
    QPushButton *OpenPythontexPath;
    QLabel *label_25;
    QLineEdit *BibtexPath;
    QPushButton *OpenBibtexPath;
    QLabel *label_26;
    QLineEdit *AsymptotePath;
    QPushButton *OpenAsymptotePath;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *page_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_11;
    QGroupBox *groupBox_12;
    QGroupBox *groupBox_13;
    QGroupBox *groupBox_14;
    QGroupBox *groupBox_15;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(764, 561);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/settingspath.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        gridLayout_8 = new QGridLayout(Settings);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_8->addWidget(buttonBox, 1, 0, 1, 1);

        splitter = new QSplitter(Settings);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_8->addWidget(label_9);

        ListOfSettings = new QListWidget(layoutWidget);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/texfile.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/address-book-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/preamble.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/document-edit-sign.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/latex-config.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem6->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/database-cloud.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(ListOfSettings);
        __qlistwidgetitem7->setIcon(icon8);
        ListOfSettings->setObjectName(QString::fromUtf8("ListOfSettings"));

        verticalLayout_8->addWidget(ListOfSettings);

        splitter->addWidget(layoutWidget);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(-1, 4, 0, 0);
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 2, 0, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_5->addWidget(label_31, 0, 0, 1, 1);

        FontSize = new QSpinBox(groupBox);
        FontSize->setObjectName(QString::fromUtf8("FontSize"));
        FontSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        FontSize->setMinimum(8);
        FontSize->setMaximum(24);

        gridLayout_5->addWidget(FontSize, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        IconSize = new QSlider(groupBox);
        IconSize->setObjectName(QString::fromUtf8("IconSize"));
        IconSize->setMinimum(15);
        IconSize->setMaximum(35);
        IconSize->setSliderPosition(24);
        IconSize->setOrientation(Qt::Horizontal);
        IconSize->setTickPosition(QSlider::TicksAbove);
        IconSize->setTickInterval(5);

        horizontalLayout_4->addWidget(IconSize);

        SliderValue = new QLabel(groupBox);
        SliderValue->setObjectName(QString::fromUtf8("SliderValue"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SliderValue->sizePolicy().hasHeightForWidth());
        SliderValue->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(SliderValue);


        gridLayout_5->addLayout(horizontalLayout_4, 4, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        LanguageSelect = new QComboBox(groupBox);
        LanguageSelect->setObjectName(QString::fromUtf8("LanguageSelect"));

        gridLayout_5->addWidget(LanguageSelect, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 4, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 3, 0, 1, 1);

        FontSelect = new QFontComboBox(groupBox);
        FontSelect->setObjectName(QString::fromUtf8("FontSelect"));

        gridLayout_5->addWidget(FontSelect, 1, 1, 1, 1);

        ThemeSelect = new QComboBox(groupBox);
        ThemeSelect->setObjectName(QString::fromUtf8("ThemeSelect"));

        gridLayout_5->addWidget(ThemeSelect, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 1, 0, 1, 1);

        groupBox1 = new QGroupBox(page);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setAlignment(Qt::AlignCenter);
        verticalLayout_6 = new QVBoxLayout(groupBox1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        scrollArea = new QScrollArea(groupBox1);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 477, 173));
        gridLayout_17 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_17->addWidget(label_16, 0, 0, 1, 1);

        Author = new QLineEdit(scrollAreaWidgetContents);
        Author->setObjectName(QString::fromUtf8("Author"));

        gridLayout_17->addWidget(Author, 0, 1, 1, 1);

        NamePrefix = new QLineEdit(scrollAreaWidgetContents);
        NamePrefix->setObjectName(QString::fromUtf8("NamePrefix"));

        gridLayout_17->addWidget(NamePrefix, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_17->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_17->addWidget(label_17, 3, 0, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_17->addWidget(label_18, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);


        gridLayout_7->addWidget(groupBox1, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_10 = new QGridLayout(groupBox_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        SaveLocation = new QLineEdit(groupBox_2);
        SaveLocation->setObjectName(QString::fromUtf8("SaveLocation"));
        SaveLocation->setReadOnly(true);

        gridLayout_10->addWidget(SaveLocation, 1, 0, 1, 1);

        OpenSaveLocation = new QPushButton(groupBox_2);
        OpenSaveLocation->setObjectName(QString::fromUtf8("OpenSaveLocation"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OpenSaveLocation->sizePolicy().hasHeightForWidth());
        OpenSaveLocation->setSizePolicy(sizePolicy1);
        QIcon icon9;
        QString iconThemeName = QString::fromUtf8("folder");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        OpenSaveLocation->setIcon(icon9);

        gridLayout_10->addWidget(OpenSaveLocation, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_10->addWidget(label_15, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        verticalLayout_12 = new QVBoxLayout(page1);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(page1);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 488, 682));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        gridLayout_16 = new QGridLayout(groupBox_6);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        AddBase = new QPushButton(groupBox_6);
        AddBase->setObjectName(QString::fromUtf8("AddBase"));

        gridLayout_16->addWidget(AddBase, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        DatabaseLineEdit = new QLineEdit(groupBox_6);
        DatabaseLineEdit->setObjectName(QString::fromUtf8("DatabaseLineEdit"));

        horizontalLayout_3->addWidget(DatabaseLineEdit);


        gridLayout_16->addLayout(horizontalLayout_3, 2, 0, 1, 4);

        BaseButton = new QPushButton(groupBox_6);
        BaseButton->setObjectName(QString::fromUtf8("BaseButton"));

        gridLayout_16->addWidget(BaseButton, 1, 1, 1, 1);

        ComboBaseList = new QComboBox(groupBox_6);
        ComboBaseList->setObjectName(QString::fromUtf8("ComboBaseList"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ComboBaseList->sizePolicy().hasHeightForWidth());
        ComboBaseList->setSizePolicy(sizePolicy2);

        gridLayout_16->addWidget(ComboBaseList, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        DatabaseFieldTable = new QTableView(groupBox_6);
        DatabaseFieldTable->setObjectName(QString::fromUtf8("DatabaseFieldTable"));
        DatabaseFieldTable->setMinimumSize(QSize(0, 250));

        gridLayout_4->addWidget(DatabaseFieldTable, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_4, 3, 0, 1, 4);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_16->addWidget(label_4, 0, 0, 1, 1);

        DeleteFilesBase = new QPushButton(groupBox_6);
        DeleteFilesBase->setObjectName(QString::fromUtf8("DeleteFilesBase"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(DeleteFilesBase->sizePolicy().hasHeightForWidth());
        DeleteFilesBase->setSizePolicy(sizePolicy3);

        gridLayout_16->addWidget(DeleteFilesBase, 1, 3, 1, 1);


        verticalLayout_11->addWidget(groupBox_6);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setAlignment(Qt::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBox_8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        UseDatabasePrefix = new QCheckBox(groupBox_8);
        UseDatabasePrefix->setObjectName(QString::fromUtf8("UseDatabasePrefix"));

        horizontalLayout_7->addWidget(UseDatabasePrefix);

        DatabasePrefix = new QLineEdit(groupBox_8);
        DatabasePrefix->setObjectName(QString::fromUtf8("DatabasePrefix"));

        horizontalLayout_7->addWidget(DatabasePrefix);

        saveFDBPrefix = new QPushButton(groupBox_8);
        saveFDBPrefix->setObjectName(QString::fromUtf8("saveFDBPrefix"));
        sizePolicy1.setHeightForWidth(saveFDBPrefix->sizePolicy().hasHeightForWidth());
        saveFDBPrefix->setSizePolicy(sizePolicy1);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        saveFDBPrefix->setIcon(icon10);
        saveFDBPrefix->setFlat(true);

        horizontalLayout_7->addWidget(saveFDBPrefix);


        verticalLayout_3->addLayout(horizontalLayout_7);

        line = new QFrame(groupBox_8);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        EncryptDatabase = new QCheckBox(groupBox_8);
        EncryptDatabase->setObjectName(QString::fromUtf8("EncryptDatabase"));

        horizontalLayout_6->addWidget(EncryptDatabase);

        savePasswordFDB = new QPushButton(groupBox_8);
        savePasswordFDB->setObjectName(QString::fromUtf8("savePasswordFDB"));
        sizePolicy1.setHeightForWidth(savePasswordFDB->sizePolicy().hasHeightForWidth());
        savePasswordFDB->setSizePolicy(sizePolicy1);
        savePasswordFDB->setIcon(icon10);
        savePasswordFDB->setFlat(true);

        horizontalLayout_6->addWidget(savePasswordFDB);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_32 = new QLabel(groupBox_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_9->addWidget(label_32);

        DatabaseUserName = new QLineEdit(groupBox_8);
        DatabaseUserName->setObjectName(QString::fromUtf8("DatabaseUserName"));

        horizontalLayout_9->addWidget(DatabaseUserName);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(groupBox_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        KeyGeneratorFDB = new QPushButton(groupBox_8);
        KeyGeneratorFDB->setObjectName(QString::fromUtf8("KeyGeneratorFDB"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/key.svg"), QSize(), QIcon::Normal, QIcon::Off);
        KeyGeneratorFDB->setIcon(icon11);

        horizontalLayout_8->addWidget(KeyGeneratorFDB);

        DatabasePassword = new PasswordLineEdit(groupBox_8);
        DatabasePassword->setObjectName(QString::fromUtf8("DatabasePassword"));

        horizontalLayout_8->addWidget(DatabasePassword);


        verticalLayout_3->addLayout(horizontalLayout_8);

        line_2 = new QFrame(groupBox_8);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        label = new QLabel(groupBox_8);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        radioButton_2 = new QRadioButton(groupBox_8);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_7->addWidget(radioButton_2);

        radioButton = new QRadioButton(groupBox_8);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_7->addWidget(radioButton);


        verticalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_11->addWidget(groupBox_8);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_12->addWidget(scrollArea_4);

        stackedWidget->addWidget(page1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(page_2);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 488, 610));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(groupBox_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        ComboNote = new QComboBox(groupBox_4);
        ComboNote->setObjectName(QString::fromUtf8("ComboNote"));
        sizePolicy2.setHeightForWidth(ComboNote->sizePolicy().hasHeightForWidth());
        ComboNote->setSizePolicy(sizePolicy2);

        gridLayout_11->addWidget(ComboNote, 1, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_15->addWidget(label_28, 2, 0, 1, 1);

        DatabaseFolderTable = new QTableView(groupBox_4);
        DatabaseFolderTable->setObjectName(QString::fromUtf8("DatabaseFolderTable"));
        DatabaseFolderTable->setMinimumSize(QSize(0, 270));

        gridLayout_15->addWidget(DatabaseFolderTable, 3, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_15, 3, 0, 1, 4);

        NoteButton = new QPushButton(groupBox_4);
        NoteButton->setObjectName(QString::fromUtf8("NoteButton"));
        sizePolicy3.setHeightForWidth(NoteButton->sizePolicy().hasHeightForWidth());
        NoteButton->setSizePolicy(sizePolicy3);

        gridLayout_11->addWidget(NoteButton, 1, 1, 1, 1);

        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy4);

        gridLayout_11->addWidget(label_23, 0, 0, 1, 1);

        AddDocDatabaseButton = new QPushButton(groupBox_4);
        AddDocDatabaseButton->setObjectName(QString::fromUtf8("AddDocDatabaseButton"));
        sizePolicy3.setHeightForWidth(AddDocDatabaseButton->sizePolicy().hasHeightForWidth());
        AddDocDatabaseButton->setSizePolicy(sizePolicy3);

        gridLayout_11->addWidget(AddDocDatabaseButton, 1, 2, 1, 1);

        DeleteBase = new QPushButton(groupBox_4);
        DeleteBase->setObjectName(QString::fromUtf8("DeleteBase"));

        gridLayout_11->addWidget(DeleteBase, 1, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_5->addWidget(label_24);

        NotesPath = new QLineEdit(groupBox_4);
        NotesPath->setObjectName(QString::fromUtf8("NotesPath"));
        NotesPath->setReadOnly(true);

        horizontalLayout_5->addWidget(NotesPath);


        gridLayout_11->addLayout(horizontalLayout_5, 2, 0, 1, 4);


        verticalLayout->addWidget(groupBox_4);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_7);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        UseDocDatabasePrefix = new QCheckBox(groupBox_7);
        UseDocDatabasePrefix->setObjectName(QString::fromUtf8("UseDocDatabasePrefix"));

        horizontalLayout_11->addWidget(UseDocDatabasePrefix);

        DocDatabasePrefix = new QLineEdit(groupBox_7);
        DocDatabasePrefix->setObjectName(QString::fromUtf8("DocDatabasePrefix"));

        horizontalLayout_11->addWidget(DocDatabasePrefix);

        saveDDBPrefix = new QPushButton(groupBox_7);
        saveDDBPrefix->setObjectName(QString::fromUtf8("saveDDBPrefix"));
        sizePolicy1.setHeightForWidth(saveDDBPrefix->sizePolicy().hasHeightForWidth());
        saveDDBPrefix->setSizePolicy(sizePolicy1);
        saveDDBPrefix->setIcon(icon10);
        saveDDBPrefix->setFlat(true);

        horizontalLayout_11->addWidget(saveDDBPrefix);


        verticalLayout_2->addLayout(horizontalLayout_11);

        line_3 = new QFrame(groupBox_7);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        EncryptDocDatabase = new QCheckBox(groupBox_7);
        EncryptDocDatabase->setObjectName(QString::fromUtf8("EncryptDocDatabase"));

        horizontalLayout_10->addWidget(EncryptDocDatabase);

        savePasswordDDB = new QPushButton(groupBox_7);
        savePasswordDDB->setObjectName(QString::fromUtf8("savePasswordDDB"));
        sizePolicy1.setHeightForWidth(savePasswordDDB->sizePolicy().hasHeightForWidth());
        savePasswordDDB->setSizePolicy(sizePolicy1);
        savePasswordDDB->setIcon(icon10);
        savePasswordDDB->setFlat(true);

        horizontalLayout_10->addWidget(savePasswordDDB);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_33 = new QLabel(groupBox_7);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_13->addWidget(label_33);

        DocDatabaseUserName = new QLineEdit(groupBox_7);
        DocDatabaseUserName->setObjectName(QString::fromUtf8("DocDatabaseUserName"));

        horizontalLayout_13->addWidget(DocDatabaseUserName);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_34 = new QLabel(groupBox_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_12->addWidget(label_34);

        KeyGeneratorDDB = new QPushButton(groupBox_7);
        KeyGeneratorDDB->setObjectName(QString::fromUtf8("KeyGeneratorDDB"));
        KeyGeneratorDDB->setIcon(icon11);

        horizontalLayout_12->addWidget(KeyGeneratorDDB);

        DocDatabasePassword = new PasswordLineEdit(groupBox_7);
        DocDatabasePassword->setObjectName(QString::fromUtf8("DocDatabasePassword"));

        horizontalLayout_12->addWidget(DocDatabasePassword);


        verticalLayout_2->addLayout(horizontalLayout_12);


        verticalLayout->addWidget(groupBox_7);

        scrollArea_3->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_10->addWidget(scrollArea_3);

        stackedWidget->addWidget(page_2);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        gridLayout = new QGridLayout(page_7);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_10 = new QGroupBox(page_7);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setAlignment(Qt::AlignCenter);
        BibliographyFieldsTable = new QTableView(groupBox_10);
        BibliographyFieldsTable->setObjectName(QString::fromUtf8("BibliographyFieldsTable"));
        BibliographyFieldsTable->setGeometry(QRect(20, 63, 228, 250));
        BibliographyFieldsTable->setMinimumSize(QSize(0, 250));
        label_8 = new QLabel(groupBox_10);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 228, 17));

        gridLayout->addWidget(groupBox_10, 0, 0, 1, 1);

        stackedWidget->addWidget(page_7);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_3 = new QGridLayout(page_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 1, 0);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        label_5->setFont(font);

        gridLayout_13->addWidget(label_5, 0, 0, 1, 1);

        PreambleText = new LatexTextEdit(page_4);
        PreambleText->setObjectName(QString::fromUtf8("PreambleText"));

        gridLayout_13->addWidget(PreambleText, 1, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PreambleCombo = new QComboBox(page_4);
        PreambleCombo->setObjectName(QString::fromUtf8("PreambleCombo"));
        sizePolicy2.setHeightForWidth(PreambleCombo->sizePolicy().hasHeightForWidth());
        PreambleCombo->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(PreambleCombo);

        AddPreambleButton = new QPushButton(page_4);
        AddPreambleButton->setObjectName(QString::fromUtf8("AddPreambleButton"));
        QIcon icon12;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        AddPreambleButton->setIcon(icon12);

        horizontalLayout_2->addWidget(AddPreambleButton);

        RemovePreambleButton = new QPushButton(page_4);
        RemovePreambleButton->setObjectName(QString::fromUtf8("RemovePreambleButton"));
        QIcon icon13;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        RemovePreambleButton->setIcon(icon13);

        horizontalLayout_2->addWidget(RemovePreambleButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_13->addLayout(horizontalLayout_2, 0, 2, 1, 2);


        gridLayout_3->addLayout(gridLayout_13, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_4 = new QVBoxLayout(page_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 1, -1);
        groupBox_5 = new QGroupBox(page_6);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBox_5);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_27 = new QLabel(groupBox_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_14->addWidget(label_27, 0, 0, 1, 1);

        EditorFontSelect = new QFontComboBox(groupBox_5);
        EditorFontSelect->setObjectName(QString::fromUtf8("EditorFontSelect"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        EditorFontSelect->setCurrentFont(font1);

        gridLayout_14->addWidget(EditorFontSelect, 0, 1, 1, 1);

        label_30 = new QLabel(groupBox_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_14->addWidget(label_30, 1, 0, 1, 1);

        EditorFontSize = new QSpinBox(groupBox_5);
        EditorFontSize->setObjectName(QString::fromUtf8("EditorFontSize"));
        EditorFontSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        EditorFontSize->setMinimum(8);
        EditorFontSize->setValue(10);

        gridLayout_14->addWidget(EditorFontSize, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_14, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(groupBox_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setAlignment(Qt::AlignCenter);
        gridLayout_18 = new QGridLayout(groupBox_9);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_29 = new QLabel(groupBox_9);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout->addWidget(label_29);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandColorButton = new QPushButton(groupBox_9);
        commandColorButton->setObjectName(QString::fromUtf8("commandColorButton"));

        horizontalLayout->addWidget(commandColorButton);

        commandColor = new QLineEdit(groupBox_9);
        commandColor->setObjectName(QString::fromUtf8("commandColor"));

        horizontalLayout->addWidget(commandColor);


        gridLayout_18->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_9, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_2, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_5);

        stackedWidget->addWidget(page_6);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_5 = new QVBoxLayout(page_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, 1, 0);
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 1, 0, 1, 3);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        PdfLatexPath = new QLineEdit(groupBox_3);
        PdfLatexPath->setObjectName(QString::fromUtf8("PdfLatexPath"));

        gridLayout_2->addWidget(PdfLatexPath, 2, 1, 1, 1);

        OpenPdfLatexPath = new QPushButton(groupBox_3);
        OpenPdfLatexPath->setObjectName(QString::fromUtf8("OpenPdfLatexPath"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/document-open-data.svg"), QSize(), QIcon::Normal, QIcon::Off);
        OpenPdfLatexPath->setIcon(icon14);

        gridLayout_2->addWidget(OpenPdfLatexPath, 2, 2, 1, 1);

        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 3, 0, 1, 1);

        LatexPath = new QLineEdit(groupBox_3);
        LatexPath->setObjectName(QString::fromUtf8("LatexPath"));

        gridLayout_2->addWidget(LatexPath, 3, 1, 1, 1);

        OpenLatexPath = new QPushButton(groupBox_3);
        OpenLatexPath->setObjectName(QString::fromUtf8("OpenLatexPath"));
        OpenLatexPath->setIcon(icon14);

        gridLayout_2->addWidget(OpenLatexPath, 3, 2, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 4, 0, 1, 1);

        XelatexPath = new QLineEdit(groupBox_3);
        XelatexPath->setObjectName(QString::fromUtf8("XelatexPath"));

        gridLayout_2->addWidget(XelatexPath, 4, 1, 1, 1);

        OpenXeLatexPath = new QPushButton(groupBox_3);
        OpenXeLatexPath->setObjectName(QString::fromUtf8("OpenXeLatexPath"));
        OpenXeLatexPath->setIcon(icon14);

        gridLayout_2->addWidget(OpenXeLatexPath, 4, 2, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 5, 0, 1, 1);

        LualatexPath = new QLineEdit(groupBox_3);
        LualatexPath->setObjectName(QString::fromUtf8("LualatexPath"));

        gridLayout_2->addWidget(LualatexPath, 5, 1, 1, 1);

        OpenLuaLatexPath = new QPushButton(groupBox_3);
        OpenLuaLatexPath->setObjectName(QString::fromUtf8("OpenLuaLatexPath"));
        OpenLuaLatexPath->setIcon(icon14);

        gridLayout_2->addWidget(OpenLuaLatexPath, 5, 2, 1, 1);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 6, 0, 1, 1);

        PythontexPath = new QLineEdit(groupBox_3);
        PythontexPath->setObjectName(QString::fromUtf8("PythontexPath"));

        gridLayout_2->addWidget(PythontexPath, 6, 1, 1, 1);

        OpenPythontexPath = new QPushButton(groupBox_3);
        OpenPythontexPath->setObjectName(QString::fromUtf8("OpenPythontexPath"));
        OpenPythontexPath->setIcon(icon14);

        gridLayout_2->addWidget(OpenPythontexPath, 6, 2, 1, 1);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 7, 0, 1, 1);

        BibtexPath = new QLineEdit(groupBox_3);
        BibtexPath->setObjectName(QString::fromUtf8("BibtexPath"));

        gridLayout_2->addWidget(BibtexPath, 7, 1, 1, 1);

        OpenBibtexPath = new QPushButton(groupBox_3);
        OpenBibtexPath->setObjectName(QString::fromUtf8("OpenBibtexPath"));
        OpenBibtexPath->setIcon(icon14);

        gridLayout_2->addWidget(OpenBibtexPath, 7, 2, 1, 1);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 8, 0, 1, 1);

        AsymptotePath = new QLineEdit(groupBox_3);
        AsymptotePath->setObjectName(QString::fromUtf8("AsymptotePath"));

        gridLayout_2->addWidget(AsymptotePath, 8, 1, 1, 1);

        OpenAsymptotePath = new QPushButton(groupBox_3);
        OpenAsymptotePath->setObjectName(QString::fromUtf8("OpenAsymptotePath"));
        OpenAsymptotePath->setIcon(icon14);

        gridLayout_2->addWidget(OpenAsymptotePath, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(label_13);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_14->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_14->addWidget(radioButton_4);


        gridLayout_2->addLayout(horizontalLayout_14, 0, 0, 1, 3);


        verticalLayout_5->addWidget(groupBox_3);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        scrollArea_2 = new QScrollArea(page_5);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(60, 50, 391, 441));
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 379, 389));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_11 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));

        verticalLayout_9->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));

        verticalLayout_9->addWidget(groupBox_12);

        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));

        verticalLayout_9->addWidget(groupBox_13);

        groupBox_14 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));

        verticalLayout_9->addWidget(groupBox_14);

        groupBox_15 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));

        verticalLayout_9->addWidget(groupBox_15);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);
        stackedWidget->addWidget(page_5);
        splitter->addWidget(stackedWidget);

        gridLayout_8->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(Settings);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Database settings", nullptr));
        label_9->setText(QCoreApplication::translate("Settings", "Options", nullptr));

        const bool __sortingEnabled = ListOfSettings->isSortingEnabled();
        ListOfSettings->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ListOfSettings->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Settings", "General settings", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = ListOfSettings->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Settings", "File databases", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = ListOfSettings->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Settings", "Document databases", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = ListOfSettings->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Settings", "Bibliography", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = ListOfSettings->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Settings", "Preamble", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = ListOfSettings->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Settings", "Editor", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = ListOfSettings->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Settings", "Build commands", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = ListOfSettings->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Settings", "Connections", nullptr));
        ListOfSettings->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QCoreApplication::translate("Settings", "GUI settings", nullptr));
        label_12->setText(QCoreApplication::translate("Settings", "Font size", nullptr));
        label_31->setText(QCoreApplication::translate("Settings", "Theme", nullptr));
        SliderValue->setText(QCoreApplication::translate("Settings", "00", nullptr));
        label_10->setText(QCoreApplication::translate("Settings", "UI Font", nullptr));
        label_14->setText(QCoreApplication::translate("Settings", "Icon size", nullptr));
        label_11->setText(QCoreApplication::translate("Settings", "Language", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("Settings", "Personal data", nullptr));
        label_16->setText(QCoreApplication::translate("Settings", "Author:", nullptr));
        label_17->setText(QCoreApplication::translate("Settings", "Latex files name prefix:", nullptr));
        label_18->setText(QCoreApplication::translate("Settings", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Settings", "Program settings", nullptr));
        OpenSaveLocation->setText(QString());
        label_15->setText(QCoreApplication::translate("Settings", "Default save location", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Settings", "Database Info", nullptr));
        AddBase->setText(QCoreApplication::translate("Settings", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("Settings", "Database file path", nullptr));
#if QT_CONFIG(tooltip)
        BaseButton->setToolTip(QCoreApplication::translate("Settings", "\316\225\317\200\316\271\316\273\316\277\316\263\316\256 \317\206\316\261\316\272\316\255\316\273\316\277\317\205 \316\263\316\271\316\261 \317\204\316\261 \316\261\317\201\317\207\316\265\316\257\316\261 tex \317\204\316\267\317\202 \316\262\316\254\317\203\316\267\317\202", nullptr));
#endif // QT_CONFIG(tooltip)
        BaseButton->setText(QCoreApplication::translate("Settings", "New", nullptr));
        label_7->setText(QCoreApplication::translate("Settings", "Metadata", nullptr));
        label_4->setText(QCoreApplication::translate("Settings", "LaTeX Databases", nullptr));
#if QT_CONFIG(tooltip)
        DeleteFilesBase->setToolTip(QCoreApplication::translate("Settings", "\316\225\317\200\316\271\316\273\316\277\316\263\316\256 \317\206\316\261\316\272\316\255\316\273\316\277\317\205 \316\263\316\271\316\261 \317\204\316\261 \316\261\317\201\317\207\316\265\316\257\316\261 tex \317\204\316\267\317\202 \316\262\316\254\317\203\316\267\317\202", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteFilesBase->setText(QCoreApplication::translate("Settings", "Remove", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Settings", "Database Settings", nullptr));
        UseDatabasePrefix->setText(QCoreApplication::translate("Settings", "Use prefix for this database", nullptr));
        saveFDBPrefix->setText(QString());
        EncryptDatabase->setText(QCoreApplication::translate("Settings", "Encrypt database", nullptr));
        savePasswordFDB->setText(QString());
        label_32->setText(QCoreApplication::translate("Settings", "User name ", nullptr));
        DatabaseUserName->setPlaceholderText(QCoreApplication::translate("Settings", "User name...", nullptr));
        label_3->setText(QCoreApplication::translate("Settings", "Password ", nullptr));
        KeyGeneratorFDB->setText(QString());
        DatabasePassword->setPlaceholderText(QCoreApplication::translate("Settings", "Password...", nullptr));
        label->setText(QCoreApplication::translate("Settings", "Folder Structure Profile", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Settings", "Use seperate folders for tex,pdf and csv files", nullptr));
        radioButton->setText(QCoreApplication::translate("Settings", "Save files in folders, by chapter, section etc", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Settings", "Database Info", nullptr));
        label_28->setText(QCoreApplication::translate("Settings", "Metadata", nullptr));
#if QT_CONFIG(tooltip)
        NoteButton->setToolTip(QCoreApplication::translate("Settings", "\316\225\317\200\316\271\316\273\316\277\316\263\316\256 \317\206\316\261\316\272\316\255\316\273\316\277\317\205 \317\203\316\267\316\274\316\265\316\271\317\216\317\203\316\265\317\211\316\275", nullptr));
#endif // QT_CONFIG(tooltip)
        NoteButton->setText(QCoreApplication::translate("Settings", "New", nullptr));
        label_23->setText(QCoreApplication::translate("Settings", "Documents Databases", nullptr));
        AddDocDatabaseButton->setText(QCoreApplication::translate("Settings", "Add", nullptr));
#if QT_CONFIG(tooltip)
        DeleteBase->setToolTip(QCoreApplication::translate("Settings", "\316\225\317\200\316\271\316\273\316\277\316\263\316\256 \317\206\316\261\316\272\316\255\316\273\316\277\317\205 \316\263\316\271\316\261 \317\204\316\261 \316\261\317\201\317\207\316\265\316\257\316\261 tex \317\204\316\267\317\202 \316\262\316\254\317\203\316\267\317\202", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteBase->setText(QCoreApplication::translate("Settings", "Remove", nullptr));
        label_24->setText(QCoreApplication::translate("Settings", "Database file path", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Settings", "Database Settings", nullptr));
        UseDocDatabasePrefix->setText(QCoreApplication::translate("Settings", "Use prefix for this database", nullptr));
        saveDDBPrefix->setText(QString());
        EncryptDocDatabase->setText(QCoreApplication::translate("Settings", "Encrypt database", nullptr));
        savePasswordDDB->setText(QString());
        label_33->setText(QCoreApplication::translate("Settings", "User name ", nullptr));
        DocDatabaseUserName->setPlaceholderText(QCoreApplication::translate("Settings", "Password...", nullptr));
        label_34->setText(QCoreApplication::translate("Settings", "Password ", nullptr));
        KeyGeneratorDDB->setText(QString());
        DocDatabasePassword->setPlaceholderText(QCoreApplication::translate("Settings", "Password...", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("Settings", "GroupBox", nullptr));
        label_8->setText(QCoreApplication::translate("Settings", "Bibliographic fields", nullptr));
        label_5->setText(QCoreApplication::translate("Settings", "Select and preview preamble", nullptr));
        AddPreambleButton->setText(QString());
        RemovePreambleButton->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("Settings", "Editor settings", nullptr));
        label_27->setText(QCoreApplication::translate("Settings", "Font", nullptr));
        label_30->setText(QCoreApplication::translate("Settings", "Font size", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("Settings", "Syntax highlighting", nullptr));
        label_29->setText(QCoreApplication::translate("Settings", "TextLabel", nullptr));
        commandColorButton->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Settings", "Build commands", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "Pdflatex", nullptr));
        OpenPdfLatexPath->setText(QString());
        label_19->setText(QCoreApplication::translate("Settings", "Latex", nullptr));
        OpenLatexPath->setText(QString());
        label_20->setText(QCoreApplication::translate("Settings", "Xelatex", nullptr));
        OpenXeLatexPath->setText(QString());
        label_21->setText(QCoreApplication::translate("Settings", "Lualatex", nullptr));
        OpenLuaLatexPath->setText(QString());
        label_22->setText(QCoreApplication::translate("Settings", "Pythontex", nullptr));
        OpenPythontexPath->setText(QString());
        label_25->setText(QCoreApplication::translate("Settings", "BibTex", nullptr));
        OpenBibtexPath->setText(QString());
        label_26->setText(QCoreApplication::translate("Settings", "Asymptote", nullptr));
        OpenAsymptotePath->setText(QString());
        label_13->setText(QCoreApplication::translate("Settings", "TeX engine", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Settings", "TeXLive", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Settings", "MikTeX", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("Settings", "GroupBox", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("Settings", "GroupBox", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("Settings", "GroupBox", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("Settings", "GroupBox", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("Settings", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
