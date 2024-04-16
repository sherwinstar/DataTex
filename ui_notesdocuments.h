/********************************************************************************
** Form generated from reading UI file 'notesdocuments.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTESDOCUMENTS_H
#define UI_NOTESDOCUMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "switch.h"

QT_BEGIN_NAMESPACE

class Ui_NotesDocuments
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *OkbuttonBoxFolders;
    QSplitter *splitter_6;
    QStackedWidget *stackedWidget_2;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *DatabaseLabel;
    QComboBox *DatabaseCombo;
    QFrame *line_2;
    QLabel *label_2;
    QTreeView *FoldersStructureView;
    QGridLayout *gridLayout_3;
    QPushButton *RemButton;
    QPushButton *CreateSubFolder;
    QPushButton *EditButton;
    QPushButton *CreateBasicFolder;
    QSplitter *splitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QPushButton *addButton;
    QPushButton *removeButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_7;
    QTextEdit *DocumentDescription;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *BuildBox;
    QComboBox *PreambleBox;
    QVBoxLayout *verticalLayout_20;
    QLabel *FolderLabel_2;
    QGridLayout *gridLayout_2;
    QLabel *FolderLabel;
    QLineEdit *pathline;
    QPushButton *OpenPath;
    QLabel *Label2_2;
    QLabel *Label2;
    QLineEdit *TitleLine;
    QLineEdit *NameLine;
    QWidget *page;
    QGridLayout *gridLayout_11;
    QSplitter *splitter_4;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_16;
    QVBoxLayout *verticalLayout_8;
    QPushButton *addfileButton;
    QPushButton *addEverything;
    QPushButton *removefileButton;
    QPushButton *EnableSortingFiles;
    QPushButton *ClearFiltersFD;
    QPushButton *FilesTagFilter;
    QLabel *CountLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    Switch *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_3;
    QLabel *label_7;
    QComboBox *FilesDatabasesCombo;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_17;
    QTabWidget *FilesTabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_9;
    LatexTextBrowser *FileContent;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_10;
    QWidget *tab_5;
    QGridLayout *gridLayout_9;
    QTableView *filesSelected;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_12;
    QSplitter *splitter_5;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *SelectedFilesLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *numLabel;
    QSpinBox *numOfFilesSpin;
    QFrame *line_4;
    QPushButton *LockUnlockAll;
    QPushButton *CleanUnlocked;
    QPushButton *removeAll;
    QPushButton *RefreshSelection;
    QListWidget *RandomSelectionList;
    QVBoxLayout *verticalLayout_13;
    QPushButton *moveUp;
    QPushButton *moveDown;
    QPushButton *AddRandomFiles;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *SourceCode;
    QPushButton *DocViewerButton;
    QFrame *line;
    QPushButton *PdfPreview;
    Switch *InsertFilesCheckBox;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1_2;
    QGridLayout *gridLayout_6;
    LatexTextWidget *DocumentContent;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_19;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *NotesDocuments)
    {
        if (NotesDocuments->objectName().isEmpty())
            NotesDocuments->setObjectName(QString::fromUtf8("NotesDocuments"));
        NotesDocuments->resize(1189, 718);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        NotesDocuments->setWindowIcon(icon);
        gridLayout = new QGridLayout(NotesDocuments);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        OkbuttonBoxFolders = new QDialogButtonBox(NotesDocuments);
        OkbuttonBoxFolders->setObjectName(QString::fromUtf8("OkbuttonBoxFolders"));
        OkbuttonBoxFolders->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(OkbuttonBoxFolders, 1, 0, 1, 1);

        splitter_6 = new QSplitter(NotesDocuments);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        stackedWidget_2 = new QStackedWidget(splitter_6);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        verticalLayout_7 = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(stackedWidgetPage1);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setHandleWidth(8);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        DatabaseLabel = new QLabel(layoutWidget);
        DatabaseLabel->setObjectName(QString::fromUtf8("DatabaseLabel"));

        horizontalLayout_2->addWidget(DatabaseLabel);

        DatabaseCombo = new QComboBox(layoutWidget);
        DatabaseCombo->setObjectName(QString::fromUtf8("DatabaseCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DatabaseCombo->sizePolicy().hasHeightForWidth());
        DatabaseCombo->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(DatabaseCombo);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        FoldersStructureView = new QTreeView(layoutWidget);
        FoldersStructureView->setObjectName(QString::fromUtf8("FoldersStructureView"));

        verticalLayout_3->addWidget(FoldersStructureView);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        RemButton = new QPushButton(layoutWidget);
        RemButton->setObjectName(QString::fromUtf8("RemButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RemButton->setIcon(icon1);

        gridLayout_3->addWidget(RemButton, 1, 0, 1, 1);

        CreateSubFolder = new QPushButton(layoutWidget);
        CreateSubFolder->setObjectName(QString::fromUtf8("CreateSubFolder"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/structure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CreateSubFolder->setIcon(icon2);

        gridLayout_3->addWidget(CreateSubFolder, 0, 1, 1, 1);

        EditButton = new QPushButton(layoutWidget);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/document-edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EditButton->setIcon(icon3);

        gridLayout_3->addWidget(EditButton, 1, 1, 1, 1);

        CreateBasicFolder = new QPushButton(layoutWidget);
        CreateBasicFolder->setObjectName(QString::fromUtf8("CreateBasicFolder"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/folder-new-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CreateBasicFolder->setIcon(icon4);

        gridLayout_3->addWidget(CreateBasicFolder, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        splitter_2->addWidget(layoutWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(5);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_8);

        addButton = new QPushButton(layoutWidget_2);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/add-button.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon5);
        addButton->setFlat(true);

        horizontalLayout_3->addWidget(addButton);

        removeButton = new QPushButton(layoutWidget_2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        sizePolicy2.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy2);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon6);
        removeButton->setFlat(true);

        horizontalLayout_3->addWidget(removeButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(layoutWidget_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 343, 68));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));

        verticalLayout_2->addLayout(gridLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        DocumentDescription = new QTextEdit(layoutWidget_3);
        DocumentDescription->setObjectName(QString::fromUtf8("DocumentDescription"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(DocumentDescription->sizePolicy().hasHeightForWidth());
        DocumentDescription->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(DocumentDescription, 3, 0, 1, 2);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 2, 0, 1, 2);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 0, 1, 1, 1);

        BuildBox = new QComboBox(layoutWidget_3);
        BuildBox->setObjectName(QString::fromUtf8("BuildBox"));

        gridLayout_7->addWidget(BuildBox, 1, 1, 1, 1);

        PreambleBox = new QComboBox(layoutWidget_3);
        PreambleBox->setObjectName(QString::fromUtf8("PreambleBox"));

        gridLayout_7->addWidget(PreambleBox, 1, 0, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        FolderLabel_2 = new QLabel(layoutWidget_3);
        FolderLabel_2->setObjectName(QString::fromUtf8("FolderLabel_2"));
        sizePolicy2.setHeightForWidth(FolderLabel_2->sizePolicy().hasHeightForWidth());
        FolderLabel_2->setSizePolicy(sizePolicy2);
        FolderLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        FolderLabel_2->setWordWrap(true);

        verticalLayout_20->addWidget(FolderLabel_2);


        gridLayout_7->addLayout(verticalLayout_20, 4, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_7);

        splitter->addWidget(layoutWidget_3);
        splitter_2->addWidget(splitter);

        verticalLayout_7->addWidget(splitter_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(2);
        FolderLabel = new QLabel(stackedWidgetPage1);
        FolderLabel->setObjectName(QString::fromUtf8("FolderLabel"));
        sizePolicy2.setHeightForWidth(FolderLabel->sizePolicy().hasHeightForWidth());
        FolderLabel->setSizePolicy(sizePolicy2);
        FolderLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        FolderLabel->setWordWrap(true);

        gridLayout_2->addWidget(FolderLabel, 0, 0, 1, 1);

        pathline = new QLineEdit(stackedWidgetPage1);
        pathline->setObjectName(QString::fromUtf8("pathline"));

        gridLayout_2->addWidget(pathline, 0, 1, 1, 1);

        OpenPath = new QPushButton(stackedWidgetPage1);
        OpenPath->setObjectName(QString::fromUtf8("OpenPath"));
        sizePolicy2.setHeightForWidth(OpenPath->sizePolicy().hasHeightForWidth());
        OpenPath->setSizePolicy(sizePolicy2);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/document-open-data.svg"), QSize(), QIcon::Normal, QIcon::Off);
        OpenPath->setIcon(icon7);

        gridLayout_2->addWidget(OpenPath, 0, 2, 1, 1);

        Label2_2 = new QLabel(stackedWidgetPage1);
        Label2_2->setObjectName(QString::fromUtf8("Label2_2"));
        sizePolicy2.setHeightForWidth(Label2_2->sizePolicy().hasHeightForWidth());
        Label2_2->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(false);
        Label2_2->setFont(font);
        Label2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Label2_2->setWordWrap(true);

        gridLayout_2->addWidget(Label2_2, 1, 0, 1, 1);

        Label2 = new QLabel(stackedWidgetPage1);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        sizePolicy2.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy2);
        Label2->setFont(font);
        Label2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        Label2->setWordWrap(true);

        gridLayout_2->addWidget(Label2, 2, 0, 1, 1);

        TitleLine = new QLineEdit(stackedWidgetPage1);
        TitleLine->setObjectName(QString::fromUtf8("TitleLine"));
        TitleLine->setInputMethodHints(Qt::ImhLatinOnly);

        gridLayout_2->addWidget(TitleLine, 1, 1, 1, 2);

        NameLine = new QLineEdit(stackedWidgetPage1);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));
        NameLine->setInputMethodHints(Qt::ImhLatinOnly);

        gridLayout_2->addWidget(NameLine, 2, 1, 1, 2);


        verticalLayout_7->addLayout(gridLayout_2);

        stackedWidget_2->addWidget(stackedWidgetPage1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_11 = new QGridLayout(page);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(page);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_4->setHandleWidth(8);
        layoutWidget_4 = new QWidget(splitter_4);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        gridLayout_16 = new QGridLayout(layoutWidget_4);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        addfileButton = new QPushButton(layoutWidget_4);
        addfileButton->setObjectName(QString::fromUtf8("addfileButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(addfileButton->sizePolicy().hasHeightForWidth());
        addfileButton->setSizePolicy(sizePolicy4);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/go-next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addfileButton->setIcon(icon8);
        addfileButton->setFlat(true);

        verticalLayout_8->addWidget(addfileButton);

        addEverything = new QPushButton(layoutWidget_4);
        addEverything->setObjectName(QString::fromUtf8("addEverything"));
        sizePolicy2.setHeightForWidth(addEverything->sizePolicy().hasHeightForWidth());
        addEverything->setSizePolicy(sizePolicy2);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/go-last.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addEverything->setIcon(icon9);
        addEverything->setFlat(true);

        verticalLayout_8->addWidget(addEverything);

        removefileButton = new QPushButton(layoutWidget_4);
        removefileButton->setObjectName(QString::fromUtf8("removefileButton"));
        sizePolicy4.setHeightForWidth(removefileButton->sizePolicy().hasHeightForWidth());
        removefileButton->setSizePolicy(sizePolicy4);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/go-previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removefileButton->setIcon(icon10);
        removefileButton->setFlat(true);

        verticalLayout_8->addWidget(removefileButton);

        EnableSortingFiles = new QPushButton(layoutWidget_4);
        EnableSortingFiles->setObjectName(QString::fromUtf8("EnableSortingFiles"));
        sizePolicy2.setHeightForWidth(EnableSortingFiles->sizePolicy().hasHeightForWidth());
        EnableSortingFiles->setSizePolicy(sizePolicy2);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/sort-presence.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EnableSortingFiles->setIcon(icon11);
        EnableSortingFiles->setCheckable(true);
        EnableSortingFiles->setFlat(true);

        verticalLayout_8->addWidget(EnableSortingFiles);

        ClearFiltersFD = new QPushButton(layoutWidget_4);
        ClearFiltersFD->setObjectName(QString::fromUtf8("ClearFiltersFD"));
        sizePolicy2.setHeightForWidth(ClearFiltersFD->sizePolicy().hasHeightForWidth());
        ClearFiltersFD->setSizePolicy(sizePolicy2);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/kt-remove-filters.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ClearFiltersFD->setIcon(icon12);
        ClearFiltersFD->setFlat(true);

        verticalLayout_8->addWidget(ClearFiltersFD);

        FilesTagFilter = new QPushButton(layoutWidget_4);
        FilesTagFilter->setObjectName(QString::fromUtf8("FilesTagFilter"));
        sizePolicy2.setHeightForWidth(FilesTagFilter->sizePolicy().hasHeightForWidth());
        FilesTagFilter->setSizePolicy(sizePolicy2);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/tag.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FilesTagFilter->setIcon(icon13);
        FilesTagFilter->setCheckable(true);
        FilesTagFilter->setFlat(true);

        verticalLayout_8->addWidget(FilesTagFilter);

        CountLabel = new QLabel(layoutWidget_4);
        CountLabel->setObjectName(QString::fromUtf8("CountLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("KerkisSans"));
        font1.setPointSize(14);
        font1.setBold(true);
        CountLabel->setFont(font1);
        CountLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: #ffffff;"));
        CountLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(CountLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        gridLayout_16->addLayout(verticalLayout_8, 3, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBox = new Switch(layoutWidget_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_6->addWidget(checkBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        line_3 = new QFrame(layoutWidget_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_3);

        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy5);
        QFont font2;
        font2.setBold(true);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 88, 0);"));

        horizontalLayout_6->addWidget(label_7);

        FilesDatabasesCombo = new QComboBox(layoutWidget_4);
        FilesDatabasesCombo->setObjectName(QString::fromUtf8("FilesDatabasesCombo"));

        horizontalLayout_6->addWidget(FilesDatabasesCombo);


        gridLayout_16->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        splitter_4->addWidget(layoutWidget_4);
        layoutWidget_5 = new QWidget(splitter_4);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        gridLayout_17 = new QGridLayout(layoutWidget_5);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        FilesTabWidget = new QTabWidget(layoutWidget_5);
        FilesTabWidget->setObjectName(QString::fromUtf8("FilesTabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        FileContent = new LatexTextBrowser(tab_3);
        FileContent->setObjectName(QString::fromUtf8("FileContent"));

        verticalLayout_9->addWidget(FileContent);

        FilesTabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_10 = new QVBoxLayout(tab_4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        FilesTabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_9 = new QGridLayout(tab_5);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        filesSelected = new QTableView(tab_5);
        filesSelected->setObjectName(QString::fromUtf8("filesSelected"));
        filesSelected->setSelectionMode(QAbstractItemView::SingleSelection);
        filesSelected->setSelectionBehavior(QAbstractItemView::SelectRows);
        filesSelected->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_9->addWidget(filesSelected, 0, 0, 1, 1);

        FilesTabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_12 = new QVBoxLayout(tab_6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        splitter_5 = new QSplitter(tab_6);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        layoutWidget_6 = new QWidget(splitter_5);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        gridLayout_10 = new QGridLayout(layoutWidget_6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        SelectedFilesLabel = new QLabel(layoutWidget_6);
        SelectedFilesLabel->setObjectName(QString::fromUtf8("SelectedFilesLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(SelectedFilesLabel->sizePolicy().hasHeightForWidth());
        SelectedFilesLabel->setSizePolicy(sizePolicy6);

        horizontalLayout_7->addWidget(SelectedFilesLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        numLabel = new QLabel(layoutWidget_6);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));

        horizontalLayout_7->addWidget(numLabel);

        numOfFilesSpin = new QSpinBox(layoutWidget_6);
        numOfFilesSpin->setObjectName(QString::fromUtf8("numOfFilesSpin"));
        sizePolicy2.setHeightForWidth(numOfFilesSpin->sizePolicy().hasHeightForWidth());
        numOfFilesSpin->setSizePolicy(sizePolicy2);
        numOfFilesSpin->setMinimum(1);
        numOfFilesSpin->setValue(4);

        horizontalLayout_7->addWidget(numOfFilesSpin);

        line_4 = new QFrame(layoutWidget_6);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_4);

        LockUnlockAll = new QPushButton(layoutWidget_6);
        LockUnlockAll->setObjectName(QString::fromUtf8("LockUnlockAll"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/document-encrypted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LockUnlockAll->setIcon(icon14);
        LockUnlockAll->setCheckable(true);
        LockUnlockAll->setFlat(true);

        horizontalLayout_7->addWidget(LockUnlockAll);

        CleanUnlocked = new QPushButton(layoutWidget_6);
        CleanUnlocked->setObjectName(QString::fromUtf8("CleanUnlocked"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/clean.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CleanUnlocked->setIcon(icon15);
        CleanUnlocked->setFlat(true);

        horizontalLayout_7->addWidget(CleanUnlocked);

        removeAll = new QPushButton(layoutWidget_6);
        removeAll->setObjectName(QString::fromUtf8("removeAll"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/edit-delete-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeAll->setIcon(icon16);
        removeAll->setFlat(true);

        horizontalLayout_7->addWidget(removeAll);

        RefreshSelection = new QPushButton(layoutWidget_6);
        RefreshSelection->setObjectName(QString::fromUtf8("RefreshSelection"));
        sizePolicy2.setHeightForWidth(RefreshSelection->sizePolicy().hasHeightForWidth());
        RefreshSelection->setSizePolicy(sizePolicy2);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/update-document.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RefreshSelection->setIcon(icon17);

        horizontalLayout_7->addWidget(RefreshSelection);


        gridLayout_10->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        RandomSelectionList = new QListWidget(layoutWidget_6);
        RandomSelectionList->setObjectName(QString::fromUtf8("RandomSelectionList"));
        RandomSelectionList->setStyleSheet(QString::fromUtf8("QListView::indicator:unchecked {\n"
"  image: url(\":/qss_icons/linux_breath/rc/lockbox_unlocked.png\");\n"
"}\n"
"QListView::indicator:unchecked:hover, QListView::indicator:unchecked:focus, QListView::indicator:unchecked:pressed {\n"
"  border: none;\n"
"  image: url(\":/qss_icons/linux_breath/rc/lockbox_unlocked_focus.png\");\n"
"}\n"
"\n"
"QListView::indicator:checked {\n"
"  image: url(\":/qss_icons/linux_breath/rc/lockbox_locked.png\");\n"
"}\n"
"\n"
"QListView::indicator:checked:hover, QListView::indicator:checked:focus, QListView::indicator:checked:pressed {\n"
"  border: none;\n"
"  image: url(\":/qss_icons/linux_breath/rc/lockbox_locked_focus.png\");\n"
"}\n"
""));
        RandomSelectionList->setAlternatingRowColors(true);

        gridLayout_10->addWidget(RandomSelectionList, 1, 0, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        moveUp = new QPushButton(layoutWidget_6);
        moveUp->setObjectName(QString::fromUtf8("moveUp"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/go-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveUp->setIcon(icon18);
        moveUp->setFlat(true);

        verticalLayout_13->addWidget(moveUp);

        moveDown = new QPushButton(layoutWidget_6);
        moveDown->setObjectName(QString::fromUtf8("moveDown"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/go-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveDown->setIcon(icon19);
        moveDown->setFlat(true);

        verticalLayout_13->addWidget(moveDown);

        AddRandomFiles = new QPushButton(layoutWidget_6);
        AddRandomFiles->setObjectName(QString::fromUtf8("AddRandomFiles"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(AddRandomFiles->sizePolicy().hasHeightForWidth());
        AddRandomFiles->setSizePolicy(sizePolicy7);
        AddRandomFiles->setIcon(icon9);
        AddRandomFiles->setFlat(true);

        verticalLayout_13->addWidget(AddRandomFiles);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_2);


        gridLayout_10->addLayout(verticalLayout_13, 1, 1, 1, 1);

        splitter_5->addWidget(layoutWidget_6);
        verticalLayoutWidget = new QWidget(splitter_5);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        splitter_5->addWidget(verticalLayoutWidget);

        verticalLayout_12->addWidget(splitter_5);

        FilesTabWidget->addTab(tab_6, QString());

        gridLayout_17->addWidget(FilesTabWidget, 0, 0, 1, 1);

        splitter_4->addWidget(layoutWidget_5);

        gridLayout_11->addWidget(splitter_4, 0, 0, 1, 1);

        stackedWidget_2->addWidget(page);
        splitter_6->addWidget(stackedWidget_2);
        splitter_3 = new QSplitter(splitter_6);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_15 = new QVBoxLayout(layoutWidget1);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        SourceCode = new QPushButton(layoutWidget1);
        buttonGroup = new QButtonGroup(NotesDocuments);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(SourceCode);
        SourceCode->setObjectName(QString::fromUtf8("SourceCode"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/latex-config.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SourceCode->setIcon(icon20);
        SourceCode->setCheckable(true);
        SourceCode->setFlat(true);

        horizontalLayout_5->addWidget(SourceCode);

        DocViewerButton = new QPushButton(layoutWidget1);
        buttonGroup->addButton(DocViewerButton);
        DocViewerButton->setObjectName(QString::fromUtf8("DocViewerButton"));
        DocViewerButton->setIcon(icon11);
        DocViewerButton->setCheckable(true);
        DocViewerButton->setFlat(true);

        horizontalLayout_5->addWidget(DocViewerButton);

        line = new QFrame(layoutWidget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);

        PdfPreview = new QPushButton(layoutWidget1);
        PdfPreview->setObjectName(QString::fromUtf8("PdfPreview"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/pdf2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        PdfPreview->setIcon(icon21);
        PdfPreview->setCheckable(true);
        PdfPreview->setFlat(true);

        horizontalLayout_5->addWidget(PdfPreview);

        InsertFilesCheckBox = new Switch(layoutWidget1);
        InsertFilesCheckBox->setObjectName(QString::fromUtf8("InsertFilesCheckBox"));

        horizontalLayout_5->addWidget(InsertFilesCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_15->addLayout(horizontalLayout_5);

        stackedWidget = new QStackedWidget(layoutWidget1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidgetPage1_2 = new QWidget();
        stackedWidgetPage1_2->setObjectName(QString::fromUtf8("stackedWidgetPage1_2"));
        gridLayout_6 = new QGridLayout(stackedWidgetPage1_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        DocumentContent = new LatexTextWidget(stackedWidgetPage1_2);
        DocumentContent->setObjectName(QString::fromUtf8("DocumentContent"));

        gridLayout_6->addWidget(DocumentContent, 0, 0, 1, 1);

        stackedWidget->addWidget(stackedWidgetPage1_2);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_19 = new QVBoxLayout(page_2);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_2);

        verticalLayout_15->addWidget(stackedWidget);

        splitter_3->addWidget(layoutWidget1);
        splitter_6->addWidget(splitter_3);

        gridLayout->addWidget(splitter_6, 0, 0, 1, 1);


        retranslateUi(NotesDocuments);

        stackedWidget_2->setCurrentIndex(0);
        FilesTabWidget->setCurrentIndex(3);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NotesDocuments);
    } // setupUi

    void retranslateUi(QDialog *NotesDocuments)
    {
        NotesDocuments->setWindowTitle(QCoreApplication::translate("NotesDocuments", "Create and preview database documents", nullptr));
        DatabaseLabel->setText(QCoreApplication::translate("NotesDocuments", "Select database", nullptr));
        label_2->setText(QCoreApplication::translate("NotesDocuments", "Select new document destination", nullptr));
        RemButton->setText(QCoreApplication::translate("NotesDocuments", "Remove", nullptr));
        CreateSubFolder->setText(QCoreApplication::translate("NotesDocuments", "Subfolder", nullptr));
        EditButton->setText(QCoreApplication::translate("NotesDocuments", "Edit", nullptr));
        CreateBasicFolder->setText(QCoreApplication::translate("NotesDocuments", "Folder", nullptr));
        label_8->setText(QCoreApplication::translate("NotesDocuments", "Document type", nullptr));
        addButton->setText(QString());
        removeButton->setText(QString());
        label_4->setText(QCoreApplication::translate("NotesDocuments", "Preamble", nullptr));
        label_6->setText(QCoreApplication::translate("NotesDocuments", "Document description", nullptr));
        label_5->setText(QCoreApplication::translate("NotesDocuments", "Build command", nullptr));
        FolderLabel_2->setText(QCoreApplication::translate("NotesDocuments", "Custom tags", nullptr));
        FolderLabel->setText(QCoreApplication::translate("NotesDocuments", "Destination folder", nullptr));
        OpenPath->setText(QString());
        Label2_2->setText(QCoreApplication::translate("NotesDocuments", "Select file title", nullptr));
        Label2->setText(QCoreApplication::translate("NotesDocuments", "Select file name", nullptr));
        addfileButton->setText(QString());
        addEverything->setText(QString());
        removefileButton->setText(QString());
        EnableSortingFiles->setText(QString());
        ClearFiltersFD->setText(QString());
        FilesTagFilter->setText(QString());
        CountLabel->setText(QString());
        checkBox->setText(QCoreApplication::translate("NotesDocuments", "Insert files from multiple databases", nullptr));
        label_7->setText(QCoreApplication::translate("NotesDocuments", "Database source : ", nullptr));
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_3), QCoreApplication::translate("NotesDocuments", "File content", nullptr));
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_4), QCoreApplication::translate("NotesDocuments", "Pdf view", nullptr));
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_5), QCoreApplication::translate("NotesDocuments", "Files included", nullptr));
        SelectedFilesLabel->setText(QCoreApplication::translate("NotesDocuments", "Files selected", nullptr));
        numLabel->setText(QCoreApplication::translate("NotesDocuments", "Number of files", nullptr));
#if QT_CONFIG(tooltip)
        LockUnlockAll->setToolTip(QCoreApplication::translate("NotesDocuments", "Lock - Unlock all files", nullptr));
#endif // QT_CONFIG(tooltip)
        LockUnlockAll->setText(QString());
#if QT_CONFIG(tooltip)
        CleanUnlocked->setToolTip(QCoreApplication::translate("NotesDocuments", "Lock - Unlock all files", nullptr));
#endif // QT_CONFIG(tooltip)
        CleanUnlocked->setText(QString());
#if QT_CONFIG(tooltip)
        removeAll->setToolTip(QCoreApplication::translate("NotesDocuments", "Remove unselected files", nullptr));
#endif // QT_CONFIG(tooltip)
        removeAll->setText(QString());
        RefreshSelection->setText(QCoreApplication::translate("NotesDocuments", "Random selection", nullptr));
        moveUp->setText(QString());
        moveDown->setText(QString());
#if QT_CONFIG(tooltip)
        AddRandomFiles->setToolTip(QCoreApplication::translate("NotesDocuments", "Add selected files to editor", nullptr));
#endif // QT_CONFIG(tooltip)
        AddRandomFiles->setText(QString());
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_6), QCoreApplication::translate("NotesDocuments", "Random selection preview", nullptr));
        SourceCode->setText(QString());
        DocViewerButton->setText(QString());
        PdfPreview->setText(QString());
        InsertFilesCheckBox->setText(QCoreApplication::translate("NotesDocuments", "Insert files to the new document", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotesDocuments: public Ui_NotesDocuments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESDOCUMENTS_H
