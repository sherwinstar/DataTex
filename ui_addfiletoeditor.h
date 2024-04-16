/********************************************************************************
** Form generated from reading UI file 'addfiletoeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILETOEDITOR_H
#define UI_ADDFILETOEDITOR_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "switch.h"

QT_BEGIN_NAMESPACE

class Ui_AddFileToEditor
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *Okbutton;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_16;
    QHBoxLayout *horizontalLayout_4;
    Switch *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QLabel *label_2;
    QComboBox *FilesDatabasesCombo;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *addEverything;
    QPushButton *removeButton;
    QFrame *line_2;
    QPushButton *EnableSortingFiles;
    QPushButton *ClearFiltersFD;
    QPushButton *FilesTagFilter;
    QLabel *CountLabel;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_17;
    QTabWidget *FilesTabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    LatexTextBrowser *FileContent;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QWidget *tab_5;
    QGridLayout *gridLayout_3;
    QTableView *filesSelected;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_11;
    QSplitter *splitter_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *SelectedFilesLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *numLabel;
    QSpinBox *numOfFilesSpin;
    QFrame *line_4;
    QPushButton *LockUnlockAll;
    QPushButton *CleanUnlocked;
    QPushButton *removeAll;
    QPushButton *RefreshSelection;
    QListWidget *RandomSelectionList;
    QVBoxLayout *verticalLayout_10;
    QPushButton *moveUp;
    QPushButton *moveDown;
    QPushButton *AddRandomFiles;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_9;
    QSplitter *splitter_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QWidget *ToolBar;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *DocPdf;
    QPushButton *FilePdf;
    QFrame *line_3;
    QPushButton *ShowPdfSide;
    LatexTextWidget *DocumentContent;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *AddFileToEditor)
    {
        if (AddFileToEditor->objectName().isEmpty())
            AddFileToEditor->setObjectName(QString::fromUtf8("AddFileToEditor"));
        AddFileToEditor->resize(992, 694);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddFileToEditor->sizePolicy().hasHeightForWidth());
        AddFileToEditor->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddFileToEditor->setWindowIcon(icon);
        gridLayout = new QGridLayout(AddFileToEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Okbutton = new QDialogButtonBox(AddFileToEditor);
        Okbutton->setObjectName(QString::fromUtf8("Okbutton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Okbutton->sizePolicy().hasHeightForWidth());
        Okbutton->setSizePolicy(sizePolicy1);
        Okbutton->setOrientation(Qt::Horizontal);
        Okbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(Okbutton, 1, 0, 1, 1);

        splitter_4 = new QSplitter(AddFileToEditor);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(8);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_16 = new QGridLayout(layoutWidget);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox = new Switch(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_4->addWidget(checkBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 88, 0);"));

        horizontalLayout_4->addWidget(label_2);

        FilesDatabasesCombo = new QComboBox(layoutWidget);
        FilesDatabasesCombo->setObjectName(QString::fromUtf8("FilesDatabasesCombo"));

        horizontalLayout_4->addWidget(FilesDatabasesCombo);


        gridLayout_16->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/go-next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon1);
        addButton->setFlat(true);

        verticalLayout->addWidget(addButton);

        addEverything = new QPushButton(layoutWidget);
        addEverything->setObjectName(QString::fromUtf8("addEverything"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(addEverything->sizePolicy().hasHeightForWidth());
        addEverything->setSizePolicy(sizePolicy4);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/go-last.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addEverything->setIcon(icon2);
        addEverything->setFlat(true);

        verticalLayout->addWidget(addEverything);

        removeButton = new QPushButton(layoutWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        sizePolicy3.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/go-previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon3);
        removeButton->setFlat(true);

        verticalLayout->addWidget(removeButton);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        EnableSortingFiles = new QPushButton(layoutWidget);
        EnableSortingFiles->setObjectName(QString::fromUtf8("EnableSortingFiles"));
        sizePolicy4.setHeightForWidth(EnableSortingFiles->sizePolicy().hasHeightForWidth());
        EnableSortingFiles->setSizePolicy(sizePolicy4);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/sort-presence.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EnableSortingFiles->setIcon(icon4);
        EnableSortingFiles->setCheckable(true);
        EnableSortingFiles->setFlat(true);

        verticalLayout->addWidget(EnableSortingFiles);

        ClearFiltersFD = new QPushButton(layoutWidget);
        ClearFiltersFD->setObjectName(QString::fromUtf8("ClearFiltersFD"));
        sizePolicy4.setHeightForWidth(ClearFiltersFD->sizePolicy().hasHeightForWidth());
        ClearFiltersFD->setSizePolicy(sizePolicy4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/kt-remove-filters.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ClearFiltersFD->setIcon(icon5);
        ClearFiltersFD->setFlat(true);

        verticalLayout->addWidget(ClearFiltersFD);

        FilesTagFilter = new QPushButton(layoutWidget);
        FilesTagFilter->setObjectName(QString::fromUtf8("FilesTagFilter"));
        sizePolicy4.setHeightForWidth(FilesTagFilter->sizePolicy().hasHeightForWidth());
        FilesTagFilter->setSizePolicy(sizePolicy4);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/tag.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FilesTagFilter->setIcon(icon6);
        FilesTagFilter->setCheckable(true);
        FilesTagFilter->setFlat(true);

        verticalLayout->addWidget(FilesTagFilter);

        CountLabel = new QLabel(layoutWidget);
        CountLabel->setObjectName(QString::fromUtf8("CountLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("KerkisSans"));
        font1.setPointSize(14);
        font1.setBold(true);
        CountLabel->setFont(font1);
        CountLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: #ffffff;"));
        CountLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(CountLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_16->addLayout(verticalLayout, 3, 1, 1, 1);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_17 = new QGridLayout(layoutWidget1);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        FilesTabWidget = new QTabWidget(layoutWidget1);
        FilesTabWidget->setObjectName(QString::fromUtf8("FilesTabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        FileContent = new LatexTextBrowser(tab_3);
        FileContent->setObjectName(QString::fromUtf8("FileContent"));

        verticalLayout_5->addWidget(FileContent);

        FilesTabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        FilesTabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_3 = new QGridLayout(tab_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        filesSelected = new QTableView(tab_5);
        filesSelected->setObjectName(QString::fromUtf8("filesSelected"));
        filesSelected->setSelectionMode(QAbstractItemView::SingleSelection);
        filesSelected->setSelectionBehavior(QAbstractItemView::SelectRows);
        filesSelected->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_3->addWidget(filesSelected, 0, 0, 1, 1);

        FilesTabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_11 = new QVBoxLayout(tab_6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        splitter_3 = new QSplitter(tab_6);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget2 = new QWidget(splitter_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        SelectedFilesLabel = new QLabel(layoutWidget2);
        SelectedFilesLabel->setObjectName(QString::fromUtf8("SelectedFilesLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(SelectedFilesLabel->sizePolicy().hasHeightForWidth());
        SelectedFilesLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(SelectedFilesLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        numLabel = new QLabel(layoutWidget2);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));

        horizontalLayout_7->addWidget(numLabel);

        numOfFilesSpin = new QSpinBox(layoutWidget2);
        numOfFilesSpin->setObjectName(QString::fromUtf8("numOfFilesSpin"));
        sizePolicy4.setHeightForWidth(numOfFilesSpin->sizePolicy().hasHeightForWidth());
        numOfFilesSpin->setSizePolicy(sizePolicy4);
        numOfFilesSpin->setMinimum(1);
        numOfFilesSpin->setValue(4);

        horizontalLayout_7->addWidget(numOfFilesSpin);

        line_4 = new QFrame(layoutWidget2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_4);

        LockUnlockAll = new QPushButton(layoutWidget2);
        LockUnlockAll->setObjectName(QString::fromUtf8("LockUnlockAll"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/document-encrypted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LockUnlockAll->setIcon(icon7);
        LockUnlockAll->setCheckable(true);
        LockUnlockAll->setFlat(true);

        horizontalLayout_7->addWidget(LockUnlockAll);

        CleanUnlocked = new QPushButton(layoutWidget2);
        CleanUnlocked->setObjectName(QString::fromUtf8("CleanUnlocked"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/clean.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CleanUnlocked->setIcon(icon8);
        CleanUnlocked->setFlat(true);

        horizontalLayout_7->addWidget(CleanUnlocked);

        removeAll = new QPushButton(layoutWidget2);
        removeAll->setObjectName(QString::fromUtf8("removeAll"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/edit-delete-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeAll->setIcon(icon9);
        removeAll->setFlat(true);

        horizontalLayout_7->addWidget(removeAll);

        RefreshSelection = new QPushButton(layoutWidget2);
        RefreshSelection->setObjectName(QString::fromUtf8("RefreshSelection"));
        sizePolicy4.setHeightForWidth(RefreshSelection->sizePolicy().hasHeightForWidth());
        RefreshSelection->setSizePolicy(sizePolicy4);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/update-document.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RefreshSelection->setIcon(icon10);

        horizontalLayout_7->addWidget(RefreshSelection);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        RandomSelectionList = new QListWidget(layoutWidget2);
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

        gridLayout_2->addWidget(RandomSelectionList, 1, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        moveUp = new QPushButton(layoutWidget2);
        moveUp->setObjectName(QString::fromUtf8("moveUp"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/go-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveUp->setIcon(icon11);
        moveUp->setFlat(true);

        verticalLayout_10->addWidget(moveUp);

        moveDown = new QPushButton(layoutWidget2);
        moveDown->setObjectName(QString::fromUtf8("moveDown"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/go-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        moveDown->setIcon(icon12);
        moveDown->setFlat(true);

        verticalLayout_10->addWidget(moveDown);

        AddRandomFiles = new QPushButton(layoutWidget2);
        AddRandomFiles->setObjectName(QString::fromUtf8("AddRandomFiles"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(AddRandomFiles->sizePolicy().hasHeightForWidth());
        AddRandomFiles->setSizePolicy(sizePolicy6);
        AddRandomFiles->setIcon(icon2);
        AddRandomFiles->setFlat(true);

        verticalLayout_10->addWidget(AddRandomFiles);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(verticalLayout_10, 1, 1, 1, 1);

        splitter_3->addWidget(layoutWidget2);
        verticalLayoutWidget = new QWidget(splitter_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        splitter_3->addWidget(verticalLayoutWidget);

        verticalLayout_11->addWidget(splitter_3);

        FilesTabWidget->addTab(tab_6, QString());

        gridLayout_17->addWidget(FilesTabWidget, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget1);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget3 = new QWidget(splitter_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ToolBar = new QWidget(layoutWidget3);
        ToolBar->setObjectName(QString::fromUtf8("ToolBar"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(ToolBar->sizePolicy().hasHeightForWidth());
        ToolBar->setSizePolicy(sizePolicy7);
        horizontalLayout_5 = new QHBoxLayout(ToolBar);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        DocPdf = new QPushButton(ToolBar);
        buttonGroup = new QButtonGroup(AddFileToEditor);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(DocPdf);
        DocPdf->setObjectName(QString::fromUtf8("DocPdf"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DocPdf->setIcon(icon13);
        DocPdf->setCheckable(true);
        DocPdf->setFlat(true);

        horizontalLayout_5->addWidget(DocPdf);

        FilePdf = new QPushButton(ToolBar);
        buttonGroup->addButton(FilePdf);
        FilePdf->setObjectName(QString::fromUtf8("FilePdf"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/pdf2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FilePdf->setIcon(icon14);
        FilePdf->setCheckable(true);
        FilePdf->setFlat(true);

        horizontalLayout_5->addWidget(FilePdf);

        line_3 = new QFrame(ToolBar);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);

        ShowPdfSide = new QPushButton(ToolBar);
        ShowPdfSide->setObjectName(QString::fromUtf8("ShowPdfSide"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/swap-panels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowPdfSide->setIcon(icon15);
        ShowPdfSide->setCheckable(true);
        ShowPdfSide->setFlat(true);

        horizontalLayout_5->addWidget(ShowPdfSide);


        verticalLayout_2->addWidget(ToolBar);

        DocumentContent = new LatexTextWidget(layoutWidget3);
        DocumentContent->setObjectName(QString::fromUtf8("DocumentContent"));

        verticalLayout_2->addWidget(DocumentContent);

        splitter_2->addWidget(layoutWidget3);
        splitter_4->addWidget(splitter_2);

        gridLayout->addWidget(splitter_4, 0, 0, 1, 1);


        retranslateUi(AddFileToEditor);
        QObject::connect(Okbutton, SIGNAL(accepted()), AddFileToEditor, SLOT(accept()));
        QObject::connect(Okbutton, SIGNAL(rejected()), AddFileToEditor, SLOT(reject()));

        FilesTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AddFileToEditor);
    } // setupUi

    void retranslateUi(QDialog *AddFileToEditor)
    {
        AddFileToEditor->setWindowTitle(QCoreApplication::translate("AddFileToEditor", "Insert file to document", nullptr));
        checkBox->setText(QCoreApplication::translate("AddFileToEditor", "Insert files from multiple databases", nullptr));
        label_2->setText(QCoreApplication::translate("AddFileToEditor", "Database source : ", nullptr));
        addButton->setText(QString());
        addEverything->setText(QString());
        removeButton->setText(QString());
        EnableSortingFiles->setText(QString());
        ClearFiltersFD->setText(QString());
        FilesTagFilter->setText(QString());
        CountLabel->setText(QString());
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_3), QCoreApplication::translate("AddFileToEditor", "File content", nullptr));
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_4), QCoreApplication::translate("AddFileToEditor", "Pdf view", nullptr));
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_5), QCoreApplication::translate("AddFileToEditor", "Files included", nullptr));
        SelectedFilesLabel->setText(QCoreApplication::translate("AddFileToEditor", "Files selected", nullptr));
        numLabel->setText(QCoreApplication::translate("AddFileToEditor", "Number of files", nullptr));
#if QT_CONFIG(tooltip)
        LockUnlockAll->setToolTip(QCoreApplication::translate("AddFileToEditor", "Lock - Unlock all files", nullptr));
#endif // QT_CONFIG(tooltip)
        LockUnlockAll->setText(QString());
#if QT_CONFIG(tooltip)
        CleanUnlocked->setToolTip(QCoreApplication::translate("AddFileToEditor", "Lock - Unlock all files", nullptr));
#endif // QT_CONFIG(tooltip)
        CleanUnlocked->setText(QString());
#if QT_CONFIG(tooltip)
        removeAll->setToolTip(QCoreApplication::translate("AddFileToEditor", "Remove unselected files", nullptr));
#endif // QT_CONFIG(tooltip)
        removeAll->setText(QString());
        RefreshSelection->setText(QCoreApplication::translate("AddFileToEditor", "Random selection", nullptr));
        moveUp->setText(QString());
        moveDown->setText(QString());
#if QT_CONFIG(tooltip)
        AddRandomFiles->setToolTip(QCoreApplication::translate("AddFileToEditor", "Add selected files to editor", nullptr));
#endif // QT_CONFIG(tooltip)
        AddRandomFiles->setText(QString());
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_6), QCoreApplication::translate("AddFileToEditor", "Random selection", nullptr));
        DocPdf->setText(QString());
        FilePdf->setText(QString());
        ShowPdfSide->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddFileToEditor: public Ui_AddFileToEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILETOEDITOR_H
