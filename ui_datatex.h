/********************************************************************************
** Form generated from reading UI file 'datatex.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATATEX_H
#define UI_DATATEX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "minisplitter.h"

QT_BEGIN_NAMESPACE

class Ui_DataTex
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QWidget *SideMenu;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *FilesDatabaseToggle;
    QPushButton *DocumentsDatabaseToggle;
    QPushButton *BibliographyDatabaseToggle;
    QPushButton *CommandsButton;
    QPushButton *ExamsButton;
    QPushButton *ParentsButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *settingsButton;
    QPushButton *ScheduleButton;
    MiniSplitter *splitter_8;
    MiniSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_15;
    QTreeWidget *OpenDatabasesTreeWidget;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QWidget *layoutWidget1;
    QGridLayout *OpenDatabasesGridLayout;
    QHBoxLayout *OpenDataActionsHorizontalLayout;
    QLabel *CurrentBaseLabel_1;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *DatabaseStructureButton;
    QPushButton *DatabaseInfoButton;
    QStackedWidget *stackedWidget_6;
    QWidget *page_13;
    QVBoxLayout *verticalLayout_8;
    QTreeView *DatabaseStructureTreeView;
    QWidget *page_14;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QComboBox *ComboCount;
    QLineEdit *FilterFilesCountEntries;
    QTableView *CountFilesTable;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_27;
    MiniSplitter *splitter_4;
    MiniSplitter *splitter_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_20;
    QHBoxLayout *horizontalLayout_23;
    QLabel *CurrentBaseLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *EnableSortingFiles;
    QPushButton *ClearFiltersFD;
    QPushButton *FilesTagFilter;
    QPushButton *ShowDescription;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget_8;
    QWidget *page_17;
    QVBoxLayout *verticalLayout_18;
    QTextBrowser *FileDescription;
    QWidget *page_18;
    QVBoxLayout *verticalLayout_19;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_20;
    QTabWidget *tabWidget;
    QWidget *MetadataTab;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_36;
    QLabel *SectionLine;
    QLabel *DateTimeEdit;
    QLabel *NameLine;
    QLabel *FieldLine;
    QLabel *ExerciseTypeLine;
    QLabel *label_46;
    QLabel *label_49;
    QLabel *FileTypeLine;
    QLabel *label_48;
    QLabel *label_54;
    QLabel *PathLine;
    QLabel *DifficultySpinBox;
    QLabel *SolvedLine;
    QLabel *DescriptionLine;
    QLabel *label_56;
    QLabel *label_50;
    QLabel *label_34;
    QLabel *label_59;
    QLabel *ChapterLine;
    QLabel *label_33;
    QLabel *label_58;
    QLabel *label_57;
    QLabel *label_60;
    QLabel *SolutionsLine;
    QWidget *BibliographyTab;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QComboBox *BibEntriesCombo;
    QPushButton *addBibEntry;
    QPushButton *removeBibEnrty;
    QPushButton *NewBibEntry_CurrentFile;
    QFrame *line;
    MiniSplitter *splitter_5;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QTableWidget *BibEntriesTable;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_20;
    QLabel *BibSourceCodeLabel;
    QPushButton *ShowBibSourceFile;
    QPushButton *ShowBibSourceEntry;
    QFrame *line_2;
    QPushButton *CopySourceCode;
    QPushButton *SaveSourceCode;
    QStackedWidget *stackedWidget_4;
    QWidget *page_8;
    QGridLayout *gridLayout_23;
    LatexTextBrowser *BibSourceCode;
    QWidget *page_9;
    QGridLayout *gridLayout_24;
    LatexTextBrowser *BibSourceCode_per_Entry;
    QWidget *ContentTab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *FileContentCommandsHorizontalLayout;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QGridLayout *gridLayout_9;
    LatexTextWidget *FileEdit;
    QWidget *page_4;
    QGridLayout *gridLayout_2;
    QWidget *FileDependenciesTab;
    QGridLayout *gridLayout_32;
    MiniSplitter *splitter_14;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *DocDepContentPreview;
    QPushButton *DocDepPdfPreview;
    QTableView *FileDependenciesTable;
    QStackedWidget *stackedWidget_7;
    QWidget *page_15;
    QGridLayout *gridLayout_33;
    LatexTextBrowser *DocDependenciesContent;
    QWidget *page_16;
    QGridLayout *gridLayout_35;
    QWidget *page_2;
    QGridLayout *gridLayout_29;
    MiniSplitter *splitter_6;
    MiniSplitter *splitter_2;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_31;
    QHBoxLayout *horizontalLayout_17;
    QLabel *CurrentDocBaseLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *EnableSortingDocs;
    QPushButton *DocumentsTagFilter;
    QPushButton *ClearFiltersDD;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_14;
    QTextBrowser *DocDescription;
    QTabWidget *tabWidget_2;
    QWidget *FilesInDocumentTab;
    QGridLayout *gridLayout_19;
    MiniSplitter *splitter_9;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_18;
    QTableView *TexFileTable;
    QTabWidget *DatabaseFilesTabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    LatexTextBrowser *FileContent;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QWidget *MetadataTab_4;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_11;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_12;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_1;
    QGridLayout *gridLayout_38;
    QLabel *label_6;
    QLabel *BasicFolder;
    QLabel *DocumentNameLine;
    QLabel *label_2;
    QLabel *label_13;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *DocumentType;
    QLabel *SubFolder;
    QLabel *SubsubFolder;
    QLabel *DocumentPathLine;
    QLabel *DocumentDateTimeEdit;
    QLabel *label_3;
    QLabel *DocumentTitleLine;
    QWidget *BibliographyTab_4;
    QGridLayout *gridLayout_30;
    MiniSplitter *splitter_7;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_22;
    QComboBox *DocBibEntriesCombo;
    QPushButton *addDocBibEntry;
    QPushButton *removeDocBibEnrty;
    QPushButton *NewBibEntry_CurrentDocument;
    QFrame *line_3;
    QLabel *label_10;
    QTreeWidget *BibPerFileTree;
    QStackedWidget *stackedWidget_5;
    QWidget *page_10;
    QGridLayout *gridLayout_26;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QPushButton *SaveDocBibContent;
    LatexTextBrowser *DocBibSourceCode;
    QWidget *page_11;
    QGridLayout *gridLayout_28;
    QWidget *page_12;
    QWidget *ContentTab_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_45;
    QStackedWidget *stackedWidget_3;
    QWidget *page_5;
    QGridLayout *gridLayout_10;
    LatexTextWidget *DocumentContent;
    QWidget *page_6;
    QGridLayout *gridLayout_13;
    QWidget *page_7;
    QGridLayout *gridLayout_34;
    MiniSplitter *splitter_10;
    MiniSplitter *splitter_11;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_21;
    QHBoxLayout *horizontalLayout_24;
    QLabel *CurrentBaseBibLabel;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *EnableSortingBib;
    QPushButton *ClearFiltersB;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_22;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTabWidget *tabWidget_3;
    QWidget *MetadataTab_2;
    QVBoxLayout *verticalLayout_14;
    MiniSplitter *splitter_12;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_21;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_20;
    QPushButton *CopyBibSourceCode;
    LatexTextBrowser *SourceCodeText;
    QWidget *ContentTab_2;
    QGridLayout *gridLayout_25;
    MiniSplitter *splitter_13;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_4;
    QLabel *CitationsLabel;
    QTableView *DatabaseFiles_per_BibEntry;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *CitationsLabel_2;
    QWidget *page_19;
    QGridLayout *gridLayout_41;
    MiniSplitter *splitter_15;
    MiniSplitter *splitter_16;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_37;
    QHBoxLayout *horizontalLayout_25;
    QLabel *CommandLabel;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *EnableSortingCommands;
    QPushButton *ClearFiltersCom;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_39;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QTabWidget *tabWidget_4;
    QWidget *MetadataTab_3;
    QVBoxLayout *verticalLayout_21;
    MiniSplitter *splitter_17;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_23;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_23;
    QVBoxLayout *verticalLayout_24;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_24;
    QPushButton *CopyBibSourceCode_2;
    LatexTextBrowser *SourceCodeText_2;
    QWidget *ContentTab_3;
    QGridLayout *gridLayout_40;
    MiniSplitter *splitter_18;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_26;
    QLabel *CommandLabel_2;
    QTableView *DatabaseFiles_per_BibEntry_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_27;
    QLabel *CitationsLabel_4;
    QWidget *page_20;
    QGridLayout *gridLayout_45;
    MiniSplitter *splitter_19;
    MiniSplitter *splitter_20;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_42;
    QHBoxLayout *horizontalLayout_26;
    QLabel *CommandLabel_3;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *EnableSortingCommands_2;
    QPushButton *ClearFiltersCom_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_43;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QTabWidget *tabWidget_5;
    QWidget *MetadataTab_5;
    QVBoxLayout *verticalLayout_28;
    MiniSplitter *splitter_21;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_29;
    QLabel *label_25;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_31;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_32;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_26;
    QPushButton *CopyBibSourceCode_3;
    LatexTextBrowser *SourceCodeText_3;
    QWidget *ContentTab_5;
    QGridLayout *gridLayout_44;
    MiniSplitter *splitter_22;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_33;
    QLabel *CommandLabel_4;
    QTableView *DatabaseFiles_per_BibEntry_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_34;
    QLabel *CitationsLabel_5;
    QWidget *page_21;
    QGridLayout *gridLayout_49;
    MiniSplitter *splitter_23;
    MiniSplitter *splitter_24;
    QWidget *layoutWidget_12;
    QGridLayout *gridLayout_46;
    QHBoxLayout *horizontalLayout_28;
    QLabel *CommandLabel_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *EnableSortingCommands_3;
    QPushButton *ClearFiltersCom_3;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_47;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QTabWidget *tabWidget_6;
    QWidget *MetadataTab_6;
    QVBoxLayout *verticalLayout_35;
    MiniSplitter *splitter_25;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_27;
    QScrollArea *scrollArea_11;
    QWidget *scrollAreaWidgetContents_11;
    QVBoxLayout *verticalLayout_37;
    QVBoxLayout *verticalLayout_38;
    QWidget *layoutWidget_14;
    QVBoxLayout *verticalLayout_39;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_28;
    QPushButton *CopyBibSourceCode_4;
    LatexTextBrowser *SourceCodeText_4;
    QWidget *ContentTab_6;
    QGridLayout *gridLayout_48;
    MiniSplitter *splitter_26;
    QWidget *layoutWidget_15;
    QVBoxLayout *verticalLayout_40;
    QLabel *CommandLabel_6;
    QTableView *DatabaseFiles_per_BibEntry_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_41;
    QLabel *CitationsLabel_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *MenuButtons;

    void setupUi(QMainWindow *DataTex)
    {
        if (DataTex->objectName().isEmpty())
            DataTex->setObjectName(QString::fromUtf8("DataTex"));
        DataTex->resize(1322, 650);
        centralwidget = new QWidget(DataTex);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        SideMenu = new QWidget(centralwidget);
        SideMenu->setObjectName(QString::fromUtf8("SideMenu"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SideMenu->sizePolicy().hasHeightForWidth());
        SideMenu->setSizePolicy(sizePolicy);
        SideMenu->setMinimumSize(QSize(0, 45));
        SideMenu->setStyleSheet(QString::fromUtf8("#SideMenu{\n"
"	background-color: #2c323a;\n"
"}\n"
"\n"
"#SideMenu QPushButton{\n"
"	text-align: left;\n"
"	padding: 10px 10px;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	background-color: tranparent;\n"
"	background: none;\n"
"	margin:0;\n"
"	border-top: 5px solid #2c323a;\n"
"	font: 500 14pt \"KerkisSans\";\n"
"}\n"
"\n"
"#SideMenu QPushButton::checked{\n"
"	background-color: #424b57;\n"
"	border-top: 5px solid #fff;\n"
"}\n"
"\n"
"#SideMenu QPushButton::hover{\n"
"	background-color: #424b57\n"
";\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(SideMenu);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        FilesDatabaseToggle = new QPushButton(SideMenu);
        MenuButtons = new QButtonGroup(DataTex);
        MenuButtons->setObjectName(QString::fromUtf8("MenuButtons"));
        MenuButtons->addButton(FilesDatabaseToggle);
        FilesDatabaseToggle->setObjectName(QString::fromUtf8("FilesDatabaseToggle"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(FilesDatabaseToggle->sizePolicy().hasHeightForWidth());
        FilesDatabaseToggle->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/SideBar/file-alt.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FilesDatabaseToggle->setIcon(icon);
        FilesDatabaseToggle->setCheckable(true);

        horizontalLayout_2->addWidget(FilesDatabaseToggle);

        DocumentsDatabaseToggle = new QPushButton(SideMenu);
        MenuButtons->addButton(DocumentsDatabaseToggle);
        DocumentsDatabaseToggle->setObjectName(QString::fromUtf8("DocumentsDatabaseToggle"));
        sizePolicy1.setHeightForWidth(DocumentsDatabaseToggle->sizePolicy().hasHeightForWidth());
        DocumentsDatabaseToggle->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/SideBar/file-pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DocumentsDatabaseToggle->setIcon(icon1);
        DocumentsDatabaseToggle->setCheckable(true);

        horizontalLayout_2->addWidget(DocumentsDatabaseToggle);

        BibliographyDatabaseToggle = new QPushButton(SideMenu);
        MenuButtons->addButton(BibliographyDatabaseToggle);
        BibliographyDatabaseToggle->setObjectName(QString::fromUtf8("BibliographyDatabaseToggle"));
        sizePolicy1.setHeightForWidth(BibliographyDatabaseToggle->sizePolicy().hasHeightForWidth());
        BibliographyDatabaseToggle->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/SideBar/book.svg"), QSize(), QIcon::Normal, QIcon::Off);
        BibliographyDatabaseToggle->setIcon(icon2);
        BibliographyDatabaseToggle->setCheckable(true);

        horizontalLayout_2->addWidget(BibliographyDatabaseToggle);

        CommandsButton = new QPushButton(SideMenu);
        MenuButtons->addButton(CommandsButton);
        CommandsButton->setObjectName(QString::fromUtf8("CommandsButton"));
        sizePolicy1.setHeightForWidth(CommandsButton->sizePolicy().hasHeightForWidth());
        CommandsButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/SideBar/code.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CommandsButton->setIcon(icon3);
        CommandsButton->setIconSize(QSize(20, 16));
        CommandsButton->setCheckable(true);

        horizontalLayout_2->addWidget(CommandsButton);

        ExamsButton = new QPushButton(SideMenu);
        MenuButtons->addButton(ExamsButton);
        ExamsButton->setObjectName(QString::fromUtf8("ExamsButton"));
        sizePolicy1.setHeightForWidth(ExamsButton->sizePolicy().hasHeightForWidth());
        ExamsButton->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/SideBar/packages.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ExamsButton->setIcon(icon4);
        ExamsButton->setIconSize(QSize(20, 20));
        ExamsButton->setCheckable(true);

        horizontalLayout_2->addWidget(ExamsButton);

        ParentsButton = new QPushButton(SideMenu);
        MenuButtons->addButton(ParentsButton);
        ParentsButton->setObjectName(QString::fromUtf8("ParentsButton"));
        sizePolicy1.setHeightForWidth(ParentsButton->sizePolicy().hasHeightForWidth());
        ParentsButton->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/SideBar/chart-area.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ParentsButton->setIcon(icon5);
        ParentsButton->setCheckable(true);

        horizontalLayout_2->addWidget(ParentsButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        settingsButton = new QPushButton(SideMenu);
        MenuButtons->addButton(settingsButton);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        sizePolicy1.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy1);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/cog.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon6);
        settingsButton->setCheckable(true);

        horizontalLayout_2->addWidget(settingsButton);

        ScheduleButton = new QPushButton(SideMenu);
        MenuButtons->addButton(ScheduleButton);
        ScheduleButton->setObjectName(QString::fromUtf8("ScheduleButton"));
        sizePolicy1.setHeightForWidth(ScheduleButton->sizePolicy().hasHeightForWidth());
        ScheduleButton->setSizePolicy(sizePolicy1);
        ScheduleButton->setCheckable(true);

        horizontalLayout_2->addWidget(ScheduleButton);


        gridLayout_6->addWidget(SideMenu, 0, 1, 1, 1);

        splitter_8 = new MiniSplitter(centralwidget);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter_8->sizePolicy().hasHeightForWidth());
        splitter_8->setSizePolicy(sizePolicy2);
        splitter_8->setOrientation(Qt::Horizontal);
        splitter = new MiniSplitter(splitter_8);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_15 = new QGridLayout(layoutWidget);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(-1, -1, -1, 0);
        OpenDatabasesTreeWidget = new QTreeWidget(layoutWidget);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/texfile.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font;
        font.setBold(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(OpenDatabasesTreeWidget);
        __qtreewidgetitem->setFont(0, font);
        __qtreewidgetitem->setIcon(0, icon7);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(OpenDatabasesTreeWidget);
        __qtreewidgetitem1->setFont(0, font);
        __qtreewidgetitem1->setIcon(0, icon8);
        OpenDatabasesTreeWidget->setObjectName(QString::fromUtf8("OpenDatabasesTreeWidget"));
        OpenDatabasesTreeWidget->setAnimated(true);

        gridLayout_15->addWidget(OpenDatabasesTreeWidget, 1, 0, 1, 1);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(2);
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_47->addWidget(label_12);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/document-new-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon9);
        pushButton_2->setFlat(true);

        horizontalLayout_47->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/folder-new-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon10);
        pushButton->setFlat(true);

        horizontalLayout_47->addWidget(pushButton);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/edit-delete-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon11);
        pushButton_10->setFlat(true);

        horizontalLayout_47->addWidget(pushButton_10);


        gridLayout_15->addLayout(horizontalLayout_47, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        OpenDatabasesGridLayout = new QGridLayout(layoutWidget1);
        OpenDatabasesGridLayout->setSpacing(0);
        OpenDatabasesGridLayout->setObjectName(QString::fromUtf8("OpenDatabasesGridLayout"));
        OpenDataActionsHorizontalLayout = new QHBoxLayout();
        OpenDataActionsHorizontalLayout->setSpacing(2);
        OpenDataActionsHorizontalLayout->setObjectName(QString::fromUtf8("OpenDataActionsHorizontalLayout"));
        CurrentBaseLabel_1 = new QLabel(layoutWidget1);
        CurrentBaseLabel_1->setObjectName(QString::fromUtf8("CurrentBaseLabel_1"));
        CurrentBaseLabel_1->setFont(font);
        CurrentBaseLabel_1->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        OpenDataActionsHorizontalLayout->addWidget(CurrentBaseLabel_1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        OpenDataActionsHorizontalLayout->addItem(horizontalSpacer_5);

        DatabaseStructureButton = new QPushButton(layoutWidget1);
        DatabaseStructureButton->setObjectName(QString::fromUtf8("DatabaseStructureButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/structure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DatabaseStructureButton->setIcon(icon12);
        DatabaseStructureButton->setFlat(true);

        OpenDataActionsHorizontalLayout->addWidget(DatabaseStructureButton);

        DatabaseInfoButton = new QPushButton(layoutWidget1);
        DatabaseInfoButton->setObjectName(QString::fromUtf8("DatabaseInfoButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/view-statistics.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DatabaseInfoButton->setIcon(icon13);
        DatabaseInfoButton->setFlat(true);

        OpenDataActionsHorizontalLayout->addWidget(DatabaseInfoButton);


        OpenDatabasesGridLayout->addLayout(OpenDataActionsHorizontalLayout, 0, 0, 1, 1);

        stackedWidget_6 = new QStackedWidget(layoutWidget1);
        stackedWidget_6->setObjectName(QString::fromUtf8("stackedWidget_6"));
        page_13 = new QWidget();
        page_13->setObjectName(QString::fromUtf8("page_13"));
        verticalLayout_8 = new QVBoxLayout(page_13);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        DatabaseStructureTreeView = new QTreeView(page_13);
        DatabaseStructureTreeView->setObjectName(QString::fromUtf8("DatabaseStructureTreeView"));
        DatabaseStructureTreeView->setAnimated(true);

        verticalLayout_8->addWidget(DatabaseStructureTreeView);

        stackedWidget_6->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QString::fromUtf8("page_14"));
        verticalLayout_16 = new QVBoxLayout(page_14);
        verticalLayout_16->setSpacing(2);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(page_14);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_8);

        ComboCount = new QComboBox(page_14);
        ComboCount->setObjectName(QString::fromUtf8("ComboCount"));

        horizontalLayout_4->addWidget(ComboCount);


        verticalLayout_16->addLayout(horizontalLayout_4);

        FilterFilesCountEntries = new QLineEdit(page_14);
        FilterFilesCountEntries->setObjectName(QString::fromUtf8("FilterFilesCountEntries"));
        FilterFilesCountEntries->setReadOnly(false);

        verticalLayout_16->addWidget(FilterFilesCountEntries);

        CountFilesTable = new QTableView(page_14);
        CountFilesTable->setObjectName(QString::fromUtf8("CountFilesTable"));

        verticalLayout_16->addWidget(CountFilesTable);

        stackedWidget_6->addWidget(page_14);

        OpenDatabasesGridLayout->addWidget(stackedWidget_6, 2, 0, 1, 1);

        splitter->addWidget(layoutWidget1);
        splitter_8->addWidget(splitter);
        stackedWidget = new QStackedWidget(splitter_8);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_27 = new QGridLayout(page);
        gridLayout_27->setSpacing(0);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new MiniSplitter(page);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_3 = new MiniSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        layoutWidget2 = new QWidget(splitter_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        gridLayout_20 = new QGridLayout(layoutWidget2);
        gridLayout_20->setSpacing(0);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(0);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        CurrentBaseLabel = new QLabel(layoutWidget2);
        CurrentBaseLabel->setObjectName(QString::fromUtf8("CurrentBaseLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setBold(true);
        CurrentBaseLabel->setFont(font1);

        horizontalLayout_23->addWidget(CurrentBaseLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_2);

        EnableSortingFiles = new QPushButton(layoutWidget2);
        EnableSortingFiles->setObjectName(QString::fromUtf8("EnableSortingFiles"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/sort-presence.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EnableSortingFiles->setIcon(icon14);
        EnableSortingFiles->setCheckable(true);
        EnableSortingFiles->setFlat(true);

        horizontalLayout_23->addWidget(EnableSortingFiles);

        ClearFiltersFD = new QPushButton(layoutWidget2);
        ClearFiltersFD->setObjectName(QString::fromUtf8("ClearFiltersFD"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/kt-remove-filters.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ClearFiltersFD->setIcon(icon15);
        ClearFiltersFD->setFlat(true);

        horizontalLayout_23->addWidget(ClearFiltersFD);

        FilesTagFilter = new QPushButton(layoutWidget2);
        FilesTagFilter->setObjectName(QString::fromUtf8("FilesTagFilter"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/tag.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FilesTagFilter->setIcon(icon16);
        FilesTagFilter->setCheckable(true);
        FilesTagFilter->setFlat(true);

        horizontalLayout_23->addWidget(FilesTagFilter);

        ShowDescription = new QPushButton(layoutWidget2);
        ShowDescription->setObjectName(QString::fromUtf8("ShowDescription"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/help-about.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowDescription->setIcon(icon17);
        ShowDescription->setCheckable(true);
        ShowDescription->setFlat(true);

        horizontalLayout_23->addWidget(ShowDescription);


        gridLayout_20->addLayout(horizontalLayout_23, 0, 0, 1, 5);

        splitter_3->addWidget(layoutWidget2);
        gridLayoutWidget = new QWidget(splitter_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget_8 = new QStackedWidget(gridLayoutWidget);
        stackedWidget_8->setObjectName(QString::fromUtf8("stackedWidget_8"));
        page_17 = new QWidget();
        page_17->setObjectName(QString::fromUtf8("page_17"));
        verticalLayout_18 = new QVBoxLayout(page_17);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        FileDescription = new QTextBrowser(page_17);
        FileDescription->setObjectName(QString::fromUtf8("FileDescription"));
        FileDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 235, 235);"));

        verticalLayout_18->addWidget(FileDescription);

        stackedWidget_8->addWidget(page_17);
        page_18 = new QWidget();
        page_18->setObjectName(QString::fromUtf8("page_18"));
        verticalLayout_19 = new QVBoxLayout(page_18);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(page_18);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 396, 483));
        verticalLayout_20 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_19->addWidget(scrollArea_5);

        stackedWidget_8->addWidget(page_18);

        gridLayout->addWidget(stackedWidget_8, 0, 0, 1, 1);

        splitter_3->addWidget(gridLayoutWidget);
        splitter_4->addWidget(splitter_3);
        tabWidget = new QTabWidget(splitter_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        MetadataTab = new QWidget();
        MetadataTab->setObjectName(QString::fromUtf8("MetadataTab"));
        gridLayout_16 = new QGridLayout(MetadataTab);
        gridLayout_16->setSpacing(1);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(1, 1, 1, 1);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea = new QScrollArea(MetadataTab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 498, 524));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_3->addLayout(verticalLayout_3, 1, 0, 1, 1);

        gridLayout_36 = new QGridLayout();
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        gridLayout_36->setHorizontalSpacing(5);
        SectionLine = new QLabel(scrollAreaWidgetContents);
        SectionLine->setObjectName(QString::fromUtf8("SectionLine"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SectionLine->sizePolicy().hasHeightForWidth());
        SectionLine->setSizePolicy(sizePolicy4);
        SectionLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SectionLine->setWordWrap(true);

        gridLayout_36->addWidget(SectionLine, 3, 1, 1, 1);

        DateTimeEdit = new QLabel(scrollAreaWidgetContents);
        DateTimeEdit->setObjectName(QString::fromUtf8("DateTimeEdit"));
        sizePolicy4.setHeightForWidth(DateTimeEdit->sizePolicy().hasHeightForWidth());
        DateTimeEdit->setSizePolicy(sizePolicy4);
        DateTimeEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DateTimeEdit->setWordWrap(true);

        gridLayout_36->addWidget(DateTimeEdit, 8, 1, 1, 1);

        NameLine = new QLabel(scrollAreaWidgetContents);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));
        sizePolicy4.setHeightForWidth(NameLine->sizePolicy().hasHeightForWidth());
        NameLine->setSizePolicy(sizePolicy4);
        NameLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        NameLine->setWordWrap(true);

        gridLayout_36->addWidget(NameLine, 0, 1, 1, 1);

        FieldLine = new QLabel(scrollAreaWidgetContents);
        FieldLine->setObjectName(QString::fromUtf8("FieldLine"));
        sizePolicy4.setHeightForWidth(FieldLine->sizePolicy().hasHeightForWidth());
        FieldLine->setSizePolicy(sizePolicy4);
        FieldLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        FieldLine->setWordWrap(true);

        gridLayout_36->addWidget(FieldLine, 1, 1, 1, 1);

        ExerciseTypeLine = new QLabel(scrollAreaWidgetContents);
        ExerciseTypeLine->setObjectName(QString::fromUtf8("ExerciseTypeLine"));
        sizePolicy4.setHeightForWidth(ExerciseTypeLine->sizePolicy().hasHeightForWidth());
        ExerciseTypeLine->setSizePolicy(sizePolicy4);
        ExerciseTypeLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        ExerciseTypeLine->setWordWrap(true);

        gridLayout_36->addWidget(ExerciseTypeLine, 4, 1, 1, 1);

        label_46 = new QLabel(scrollAreaWidgetContents);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setFont(font1);
        label_46->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_46, 5, 0, 1, 1);

        label_49 = new QLabel(scrollAreaWidgetContents);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setFont(font1);
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_49, 2, 0, 1, 1);

        FileTypeLine = new QLabel(scrollAreaWidgetContents);
        FileTypeLine->setObjectName(QString::fromUtf8("FileTypeLine"));
        sizePolicy4.setHeightForWidth(FileTypeLine->sizePolicy().hasHeightForWidth());
        FileTypeLine->setSizePolicy(sizePolicy4);
        FileTypeLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        FileTypeLine->setWordWrap(true);

        gridLayout_36->addWidget(FileTypeLine, 5, 1, 1, 1);

        label_48 = new QLabel(scrollAreaWidgetContents);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setFont(font1);
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_48, 3, 0, 1, 1);

        label_54 = new QLabel(scrollAreaWidgetContents);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setFont(font1);
        label_54->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_54, 6, 0, 1, 1);

        PathLine = new QLabel(scrollAreaWidgetContents);
        PathLine->setObjectName(QString::fromUtf8("PathLine"));
        sizePolicy4.setHeightForWidth(PathLine->sizePolicy().hasHeightForWidth());
        PathLine->setSizePolicy(sizePolicy4);
        PathLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        PathLine->setWordWrap(true);

        gridLayout_36->addWidget(PathLine, 6, 1, 1, 1);

        DifficultySpinBox = new QLabel(scrollAreaWidgetContents);
        DifficultySpinBox->setObjectName(QString::fromUtf8("DifficultySpinBox"));
        sizePolicy4.setHeightForWidth(DifficultySpinBox->sizePolicy().hasHeightForWidth());
        DifficultySpinBox->setSizePolicy(sizePolicy4);
        DifficultySpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DifficultySpinBox->setWordWrap(true);

        gridLayout_36->addWidget(DifficultySpinBox, 7, 1, 1, 1);

        SolvedLine = new QLabel(scrollAreaWidgetContents);
        SolvedLine->setObjectName(QString::fromUtf8("SolvedLine"));
        sizePolicy4.setHeightForWidth(SolvedLine->sizePolicy().hasHeightForWidth());
        SolvedLine->setSizePolicy(sizePolicy4);
        SolvedLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SolvedLine->setWordWrap(true);

        gridLayout_36->addWidget(SolvedLine, 9, 1, 1, 1);

        DescriptionLine = new QLabel(scrollAreaWidgetContents);
        DescriptionLine->setObjectName(QString::fromUtf8("DescriptionLine"));
        sizePolicy4.setHeightForWidth(DescriptionLine->sizePolicy().hasHeightForWidth());
        DescriptionLine->setSizePolicy(sizePolicy4);
        DescriptionLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DescriptionLine->setWordWrap(true);

        gridLayout_36->addWidget(DescriptionLine, 10, 1, 1, 1);

        label_56 = new QLabel(scrollAreaWidgetContents);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setFont(font1);
        label_56->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_56, 7, 0, 1, 1);

        label_50 = new QLabel(scrollAreaWidgetContents);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setFont(font1);
        label_50->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_50, 4, 0, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font1);
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_34, 1, 0, 1, 1);

        label_59 = new QLabel(scrollAreaWidgetContents);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setFont(font1);
        label_59->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_59, 10, 0, 1, 1);

        ChapterLine = new QLabel(scrollAreaWidgetContents);
        ChapterLine->setObjectName(QString::fromUtf8("ChapterLine"));
        sizePolicy4.setHeightForWidth(ChapterLine->sizePolicy().hasHeightForWidth());
        ChapterLine->setSizePolicy(sizePolicy4);
        ChapterLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        ChapterLine->setWordWrap(true);

        gridLayout_36->addWidget(ChapterLine, 2, 1, 1, 1);

        label_33 = new QLabel(scrollAreaWidgetContents);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_33, 0, 0, 1, 1);

        label_58 = new QLabel(scrollAreaWidgetContents);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setFont(font1);
        label_58->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_58, 9, 0, 1, 1);

        label_57 = new QLabel(scrollAreaWidgetContents);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setFont(font1);
        label_57->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_57, 8, 0, 1, 1);

        label_60 = new QLabel(scrollAreaWidgetContents);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setFont(font1);
        label_60->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_36->addWidget(label_60, 11, 0, 1, 1);

        SolutionsLine = new QLabel(scrollAreaWidgetContents);
        SolutionsLine->setObjectName(QString::fromUtf8("SolutionsLine"));
        sizePolicy4.setHeightForWidth(SolutionsLine->sizePolicy().hasHeightForWidth());
        SolutionsLine->setSizePolicy(sizePolicy4);
        SolutionsLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SolutionsLine->setWordWrap(true);

        gridLayout_36->addWidget(SolutionsLine, 11, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_36, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 1, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(MetadataTab, QString());
        BibliographyTab = new QWidget();
        BibliographyTab->setObjectName(QString::fromUtf8("BibliographyTab"));
        verticalLayout_15 = new QVBoxLayout(BibliographyTab);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(BibliographyTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        BibEntriesCombo = new QComboBox(BibliographyTab);
        BibEntriesCombo->setObjectName(QString::fromUtf8("BibEntriesCombo"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(BibEntriesCombo->sizePolicy().hasHeightForWidth());
        BibEntriesCombo->setSizePolicy(sizePolicy5);
        BibEntriesCombo->setEditable(false);

        horizontalLayout_6->addWidget(BibEntriesCombo);

        addBibEntry = new QPushButton(BibliographyTab);
        addBibEntry->setObjectName(QString::fromUtf8("addBibEntry"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addBibEntry->setIcon(icon18);
        addBibEntry->setFlat(true);

        horizontalLayout_6->addWidget(addBibEntry);

        removeBibEnrty = new QPushButton(BibliographyTab);
        removeBibEnrty->setObjectName(QString::fromUtf8("removeBibEnrty"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeBibEnrty->setIcon(icon19);
        removeBibEnrty->setFlat(true);

        horizontalLayout_6->addWidget(removeBibEnrty);

        NewBibEntry_CurrentFile = new QPushButton(BibliographyTab);
        NewBibEntry_CurrentFile->setObjectName(QString::fromUtf8("NewBibEntry_CurrentFile"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/bib-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        NewBibEntry_CurrentFile->setIcon(icon20);
        NewBibEntry_CurrentFile->setFlat(true);

        horizontalLayout_6->addWidget(NewBibEntry_CurrentFile);


        verticalLayout_15->addLayout(horizontalLayout_6);

        line = new QFrame(BibliographyTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line);

        splitter_5 = new MiniSplitter(BibliographyTab);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        layoutWidget3 = new QWidget(splitter_5);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        BibEntriesTable = new QTableWidget(layoutWidget3);
        BibEntriesTable->setObjectName(QString::fromUtf8("BibEntriesTable"));
        BibEntriesTable->setAlternatingRowColors(true);
        BibEntriesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        BibEntriesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        BibEntriesTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_2->addWidget(BibEntriesTable);

        splitter_5->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter_5);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        verticalLayout_7 = new QVBoxLayout(layoutWidget4);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(0);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        BibSourceCodeLabel = new QLabel(layoutWidget4);
        BibSourceCodeLabel->setObjectName(QString::fromUtf8("BibSourceCodeLabel"));
        BibSourceCodeLabel->setWordWrap(true);

        horizontalLayout_20->addWidget(BibSourceCodeLabel);

        ShowBibSourceFile = new QPushButton(layoutWidget4);
        ShowBibSourceFile->setObjectName(QString::fromUtf8("ShowBibSourceFile"));
        sizePolicy1.setHeightForWidth(ShowBibSourceFile->sizePolicy().hasHeightForWidth());
        ShowBibSourceFile->setSizePolicy(sizePolicy1);
        ShowBibSourceFile->setIcon(icon7);
        ShowBibSourceFile->setFlat(true);

        horizontalLayout_20->addWidget(ShowBibSourceFile);

        ShowBibSourceEntry = new QPushButton(layoutWidget4);
        ShowBibSourceEntry->setObjectName(QString::fromUtf8("ShowBibSourceEntry"));
        sizePolicy1.setHeightForWidth(ShowBibSourceEntry->sizePolicy().hasHeightForWidth());
        ShowBibSourceEntry->setSizePolicy(sizePolicy1);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/address-book-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowBibSourceEntry->setIcon(icon21);
        ShowBibSourceEntry->setFlat(true);

        horizontalLayout_20->addWidget(ShowBibSourceEntry);

        line_2 = new QFrame(layoutWidget4);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_20->addWidget(line_2);

        CopySourceCode = new QPushButton(layoutWidget4);
        CopySourceCode->setObjectName(QString::fromUtf8("CopySourceCode"));
        sizePolicy1.setHeightForWidth(CopySourceCode->sizePolicy().hasHeightForWidth());
        CopySourceCode->setSizePolicy(sizePolicy1);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/edit-copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CopySourceCode->setIcon(icon22);
        CopySourceCode->setFlat(true);

        horizontalLayout_20->addWidget(CopySourceCode);

        SaveSourceCode = new QPushButton(layoutWidget4);
        SaveSourceCode->setObjectName(QString::fromUtf8("SaveSourceCode"));
        sizePolicy1.setHeightForWidth(SaveSourceCode->sizePolicy().hasHeightForWidth());
        SaveSourceCode->setSizePolicy(sizePolicy1);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SaveSourceCode->setIcon(icon23);
        SaveSourceCode->setFlat(true);

        horizontalLayout_20->addWidget(SaveSourceCode);


        verticalLayout_7->addLayout(horizontalLayout_20);

        stackedWidget_4 = new QStackedWidget(layoutWidget4);
        stackedWidget_4->setObjectName(QString::fromUtf8("stackedWidget_4"));
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        gridLayout_23 = new QGridLayout(page_8);
        gridLayout_23->setSpacing(0);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(2, 2, 2, 2);
        BibSourceCode = new LatexTextBrowser(page_8);
        BibSourceCode->setObjectName(QString::fromUtf8("BibSourceCode"));

        gridLayout_23->addWidget(BibSourceCode, 0, 0, 1, 1);

        stackedWidget_4->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        gridLayout_24 = new QGridLayout(page_9);
        gridLayout_24->setSpacing(0);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        BibSourceCode_per_Entry = new LatexTextBrowser(page_9);
        BibSourceCode_per_Entry->setObjectName(QString::fromUtf8("BibSourceCode_per_Entry"));

        gridLayout_24->addWidget(BibSourceCode_per_Entry, 0, 0, 1, 1);

        stackedWidget_4->addWidget(page_9);

        verticalLayout_7->addWidget(stackedWidget_4);

        splitter_5->addWidget(layoutWidget4);

        verticalLayout_15->addWidget(splitter_5);

        tabWidget->addTab(BibliographyTab, QString());
        ContentTab = new QWidget();
        ContentTab->setObjectName(QString::fromUtf8("ContentTab"));
        verticalLayout_6 = new QVBoxLayout(ContentTab);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        FileContentCommandsHorizontalLayout = new QHBoxLayout();
        FileContentCommandsHorizontalLayout->setSpacing(0);
        FileContentCommandsHorizontalLayout->setObjectName(QString::fromUtf8("FileContentCommandsHorizontalLayout"));

        verticalLayout_6->addLayout(FileContentCommandsHorizontalLayout);

        stackedWidget_2 = new QStackedWidget(ContentTab);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_9 = new QGridLayout(page_3);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        FileEdit = new LatexTextWidget(page_3);
        FileEdit->setObjectName(QString::fromUtf8("FileEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(FileEdit->sizePolicy().hasHeightForWidth());
        FileEdit->setSizePolicy(sizePolicy6);

        gridLayout_9->addWidget(FileEdit, 0, 0, 1, 1);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_2 = new QGridLayout(page_4);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget_2->addWidget(page_4);

        verticalLayout_6->addWidget(stackedWidget_2);

        tabWidget->addTab(ContentTab, QString());
        FileDependenciesTab = new QWidget();
        FileDependenciesTab->setObjectName(QString::fromUtf8("FileDependenciesTab"));
        gridLayout_32 = new QGridLayout(FileDependenciesTab);
        gridLayout_32->setSpacing(0);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        gridLayout_32->setContentsMargins(1, 1, 1, 1);
        splitter_14 = new MiniSplitter(FileDependenciesTab);
        splitter_14->setObjectName(QString::fromUtf8("splitter_14"));
        splitter_14->setOrientation(Qt::Vertical);
        layoutWidget5 = new QWidget(splitter_14);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        verticalLayout_17 = new QVBoxLayout(layoutWidget5);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        DocDepContentPreview = new QPushButton(layoutWidget5);
        DocDepContentPreview->setObjectName(QString::fromUtf8("DocDepContentPreview"));
        DocDepContentPreview->setIcon(icon7);
        DocDepContentPreview->setFlat(true);

        horizontalLayout->addWidget(DocDepContentPreview);

        DocDepPdfPreview = new QPushButton(layoutWidget5);
        DocDepPdfPreview->setObjectName(QString::fromUtf8("DocDepPdfPreview"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/pdf2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DocDepPdfPreview->setIcon(icon24);
        DocDepPdfPreview->setFlat(true);

        horizontalLayout->addWidget(DocDepPdfPreview);


        verticalLayout_17->addLayout(horizontalLayout);

        FileDependenciesTable = new QTableView(layoutWidget5);
        FileDependenciesTable->setObjectName(QString::fromUtf8("FileDependenciesTable"));
        FileDependenciesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        FileDependenciesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        FileDependenciesTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_17->addWidget(FileDependenciesTable);

        splitter_14->addWidget(layoutWidget5);
        stackedWidget_7 = new QStackedWidget(splitter_14);
        stackedWidget_7->setObjectName(QString::fromUtf8("stackedWidget_7"));
        page_15 = new QWidget();
        page_15->setObjectName(QString::fromUtf8("page_15"));
        gridLayout_33 = new QGridLayout(page_15);
        gridLayout_33->setSpacing(0);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        DocDependenciesContent = new LatexTextBrowser(page_15);
        DocDependenciesContent->setObjectName(QString::fromUtf8("DocDependenciesContent"));

        gridLayout_33->addWidget(DocDependenciesContent, 0, 0, 1, 1);

        stackedWidget_7->addWidget(page_15);
        page_16 = new QWidget();
        page_16->setObjectName(QString::fromUtf8("page_16"));
        gridLayout_35 = new QGridLayout(page_16);
        gridLayout_35->setSpacing(0);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        stackedWidget_7->addWidget(page_16);
        splitter_14->addWidget(stackedWidget_7);

        gridLayout_32->addWidget(splitter_14, 0, 0, 1, 1);

        tabWidget->addTab(FileDependenciesTab, QString());
        splitter_4->addWidget(tabWidget);

        gridLayout_27->addWidget(splitter_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_29 = new QGridLayout(page_2);
        gridLayout_29->setSpacing(0);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_29->setContentsMargins(0, 0, 0, 0);
        splitter_6 = new MiniSplitter(page_2);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        splitter_2 = new MiniSplitter(splitter_6);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget6 = new QWidget(splitter_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        gridLayout_31 = new QGridLayout(layoutWidget6);
        gridLayout_31->setSpacing(0);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        CurrentDocBaseLabel = new QLabel(layoutWidget6);
        CurrentDocBaseLabel->setObjectName(QString::fromUtf8("CurrentDocBaseLabel"));

        horizontalLayout_17->addWidget(CurrentDocBaseLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        EnableSortingDocs = new QPushButton(layoutWidget6);
        EnableSortingDocs->setObjectName(QString::fromUtf8("EnableSortingDocs"));
        EnableSortingDocs->setIcon(icon14);
        EnableSortingDocs->setCheckable(true);
        EnableSortingDocs->setFlat(true);

        horizontalLayout_17->addWidget(EnableSortingDocs);

        DocumentsTagFilter = new QPushButton(layoutWidget6);
        DocumentsTagFilter->setObjectName(QString::fromUtf8("DocumentsTagFilter"));
        DocumentsTagFilter->setIcon(icon16);
        DocumentsTagFilter->setCheckable(true);
        DocumentsTagFilter->setFlat(true);

        horizontalLayout_17->addWidget(DocumentsTagFilter);

        ClearFiltersDD = new QPushButton(layoutWidget6);
        ClearFiltersDD->setObjectName(QString::fromUtf8("ClearFiltersDD"));
        ClearFiltersDD->setIcon(icon15);
        ClearFiltersDD->setFlat(true);

        horizontalLayout_17->addWidget(ClearFiltersDD);


        gridLayout_31->addLayout(horizontalLayout_17, 0, 0, 1, 1);

        splitter_2->addWidget(layoutWidget6);
        gridLayoutWidget_2 = new QWidget(splitter_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayout_14 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        DocDescription = new QTextBrowser(gridLayoutWidget_2);
        DocDescription->setObjectName(QString::fromUtf8("DocDescription"));
        DocDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 235, 235);"));

        gridLayout_14->addWidget(DocDescription, 0, 0, 1, 1);

        splitter_2->addWidget(gridLayoutWidget_2);
        splitter_6->addWidget(splitter_2);
        tabWidget_2 = new QTabWidget(splitter_6);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        FilesInDocumentTab = new QWidget();
        FilesInDocumentTab->setObjectName(QString::fromUtf8("FilesInDocumentTab"));
        gridLayout_19 = new QGridLayout(FilesInDocumentTab);
        gridLayout_19->setSpacing(0);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        splitter_9 = new MiniSplitter(FilesInDocumentTab);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Vertical);
        layoutWidget7 = new QWidget(splitter_9);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        gridLayout_18 = new QGridLayout(layoutWidget7);
        gridLayout_18->setSpacing(0);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        TexFileTable = new QTableView(layoutWidget7);
        TexFileTable->setObjectName(QString::fromUtf8("TexFileTable"));
        TexFileTable->setSelectionMode(QAbstractItemView::SingleSelection);
        TexFileTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        TexFileTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_18->addWidget(TexFileTable, 0, 0, 1, 1);

        splitter_9->addWidget(layoutWidget7);
        DatabaseFilesTabWidget = new QTabWidget(splitter_9);
        DatabaseFilesTabWidget->setObjectName(QString::fromUtf8("DatabaseFilesTabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        FileContent = new LatexTextBrowser(tab_2);
        FileContent->setObjectName(QString::fromUtf8("FileContent"));

        gridLayout_4->addWidget(FileContent, 0, 0, 1, 1);

        DatabaseFilesTabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        DatabaseFilesTabWidget->addTab(tab_3, QString());
        splitter_9->addWidget(DatabaseFilesTabWidget);

        gridLayout_19->addWidget(splitter_9, 0, 0, 1, 1);

        tabWidget_2->addTab(FilesInDocumentTab, QString());
        MetadataTab_4 = new QWidget();
        MetadataTab_4->setObjectName(QString::fromUtf8("MetadataTab_4"));
        gridLayout_17 = new QGridLayout(MetadataTab_4);
        gridLayout_17->setSpacing(0);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        scrollArea_4 = new QScrollArea(MetadataTab_4);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 451, 526));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_5, 2, 0, 1, 1);

        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));

        gridLayout_12->addLayout(verticalLayout_1, 1, 0, 1, 1);

        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        label_6 = new QLabel(scrollAreaWidgetContents_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 150));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_6, 4, 0, 1, 1);

        BasicFolder = new QLabel(scrollAreaWidgetContents_4);
        BasicFolder->setObjectName(QString::fromUtf8("BasicFolder"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(BasicFolder->sizePolicy().hasHeightForWidth());
        BasicFolder->setSizePolicy(sizePolicy7);
        BasicFolder->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        BasicFolder->setWordWrap(true);

        gridLayout_38->addWidget(BasicFolder, 3, 1, 1, 1);

        DocumentNameLine = new QLabel(scrollAreaWidgetContents_4);
        DocumentNameLine->setObjectName(QString::fromUtf8("DocumentNameLine"));
        sizePolicy7.setHeightForWidth(DocumentNameLine->sizePolicy().hasHeightForWidth());
        DocumentNameLine->setSizePolicy(sizePolicy7);
        DocumentNameLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DocumentNameLine->setWordWrap(true);

        gridLayout_38->addWidget(DocumentNameLine, 0, 1, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 150));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_2, 0, 0, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(16777215, 150));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_13, 5, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 150));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 150));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_5, 3, 0, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(16777215, 150));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_15, 7, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(16777215, 150));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_14, 6, 0, 1, 1);

        DocumentType = new QLabel(scrollAreaWidgetContents_4);
        DocumentType->setObjectName(QString::fromUtf8("DocumentType"));
        sizePolicy7.setHeightForWidth(DocumentType->sizePolicy().hasHeightForWidth());
        DocumentType->setSizePolicy(sizePolicy7);
        DocumentType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DocumentType->setWordWrap(true);

        gridLayout_38->addWidget(DocumentType, 2, 1, 1, 1);

        SubFolder = new QLabel(scrollAreaWidgetContents_4);
        SubFolder->setObjectName(QString::fromUtf8("SubFolder"));
        sizePolicy7.setHeightForWidth(SubFolder->sizePolicy().hasHeightForWidth());
        SubFolder->setSizePolicy(sizePolicy7);
        SubFolder->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SubFolder->setWordWrap(true);

        gridLayout_38->addWidget(SubFolder, 4, 1, 1, 1);

        SubsubFolder = new QLabel(scrollAreaWidgetContents_4);
        SubsubFolder->setObjectName(QString::fromUtf8("SubsubFolder"));
        sizePolicy7.setHeightForWidth(SubsubFolder->sizePolicy().hasHeightForWidth());
        SubsubFolder->setSizePolicy(sizePolicy7);
        SubsubFolder->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        SubsubFolder->setWordWrap(true);

        gridLayout_38->addWidget(SubsubFolder, 5, 1, 1, 1);

        DocumentPathLine = new QLabel(scrollAreaWidgetContents_4);
        DocumentPathLine->setObjectName(QString::fromUtf8("DocumentPathLine"));
        sizePolicy7.setHeightForWidth(DocumentPathLine->sizePolicy().hasHeightForWidth());
        DocumentPathLine->setSizePolicy(sizePolicy7);
        DocumentPathLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DocumentPathLine->setWordWrap(true);

        gridLayout_38->addWidget(DocumentPathLine, 6, 1, 1, 1);

        DocumentDateTimeEdit = new QLabel(scrollAreaWidgetContents_4);
        DocumentDateTimeEdit->setObjectName(QString::fromUtf8("DocumentDateTimeEdit"));
        sizePolicy7.setHeightForWidth(DocumentDateTimeEdit->sizePolicy().hasHeightForWidth());
        DocumentDateTimeEdit->setSizePolicy(sizePolicy7);
        DocumentDateTimeEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DocumentDateTimeEdit->setWordWrap(true);

        gridLayout_38->addWidget(DocumentDateTimeEdit, 7, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 150));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_38->addWidget(label_3, 1, 0, 1, 1);

        DocumentTitleLine = new QLabel(scrollAreaWidgetContents_4);
        DocumentTitleLine->setObjectName(QString::fromUtf8("DocumentTitleLine"));
        sizePolicy7.setHeightForWidth(DocumentTitleLine->sizePolicy().hasHeightForWidth());
        DocumentTitleLine->setSizePolicy(sizePolicy7);
        DocumentTitleLine->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        DocumentTitleLine->setWordWrap(true);

        gridLayout_38->addWidget(DocumentTitleLine, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_38, 0, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        gridLayout_11->addWidget(scrollArea_4, 1, 0, 1, 1);


        gridLayout_17->addLayout(gridLayout_11, 0, 0, 1, 1);

        tabWidget_2->addTab(MetadataTab_4, QString());
        BibliographyTab_4 = new QWidget();
        BibliographyTab_4->setObjectName(QString::fromUtf8("BibliographyTab_4"));
        gridLayout_30 = new QGridLayout(BibliographyTab_4);
        gridLayout_30->setSpacing(0);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(0, 0, 0, 0);
        splitter_7 = new MiniSplitter(BibliographyTab_4);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Vertical);
        layoutWidget8 = new QWidget(splitter_7);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        verticalLayout = new QVBoxLayout(layoutWidget8);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_22 = new QLabel(layoutWidget8);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_21->addWidget(label_22);

        DocBibEntriesCombo = new QComboBox(layoutWidget8);
        DocBibEntriesCombo->setObjectName(QString::fromUtf8("DocBibEntriesCombo"));
        sizePolicy5.setHeightForWidth(DocBibEntriesCombo->sizePolicy().hasHeightForWidth());
        DocBibEntriesCombo->setSizePolicy(sizePolicy5);

        horizontalLayout_21->addWidget(DocBibEntriesCombo);

        addDocBibEntry = new QPushButton(layoutWidget8);
        addDocBibEntry->setObjectName(QString::fromUtf8("addDocBibEntry"));
        addDocBibEntry->setIcon(icon18);
        addDocBibEntry->setFlat(true);

        horizontalLayout_21->addWidget(addDocBibEntry);

        removeDocBibEnrty = new QPushButton(layoutWidget8);
        removeDocBibEnrty->setObjectName(QString::fromUtf8("removeDocBibEnrty"));
        removeDocBibEnrty->setIcon(icon19);
        removeDocBibEnrty->setFlat(true);

        horizontalLayout_21->addWidget(removeDocBibEnrty);

        NewBibEntry_CurrentDocument = new QPushButton(layoutWidget8);
        NewBibEntry_CurrentDocument->setObjectName(QString::fromUtf8("NewBibEntry_CurrentDocument"));
        NewBibEntry_CurrentDocument->setIcon(icon20);
        NewBibEntry_CurrentDocument->setFlat(true);

        horizontalLayout_21->addWidget(NewBibEntry_CurrentDocument);


        verticalLayout->addLayout(horizontalLayout_21);

        line_3 = new QFrame(layoutWidget8);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_10 = new QLabel(layoutWidget8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        BibPerFileTree = new QTreeWidget(layoutWidget8);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("1"));
        BibPerFileTree->setHeaderItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(BibPerFileTree);
        __qtreewidgetitem3->setIcon(0, icon7);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(BibPerFileTree);
        __qtreewidgetitem4->setIcon(0, icon21);
        BibPerFileTree->setObjectName(QString::fromUtf8("BibPerFileTree"));

        verticalLayout->addWidget(BibPerFileTree);

        splitter_7->addWidget(layoutWidget8);
        stackedWidget_5 = new QStackedWidget(splitter_7);
        stackedWidget_5->setObjectName(QString::fromUtf8("stackedWidget_5"));
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        gridLayout_26 = new QGridLayout(page_10);
        gridLayout_26->setSpacing(0);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_11 = new QLabel(page_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_16->addWidget(label_11);

        SaveDocBibContent = new QPushButton(page_10);
        SaveDocBibContent->setObjectName(QString::fromUtf8("SaveDocBibContent"));
        sizePolicy1.setHeightForWidth(SaveDocBibContent->sizePolicy().hasHeightForWidth());
        SaveDocBibContent->setSizePolicy(sizePolicy1);
        SaveDocBibContent->setIcon(icon23);
        SaveDocBibContent->setFlat(true);

        horizontalLayout_16->addWidget(SaveDocBibContent);


        gridLayout_26->addLayout(horizontalLayout_16, 0, 0, 1, 1);

        DocBibSourceCode = new LatexTextBrowser(page_10);
        DocBibSourceCode->setObjectName(QString::fromUtf8("DocBibSourceCode"));

        gridLayout_26->addWidget(DocBibSourceCode, 1, 0, 1, 1);

        stackedWidget_5->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        gridLayout_28 = new QGridLayout(page_11);
        gridLayout_28->setSpacing(0);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        stackedWidget_5->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QString::fromUtf8("page_12"));
        stackedWidget_5->addWidget(page_12);
        splitter_7->addWidget(stackedWidget_5);

        gridLayout_30->addWidget(splitter_7, 0, 0, 1, 1);

        tabWidget_2->addTab(BibliographyTab_4, QString());
        ContentTab_4 = new QWidget();
        ContentTab_4->setObjectName(QString::fromUtf8("ContentTab_4"));
        verticalLayout_9 = new QVBoxLayout(ContentTab_4);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(0);
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));

        verticalLayout_9->addLayout(horizontalLayout_45);

        stackedWidget_3 = new QStackedWidget(ContentTab_4);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_10 = new QGridLayout(page_5);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        DocumentContent = new LatexTextWidget(page_5);
        DocumentContent->setObjectName(QString::fromUtf8("DocumentContent"));

        gridLayout_10->addWidget(DocumentContent, 0, 0, 1, 1);

        stackedWidget_3->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_13 = new QGridLayout(page_6);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        stackedWidget_3->addWidget(page_6);

        verticalLayout_9->addWidget(stackedWidget_3);

        tabWidget_2->addTab(ContentTab_4, QString());
        splitter_6->addWidget(tabWidget_2);

        gridLayout_29->addWidget(splitter_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        gridLayout_34 = new QGridLayout(page_7);
        gridLayout_34->setSpacing(0);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        gridLayout_34->setContentsMargins(0, 0, 0, 0);
        splitter_10 = new MiniSplitter(page_7);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        splitter_11 = new MiniSplitter(splitter_10);
        splitter_11->setObjectName(QString::fromUtf8("splitter_11"));
        splitter_11->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter_11);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        gridLayout_21 = new QGridLayout(layoutWidget_2);
        gridLayout_21->setSpacing(0);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(0);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        CurrentBaseBibLabel = new QLabel(layoutWidget_2);
        CurrentBaseBibLabel->setObjectName(QString::fromUtf8("CurrentBaseBibLabel"));
        CurrentBaseBibLabel->setFont(font);
        CurrentBaseBibLabel->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        horizontalLayout_24->addWidget(CurrentBaseBibLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_6);

        EnableSortingBib = new QPushButton(layoutWidget_2);
        EnableSortingBib->setObjectName(QString::fromUtf8("EnableSortingBib"));
        EnableSortingBib->setIcon(icon14);
        EnableSortingBib->setCheckable(true);
        EnableSortingBib->setFlat(true);

        horizontalLayout_24->addWidget(EnableSortingBib);

        ClearFiltersB = new QPushButton(layoutWidget_2);
        ClearFiltersB->setObjectName(QString::fromUtf8("ClearFiltersB"));
        ClearFiltersB->setIcon(icon15);
        ClearFiltersB->setFlat(true);

        horizontalLayout_24->addWidget(ClearFiltersB);


        gridLayout_21->addLayout(horizontalLayout_24, 0, 0, 1, 4);

        splitter_11->addWidget(layoutWidget_2);
        gridLayoutWidget_3 = new QWidget(splitter_11);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayout_22 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_22->setSpacing(0);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        scrollArea_2 = new QScrollArea(gridLayoutWidget_3);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 259, 397));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_22->addWidget(scrollArea_2, 0, 0, 1, 1);

        splitter_11->addWidget(gridLayoutWidget_3);
        splitter_10->addWidget(splitter_11);
        tabWidget_3 = new QTabWidget(splitter_10);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        MetadataTab_2 = new QWidget();
        MetadataTab_2->setObjectName(QString::fromUtf8("MetadataTab_2"));
        verticalLayout_14 = new QVBoxLayout(MetadataTab_2);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        splitter_12 = new MiniSplitter(MetadataTab_2);
        splitter_12->setObjectName(QString::fromUtf8("splitter_12"));
        splitter_12->setOrientation(Qt::Vertical);
        layoutWidget9 = new QWidget(splitter_12);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        verticalLayout_11 = new QVBoxLayout(layoutWidget9);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_21 = new QLabel(layoutWidget9);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_11->addWidget(label_21);

        scrollArea_3 = new QScrollArea(layoutWidget9);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 637, 131));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));

        verticalLayout_12->addLayout(verticalLayout_13);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_11->addWidget(scrollArea_3);

        splitter_12->addWidget(layoutWidget9);
        layoutWidget_3 = new QWidget(splitter_12);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_19->addWidget(label_20);

        CopyBibSourceCode = new QPushButton(layoutWidget_3);
        CopyBibSourceCode->setObjectName(QString::fromUtf8("CopyBibSourceCode"));
        sizePolicy1.setHeightForWidth(CopyBibSourceCode->sizePolicy().hasHeightForWidth());
        CopyBibSourceCode->setSizePolicy(sizePolicy1);
        CopyBibSourceCode->setIcon(icon22);
        CopyBibSourceCode->setFlat(true);

        horizontalLayout_19->addWidget(CopyBibSourceCode);


        verticalLayout_10->addLayout(horizontalLayout_19);

        SourceCodeText = new LatexTextBrowser(layoutWidget_3);
        SourceCodeText->setObjectName(QString::fromUtf8("SourceCodeText"));

        verticalLayout_10->addWidget(SourceCodeText);

        splitter_12->addWidget(layoutWidget_3);

        verticalLayout_14->addWidget(splitter_12);

        tabWidget_3->addTab(MetadataTab_2, QString());
        ContentTab_2 = new QWidget();
        ContentTab_2->setObjectName(QString::fromUtf8("ContentTab_2"));
        gridLayout_25 = new QGridLayout(ContentTab_2);
        gridLayout_25->setSpacing(0);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        splitter_13 = new MiniSplitter(ContentTab_2);
        splitter_13->setObjectName(QString::fromUtf8("splitter_13"));
        splitter_13->setOrientation(Qt::Vertical);
        layoutWidget10 = new QWidget(splitter_13);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget10);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        CitationsLabel = new QLabel(layoutWidget10);
        CitationsLabel->setObjectName(QString::fromUtf8("CitationsLabel"));

        verticalLayout_4->addWidget(CitationsLabel);

        DatabaseFiles_per_BibEntry = new QTableView(layoutWidget10);
        DatabaseFiles_per_BibEntry->setObjectName(QString::fromUtf8("DatabaseFiles_per_BibEntry"));
        DatabaseFiles_per_BibEntry->setAlternatingRowColors(true);
        DatabaseFiles_per_BibEntry->setSelectionMode(QAbstractItemView::SingleSelection);
        DatabaseFiles_per_BibEntry->setSelectionBehavior(QAbstractItemView::SelectRows);
        DatabaseFiles_per_BibEntry->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_4->addWidget(DatabaseFiles_per_BibEntry);

        splitter_13->addWidget(layoutWidget10);
        verticalLayoutWidget = new QWidget(splitter_13);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        CitationsLabel_2 = new QLabel(verticalLayoutWidget);
        CitationsLabel_2->setObjectName(QString::fromUtf8("CitationsLabel_2"));

        verticalLayout_5->addWidget(CitationsLabel_2);

        splitter_13->addWidget(verticalLayoutWidget);

        gridLayout_25->addWidget(splitter_13, 0, 0, 1, 1);

        tabWidget_3->addTab(ContentTab_2, QString());
        splitter_10->addWidget(tabWidget_3);

        gridLayout_34->addWidget(splitter_10, 0, 0, 1, 1);

        stackedWidget->addWidget(page_7);
        page_19 = new QWidget();
        page_19->setObjectName(QString::fromUtf8("page_19"));
        gridLayout_41 = new QGridLayout(page_19);
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        splitter_15 = new MiniSplitter(page_19);
        splitter_15->setObjectName(QString::fromUtf8("splitter_15"));
        splitter_15->setOrientation(Qt::Horizontal);
        splitter_16 = new MiniSplitter(splitter_15);
        splitter_16->setObjectName(QString::fromUtf8("splitter_16"));
        splitter_16->setOrientation(Qt::Vertical);
        layoutWidget_4 = new QWidget(splitter_16);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        gridLayout_37 = new QGridLayout(layoutWidget_4);
        gridLayout_37->setSpacing(0);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(0);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        CommandLabel = new QLabel(layoutWidget_4);
        CommandLabel->setObjectName(QString::fromUtf8("CommandLabel"));
        CommandLabel->setFont(font);
        CommandLabel->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        horizontalLayout_25->addWidget(CommandLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_8);

        EnableSortingCommands = new QPushButton(layoutWidget_4);
        EnableSortingCommands->setObjectName(QString::fromUtf8("EnableSortingCommands"));
        EnableSortingCommands->setIcon(icon14);
        EnableSortingCommands->setCheckable(true);
        EnableSortingCommands->setFlat(true);

        horizontalLayout_25->addWidget(EnableSortingCommands);

        ClearFiltersCom = new QPushButton(layoutWidget_4);
        ClearFiltersCom->setObjectName(QString::fromUtf8("ClearFiltersCom"));
        ClearFiltersCom->setIcon(icon15);
        ClearFiltersCom->setFlat(true);

        horizontalLayout_25->addWidget(ClearFiltersCom);


        gridLayout_37->addLayout(horizontalLayout_25, 0, 0, 1, 4);

        splitter_16->addWidget(layoutWidget_4);
        gridLayoutWidget_4 = new QWidget(splitter_16);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayout_39 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_39->setSpacing(0);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        scrollArea_6 = new QScrollArea(gridLayoutWidget_4);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 254, 384));
        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        gridLayout_39->addWidget(scrollArea_6, 0, 0, 1, 1);

        splitter_16->addWidget(gridLayoutWidget_4);
        splitter_15->addWidget(splitter_16);
        tabWidget_4 = new QTabWidget(splitter_15);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        MetadataTab_3 = new QWidget();
        MetadataTab_3->setObjectName(QString::fromUtf8("MetadataTab_3"));
        verticalLayout_21 = new QVBoxLayout(MetadataTab_3);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        splitter_17 = new MiniSplitter(MetadataTab_3);
        splitter_17->setObjectName(QString::fromUtf8("splitter_17"));
        splitter_17->setOrientation(Qt::Vertical);
        layoutWidget_5 = new QWidget(splitter_17);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        verticalLayout_22 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        label_23 = new QLabel(layoutWidget_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_22->addWidget(label_23);

        scrollArea_7 = new QScrollArea(layoutWidget_5);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 624, 125));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));

        verticalLayout_23->addLayout(verticalLayout_24);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_22->addWidget(scrollArea_7);

        splitter_17->addWidget(layoutWidget_5);
        layoutWidget_6 = new QWidget(splitter_17);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        verticalLayout_25 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(0);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_24 = new QLabel(layoutWidget_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_22->addWidget(label_24);

        CopyBibSourceCode_2 = new QPushButton(layoutWidget_6);
        CopyBibSourceCode_2->setObjectName(QString::fromUtf8("CopyBibSourceCode_2"));
        sizePolicy1.setHeightForWidth(CopyBibSourceCode_2->sizePolicy().hasHeightForWidth());
        CopyBibSourceCode_2->setSizePolicy(sizePolicy1);
        CopyBibSourceCode_2->setIcon(icon22);
        CopyBibSourceCode_2->setFlat(true);

        horizontalLayout_22->addWidget(CopyBibSourceCode_2);


        verticalLayout_25->addLayout(horizontalLayout_22);

        SourceCodeText_2 = new LatexTextBrowser(layoutWidget_6);
        SourceCodeText_2->setObjectName(QString::fromUtf8("SourceCodeText_2"));

        verticalLayout_25->addWidget(SourceCodeText_2);

        splitter_17->addWidget(layoutWidget_6);

        verticalLayout_21->addWidget(splitter_17);

        tabWidget_4->addTab(MetadataTab_3, QString());
        ContentTab_3 = new QWidget();
        ContentTab_3->setObjectName(QString::fromUtf8("ContentTab_3"));
        gridLayout_40 = new QGridLayout(ContentTab_3);
        gridLayout_40->setSpacing(0);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        gridLayout_40->setContentsMargins(0, 0, 0, 0);
        splitter_18 = new MiniSplitter(ContentTab_3);
        splitter_18->setObjectName(QString::fromUtf8("splitter_18"));
        splitter_18->setOrientation(Qt::Vertical);
        layoutWidget_7 = new QWidget(splitter_18);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        verticalLayout_26 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        CommandLabel_2 = new QLabel(layoutWidget_7);
        CommandLabel_2->setObjectName(QString::fromUtf8("CommandLabel_2"));

        verticalLayout_26->addWidget(CommandLabel_2);

        DatabaseFiles_per_BibEntry_2 = new QTableView(layoutWidget_7);
        DatabaseFiles_per_BibEntry_2->setObjectName(QString::fromUtf8("DatabaseFiles_per_BibEntry_2"));
        DatabaseFiles_per_BibEntry_2->setAlternatingRowColors(true);
        DatabaseFiles_per_BibEntry_2->setSelectionMode(QAbstractItemView::SingleSelection);
        DatabaseFiles_per_BibEntry_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        DatabaseFiles_per_BibEntry_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_26->addWidget(DatabaseFiles_per_BibEntry_2);

        splitter_18->addWidget(layoutWidget_7);
        verticalLayoutWidget_2 = new QWidget(splitter_18);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayout_27 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_27->setSpacing(0);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        CitationsLabel_4 = new QLabel(verticalLayoutWidget_2);
        CitationsLabel_4->setObjectName(QString::fromUtf8("CitationsLabel_4"));

        verticalLayout_27->addWidget(CitationsLabel_4);

        splitter_18->addWidget(verticalLayoutWidget_2);

        gridLayout_40->addWidget(splitter_18, 0, 0, 1, 1);

        tabWidget_4->addTab(ContentTab_3, QString());
        splitter_15->addWidget(tabWidget_4);

        gridLayout_41->addWidget(splitter_15, 0, 0, 1, 1);

        stackedWidget->addWidget(page_19);
        page_20 = new QWidget();
        page_20->setObjectName(QString::fromUtf8("page_20"));
        gridLayout_45 = new QGridLayout(page_20);
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        splitter_19 = new MiniSplitter(page_20);
        splitter_19->setObjectName(QString::fromUtf8("splitter_19"));
        splitter_19->setOrientation(Qt::Horizontal);
        splitter_20 = new MiniSplitter(splitter_19);
        splitter_20->setObjectName(QString::fromUtf8("splitter_20"));
        splitter_20->setOrientation(Qt::Vertical);
        layoutWidget_8 = new QWidget(splitter_20);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        gridLayout_42 = new QGridLayout(layoutWidget_8);
        gridLayout_42->setSpacing(0);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(0);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        CommandLabel_3 = new QLabel(layoutWidget_8);
        CommandLabel_3->setObjectName(QString::fromUtf8("CommandLabel_3"));
        CommandLabel_3->setFont(font);
        CommandLabel_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        horizontalLayout_26->addWidget(CommandLabel_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_9);

        EnableSortingCommands_2 = new QPushButton(layoutWidget_8);
        EnableSortingCommands_2->setObjectName(QString::fromUtf8("EnableSortingCommands_2"));
        EnableSortingCommands_2->setIcon(icon14);
        EnableSortingCommands_2->setCheckable(true);
        EnableSortingCommands_2->setFlat(true);

        horizontalLayout_26->addWidget(EnableSortingCommands_2);

        ClearFiltersCom_2 = new QPushButton(layoutWidget_8);
        ClearFiltersCom_2->setObjectName(QString::fromUtf8("ClearFiltersCom_2"));
        ClearFiltersCom_2->setIcon(icon15);
        ClearFiltersCom_2->setFlat(true);

        horizontalLayout_26->addWidget(ClearFiltersCom_2);


        gridLayout_42->addLayout(horizontalLayout_26, 0, 0, 1, 4);

        splitter_20->addWidget(layoutWidget_8);
        gridLayoutWidget_5 = new QWidget(splitter_20);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayout_43 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_43->setSpacing(0);
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        scrollArea_8 = new QScrollArea(gridLayoutWidget_5);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 254, 384));
        scrollArea_8->setWidget(scrollAreaWidgetContents_8);

        gridLayout_43->addWidget(scrollArea_8, 0, 0, 1, 1);

        splitter_20->addWidget(gridLayoutWidget_5);
        splitter_19->addWidget(splitter_20);
        tabWidget_5 = new QTabWidget(splitter_19);
        tabWidget_5->setObjectName(QString::fromUtf8("tabWidget_5"));
        MetadataTab_5 = new QWidget();
        MetadataTab_5->setObjectName(QString::fromUtf8("MetadataTab_5"));
        verticalLayout_28 = new QVBoxLayout(MetadataTab_5);
        verticalLayout_28->setSpacing(0);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        splitter_21 = new MiniSplitter(MetadataTab_5);
        splitter_21->setObjectName(QString::fromUtf8("splitter_21"));
        splitter_21->setOrientation(Qt::Vertical);
        layoutWidget_9 = new QWidget(splitter_21);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        verticalLayout_29 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_29->setSpacing(0);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        label_25 = new QLabel(layoutWidget_9);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_29->addWidget(label_25);

        scrollArea_9 = new QScrollArea(layoutWidget_9);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 624, 125));
        verticalLayout_30 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_30->setSpacing(0);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(0);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));

        verticalLayout_30->addLayout(verticalLayout_31);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_29->addWidget(scrollArea_9);

        splitter_21->addWidget(layoutWidget_9);
        layoutWidget_10 = new QWidget(splitter_21);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        verticalLayout_32 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_32->setSpacing(0);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(0);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_26 = new QLabel(layoutWidget_10);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_27->addWidget(label_26);

        CopyBibSourceCode_3 = new QPushButton(layoutWidget_10);
        CopyBibSourceCode_3->setObjectName(QString::fromUtf8("CopyBibSourceCode_3"));
        sizePolicy1.setHeightForWidth(CopyBibSourceCode_3->sizePolicy().hasHeightForWidth());
        CopyBibSourceCode_3->setSizePolicy(sizePolicy1);
        CopyBibSourceCode_3->setIcon(icon22);
        CopyBibSourceCode_3->setFlat(true);

        horizontalLayout_27->addWidget(CopyBibSourceCode_3);


        verticalLayout_32->addLayout(horizontalLayout_27);

        SourceCodeText_3 = new LatexTextBrowser(layoutWidget_10);
        SourceCodeText_3->setObjectName(QString::fromUtf8("SourceCodeText_3"));

        verticalLayout_32->addWidget(SourceCodeText_3);

        splitter_21->addWidget(layoutWidget_10);

        verticalLayout_28->addWidget(splitter_21);

        tabWidget_5->addTab(MetadataTab_5, QString());
        ContentTab_5 = new QWidget();
        ContentTab_5->setObjectName(QString::fromUtf8("ContentTab_5"));
        gridLayout_44 = new QGridLayout(ContentTab_5);
        gridLayout_44->setSpacing(0);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        gridLayout_44->setContentsMargins(0, 0, 0, 0);
        splitter_22 = new MiniSplitter(ContentTab_5);
        splitter_22->setObjectName(QString::fromUtf8("splitter_22"));
        splitter_22->setOrientation(Qt::Vertical);
        layoutWidget_11 = new QWidget(splitter_22);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        verticalLayout_33 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_33->setSpacing(0);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        CommandLabel_4 = new QLabel(layoutWidget_11);
        CommandLabel_4->setObjectName(QString::fromUtf8("CommandLabel_4"));

        verticalLayout_33->addWidget(CommandLabel_4);

        DatabaseFiles_per_BibEntry_3 = new QTableView(layoutWidget_11);
        DatabaseFiles_per_BibEntry_3->setObjectName(QString::fromUtf8("DatabaseFiles_per_BibEntry_3"));
        DatabaseFiles_per_BibEntry_3->setAlternatingRowColors(true);
        DatabaseFiles_per_BibEntry_3->setSelectionMode(QAbstractItemView::SingleSelection);
        DatabaseFiles_per_BibEntry_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        DatabaseFiles_per_BibEntry_3->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_33->addWidget(DatabaseFiles_per_BibEntry_3);

        splitter_22->addWidget(layoutWidget_11);
        verticalLayoutWidget_3 = new QWidget(splitter_22);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayout_34 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_34->setSpacing(0);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        CitationsLabel_5 = new QLabel(verticalLayoutWidget_3);
        CitationsLabel_5->setObjectName(QString::fromUtf8("CitationsLabel_5"));

        verticalLayout_34->addWidget(CitationsLabel_5);

        splitter_22->addWidget(verticalLayoutWidget_3);

        gridLayout_44->addWidget(splitter_22, 0, 0, 1, 1);

        tabWidget_5->addTab(ContentTab_5, QString());
        splitter_19->addWidget(tabWidget_5);

        gridLayout_45->addWidget(splitter_19, 0, 0, 1, 1);

        stackedWidget->addWidget(page_20);
        page_21 = new QWidget();
        page_21->setObjectName(QString::fromUtf8("page_21"));
        gridLayout_49 = new QGridLayout(page_21);
        gridLayout_49->setObjectName(QString::fromUtf8("gridLayout_49"));
        splitter_23 = new MiniSplitter(page_21);
        splitter_23->setObjectName(QString::fromUtf8("splitter_23"));
        splitter_23->setOrientation(Qt::Horizontal);
        splitter_24 = new MiniSplitter(splitter_23);
        splitter_24->setObjectName(QString::fromUtf8("splitter_24"));
        splitter_24->setOrientation(Qt::Vertical);
        layoutWidget_12 = new QWidget(splitter_24);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        gridLayout_46 = new QGridLayout(layoutWidget_12);
        gridLayout_46->setSpacing(0);
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(0);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        CommandLabel_5 = new QLabel(layoutWidget_12);
        CommandLabel_5->setObjectName(QString::fromUtf8("CommandLabel_5"));
        CommandLabel_5->setFont(font);
        CommandLabel_5->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        horizontalLayout_28->addWidget(CommandLabel_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_10);

        EnableSortingCommands_3 = new QPushButton(layoutWidget_12);
        EnableSortingCommands_3->setObjectName(QString::fromUtf8("EnableSortingCommands_3"));
        EnableSortingCommands_3->setIcon(icon14);
        EnableSortingCommands_3->setCheckable(true);
        EnableSortingCommands_3->setFlat(true);

        horizontalLayout_28->addWidget(EnableSortingCommands_3);

        ClearFiltersCom_3 = new QPushButton(layoutWidget_12);
        ClearFiltersCom_3->setObjectName(QString::fromUtf8("ClearFiltersCom_3"));
        ClearFiltersCom_3->setIcon(icon15);
        ClearFiltersCom_3->setFlat(true);

        horizontalLayout_28->addWidget(ClearFiltersCom_3);


        gridLayout_46->addLayout(horizontalLayout_28, 0, 0, 1, 4);

        splitter_24->addWidget(layoutWidget_12);
        gridLayoutWidget_6 = new QWidget(splitter_24);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayout_47 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_47->setSpacing(0);
        gridLayout_47->setObjectName(QString::fromUtf8("gridLayout_47"));
        scrollArea_10 = new QScrollArea(gridLayoutWidget_6);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 254, 384));
        scrollArea_10->setWidget(scrollAreaWidgetContents_10);

        gridLayout_47->addWidget(scrollArea_10, 0, 0, 1, 1);

        splitter_24->addWidget(gridLayoutWidget_6);
        splitter_23->addWidget(splitter_24);
        tabWidget_6 = new QTabWidget(splitter_23);
        tabWidget_6->setObjectName(QString::fromUtf8("tabWidget_6"));
        MetadataTab_6 = new QWidget();
        MetadataTab_6->setObjectName(QString::fromUtf8("MetadataTab_6"));
        verticalLayout_35 = new QVBoxLayout(MetadataTab_6);
        verticalLayout_35->setSpacing(0);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        splitter_25 = new MiniSplitter(MetadataTab_6);
        splitter_25->setObjectName(QString::fromUtf8("splitter_25"));
        splitter_25->setOrientation(Qt::Vertical);
        layoutWidget_13 = new QWidget(splitter_25);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        verticalLayout_36 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_36->setSpacing(0);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        label_27 = new QLabel(layoutWidget_13);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_36->addWidget(label_27);

        scrollArea_11 = new QScrollArea(layoutWidget_13);
        scrollArea_11->setObjectName(QString::fromUtf8("scrollArea_11"));
        scrollArea_11->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_11"));
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 624, 125));
        verticalLayout_37 = new QVBoxLayout(scrollAreaWidgetContents_11);
        verticalLayout_37->setSpacing(0);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(0);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));

        verticalLayout_37->addLayout(verticalLayout_38);

        scrollArea_11->setWidget(scrollAreaWidgetContents_11);

        verticalLayout_36->addWidget(scrollArea_11);

        splitter_25->addWidget(layoutWidget_13);
        layoutWidget_14 = new QWidget(splitter_25);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        verticalLayout_39 = new QVBoxLayout(layoutWidget_14);
        verticalLayout_39->setSpacing(0);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(0);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        label_28 = new QLabel(layoutWidget_14);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_29->addWidget(label_28);

        CopyBibSourceCode_4 = new QPushButton(layoutWidget_14);
        CopyBibSourceCode_4->setObjectName(QString::fromUtf8("CopyBibSourceCode_4"));
        sizePolicy1.setHeightForWidth(CopyBibSourceCode_4->sizePolicy().hasHeightForWidth());
        CopyBibSourceCode_4->setSizePolicy(sizePolicy1);
        CopyBibSourceCode_4->setIcon(icon22);
        CopyBibSourceCode_4->setFlat(true);

        horizontalLayout_29->addWidget(CopyBibSourceCode_4);


        verticalLayout_39->addLayout(horizontalLayout_29);

        SourceCodeText_4 = new LatexTextBrowser(layoutWidget_14);
        SourceCodeText_4->setObjectName(QString::fromUtf8("SourceCodeText_4"));

        verticalLayout_39->addWidget(SourceCodeText_4);

        splitter_25->addWidget(layoutWidget_14);

        verticalLayout_35->addWidget(splitter_25);

        tabWidget_6->addTab(MetadataTab_6, QString());
        ContentTab_6 = new QWidget();
        ContentTab_6->setObjectName(QString::fromUtf8("ContentTab_6"));
        gridLayout_48 = new QGridLayout(ContentTab_6);
        gridLayout_48->setSpacing(0);
        gridLayout_48->setObjectName(QString::fromUtf8("gridLayout_48"));
        gridLayout_48->setContentsMargins(0, 0, 0, 0);
        splitter_26 = new MiniSplitter(ContentTab_6);
        splitter_26->setObjectName(QString::fromUtf8("splitter_26"));
        splitter_26->setOrientation(Qt::Vertical);
        layoutWidget_15 = new QWidget(splitter_26);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        verticalLayout_40 = new QVBoxLayout(layoutWidget_15);
        verticalLayout_40->setSpacing(0);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        CommandLabel_6 = new QLabel(layoutWidget_15);
        CommandLabel_6->setObjectName(QString::fromUtf8("CommandLabel_6"));

        verticalLayout_40->addWidget(CommandLabel_6);

        DatabaseFiles_per_BibEntry_4 = new QTableView(layoutWidget_15);
        DatabaseFiles_per_BibEntry_4->setObjectName(QString::fromUtf8("DatabaseFiles_per_BibEntry_4"));
        DatabaseFiles_per_BibEntry_4->setAlternatingRowColors(true);
        DatabaseFiles_per_BibEntry_4->setSelectionMode(QAbstractItemView::SingleSelection);
        DatabaseFiles_per_BibEntry_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        DatabaseFiles_per_BibEntry_4->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_40->addWidget(DatabaseFiles_per_BibEntry_4);

        splitter_26->addWidget(layoutWidget_15);
        verticalLayoutWidget_4 = new QWidget(splitter_26);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayout_41 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_41->setSpacing(0);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        CitationsLabel_6 = new QLabel(verticalLayoutWidget_4);
        CitationsLabel_6->setObjectName(QString::fromUtf8("CitationsLabel_6"));

        verticalLayout_41->addWidget(CitationsLabel_6);

        splitter_26->addWidget(verticalLayoutWidget_4);

        gridLayout_48->addWidget(splitter_26, 0, 0, 1, 1);

        tabWidget_6->addTab(ContentTab_6, QString());
        splitter_23->addWidget(tabWidget_6);

        gridLayout_49->addWidget(splitter_23, 0, 0, 1, 1);

        stackedWidget->addWidget(page_21);
        splitter_8->addWidget(stackedWidget);

        gridLayout_6->addWidget(splitter_8, 1, 1, 3, 1);

        DataTex->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DataTex);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1322, 22));
        DataTex->setMenuBar(menubar);
        statusbar = new QStatusBar(DataTex);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DataTex->setStatusBar(statusbar);

        retranslateUi(DataTex);
        QObject::connect(ShowDescription, SIGNAL(toggled(bool)), stackedWidget_8, SLOT(setVisible(bool)));

        stackedWidget_6->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(3);
        stackedWidget_8->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        stackedWidget_4->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_7->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);
        DatabaseFilesTabWidget->setCurrentIndex(1);
        stackedWidget_5->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataTex);
    } // setupUi

    void retranslateUi(QMainWindow *DataTex)
    {
        DataTex->setWindowTitle(QCoreApplication::translate("DataTex", "DataTex", nullptr));
        FilesDatabaseToggle->setText(QCoreApplication::translate("DataTex", "Files", nullptr));
        DocumentsDatabaseToggle->setText(QCoreApplication::translate("DataTex", "Documents", nullptr));
        BibliographyDatabaseToggle->setText(QCoreApplication::translate("DataTex", "Bibliography", nullptr));
        CommandsButton->setText(QCoreApplication::translate("DataTex", "Commands", nullptr));
        ExamsButton->setText(QCoreApplication::translate("DataTex", "Preambles-Classes-Packages", nullptr));
        ParentsButton->setText(QCoreApplication::translate("DataTex", "Figures-Tables", nullptr));
        settingsButton->setText(QCoreApplication::translate("DataTex", "Settings", nullptr));
        ScheduleButton->setText(QCoreApplication::translate("DataTex", "Help", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = OpenDatabasesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("DataTex", "Name", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("DataTex", "Path", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("DataTex", "Databases", nullptr));

        const bool __sortingEnabled = OpenDatabasesTreeWidget->isSortingEnabled();
        OpenDatabasesTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = OpenDatabasesTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("DataTex", "Latex databases", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = OpenDatabasesTreeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("DataTex", "Document databases", nullptr));
        OpenDatabasesTreeWidget->setSortingEnabled(__sortingEnabled);

        label_12->setText(QCoreApplication::translate("DataTex", "Databases", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_10->setText(QString());
        CurrentBaseLabel_1->setText(QCoreApplication::translate("DataTex", "Database folder structure", nullptr));
        DatabaseStructureButton->setText(QString());
        DatabaseInfoButton->setText(QString());
        label_8->setText(QCoreApplication::translate("DataTex", "Sort by", nullptr));
        FilterFilesCountEntries->setPlaceholderText(QCoreApplication::translate("DataTex", "Filter", nullptr));
        CurrentBaseLabel->setText(QString());
        EnableSortingFiles->setText(QString());
        ClearFiltersFD->setText(QString());
        FilesTagFilter->setText(QString());
        ShowDescription->setText(QString());
        SectionLine->setText(QString());
        DateTimeEdit->setText(QString());
        NameLine->setText(QString());
        FieldLine->setText(QString());
        ExerciseTypeLine->setText(QString());
        label_46->setText(QCoreApplication::translate("DataTex", "File type", nullptr));
        label_49->setText(QCoreApplication::translate("DataTex", "Chapter", nullptr));
        FileTypeLine->setText(QString());
        label_48->setText(QCoreApplication::translate("DataTex", "Section", nullptr));
        label_54->setText(QCoreApplication::translate("DataTex", "Path", nullptr));
        PathLine->setText(QString());
        DifficultySpinBox->setText(QString());
        SolvedLine->setText(QString());
        DescriptionLine->setText(QString());
        label_56->setText(QCoreApplication::translate("DataTex", "Difficulty", nullptr));
        label_50->setText(QCoreApplication::translate("DataTex", "Exercise type", nullptr));
        label_34->setText(QCoreApplication::translate("DataTex", "Field", nullptr));
        label_59->setText(QCoreApplication::translate("DataTex", "Description", nullptr));
        ChapterLine->setText(QString());
        label_33->setText(QCoreApplication::translate("DataTex", "Id", nullptr));
        label_58->setText(QCoreApplication::translate("DataTex", "Solved - Prooved", nullptr));
        label_57->setText(QCoreApplication::translate("DataTex", "Date", nullptr));
        label_60->setText(QCoreApplication::translate("DataTex", "Solutions - Proofs", nullptr));
        SolutionsLine->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(MetadataTab), QCoreApplication::translate("DataTex", "Metadata", nullptr));
        label_9->setText(QCoreApplication::translate("DataTex", "Bib Entry", nullptr));
        addBibEntry->setText(QString());
        removeBibEnrty->setText(QString());
        NewBibEntry_CurrentFile->setText(QString());
        label_7->setText(QCoreApplication::translate("DataTex", "Bib Entries", nullptr));
        BibSourceCodeLabel->setText(QCoreApplication::translate("DataTex", "Source code", nullptr));
        ShowBibSourceFile->setText(QString());
        ShowBibSourceEntry->setText(QString());
        CopySourceCode->setText(QString());
        SaveSourceCode->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(BibliographyTab), QCoreApplication::translate("DataTex", "Bibliography", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ContentTab), QCoreApplication::translate("DataTex", "Source code/Pdf", nullptr));
        label->setText(QCoreApplication::translate("DataTex", "Documents that contain current file ", nullptr));
        DocDepContentPreview->setText(QString());
        DocDepPdfPreview->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(FileDependenciesTab), QCoreApplication::translate("DataTex", "File dependencies", nullptr));
        CurrentDocBaseLabel->setText(QString());
        EnableSortingDocs->setText(QString());
        DocumentsTagFilter->setText(QString());
        ClearFiltersDD->setText(QString());
        DatabaseFilesTabWidget->setTabText(DatabaseFilesTabWidget->indexOf(tab_2), QCoreApplication::translate("DataTex", "Content", nullptr));
        DatabaseFilesTabWidget->setTabText(DatabaseFilesTabWidget->indexOf(tab_3), QCoreApplication::translate("DataTex", "Pdf preview", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(FilesInDocumentTab), QCoreApplication::translate("DataTex", "Files", nullptr));
        label_6->setText(QCoreApplication::translate("DataTex", "Sub folder", nullptr));
        BasicFolder->setText(QString());
        DocumentNameLine->setText(QString());
        label_2->setText(QCoreApplication::translate("DataTex", "Doc Id", nullptr));
        label_13->setText(QCoreApplication::translate("DataTex", "Subsub folder", nullptr));
        label_4->setText(QCoreApplication::translate("DataTex", "Document type", nullptr));
        label_5->setText(QCoreApplication::translate("DataTex", "Basic folder", nullptr));
        label_15->setText(QCoreApplication::translate("DataTex", "Date", nullptr));
        label_14->setText(QCoreApplication::translate("DataTex", "Path", nullptr));
        DocumentType->setText(QString());
        SubFolder->setText(QString());
        SubsubFolder->setText(QString());
        DocumentPathLine->setText(QString());
        DocumentDateTimeEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("DataTex", "Document title", nullptr));
        DocumentTitleLine->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(MetadataTab_4), QCoreApplication::translate("DataTex", "Metadata", nullptr));
        label_22->setText(QCoreApplication::translate("DataTex", "Bib Entry", nullptr));
        addDocBibEntry->setText(QString());
        removeDocBibEnrty->setText(QString());
        NewBibEntry_CurrentDocument->setText(QString());
        label_10->setText(QCoreApplication::translate("DataTex", "File list", nullptr));

        const bool __sortingEnabled1 = BibPerFileTree->isSortingEnabled();
        BibPerFileTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem3 = BibPerFileTree->topLevelItem(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("DataTex", "Entries used in database files", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = BibPerFileTree->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("DataTex", "Individual entries", nullptr));
        BibPerFileTree->setSortingEnabled(__sortingEnabled1);

        label_11->setText(QCoreApplication::translate("DataTex", "Document bib file", nullptr));
        SaveDocBibContent->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(BibliographyTab_4), QCoreApplication::translate("DataTex", "Bibliography", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(ContentTab_4), QCoreApplication::translate("DataTex", "Source code/Pdf", nullptr));
        CurrentBaseBibLabel->setText(QString());
        EnableSortingBib->setText(QString());
        ClearFiltersB->setText(QString());
        label_21->setText(QCoreApplication::translate("DataTex", "Values", nullptr));
        label_20->setText(QCoreApplication::translate("DataTex", "Source code", nullptr));
        CopyBibSourceCode->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(MetadataTab_2), QCoreApplication::translate("DataTex", "Metadata", nullptr));
        CitationsLabel->setText(QCoreApplication::translate("DataTex", "Database files that contain : ", nullptr));
        CitationsLabel_2->setText(QCoreApplication::translate("DataTex", "File preview", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(ContentTab_2), QCoreApplication::translate("DataTex", "Entry dependencies", nullptr));
        CommandLabel->setText(QString());
        EnableSortingCommands->setText(QString());
        ClearFiltersCom->setText(QString());
        label_23->setText(QCoreApplication::translate("DataTex", "Values", nullptr));
        label_24->setText(QCoreApplication::translate("DataTex", "Source code", nullptr));
        CopyBibSourceCode_2->setText(QString());
        tabWidget_4->setTabText(tabWidget_4->indexOf(MetadataTab_3), QCoreApplication::translate("DataTex", "Metadata", nullptr));
        CommandLabel_2->setText(QCoreApplication::translate("DataTex", "Database files that contain : ", nullptr));
        CitationsLabel_4->setText(QCoreApplication::translate("DataTex", "File preview", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(ContentTab_3), QCoreApplication::translate("DataTex", "Entry dependencies", nullptr));
        CommandLabel_3->setText(QString());
        EnableSortingCommands_2->setText(QString());
        ClearFiltersCom_2->setText(QString());
        label_25->setText(QCoreApplication::translate("DataTex", "Values", nullptr));
        label_26->setText(QCoreApplication::translate("DataTex", "Source code", nullptr));
        CopyBibSourceCode_3->setText(QString());
        tabWidget_5->setTabText(tabWidget_5->indexOf(MetadataTab_5), QCoreApplication::translate("DataTex", "Metadata", nullptr));
        CommandLabel_4->setText(QCoreApplication::translate("DataTex", "Database files that contain : ", nullptr));
        CitationsLabel_5->setText(QCoreApplication::translate("DataTex", "File preview", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(ContentTab_5), QCoreApplication::translate("DataTex", "Entry dependencies", nullptr));
        CommandLabel_5->setText(QString());
        EnableSortingCommands_3->setText(QString());
        ClearFiltersCom_3->setText(QString());
        label_27->setText(QCoreApplication::translate("DataTex", "Values", nullptr));
        label_28->setText(QCoreApplication::translate("DataTex", "Source code", nullptr));
        CopyBibSourceCode_4->setText(QString());
        tabWidget_6->setTabText(tabWidget_6->indexOf(MetadataTab_6), QCoreApplication::translate("DataTex", "Metadata", nullptr));
        CommandLabel_6->setText(QCoreApplication::translate("DataTex", "Database files that contain : ", nullptr));
        CitationsLabel_6->setText(QCoreApplication::translate("DataTex", "File preview", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(ContentTab_6), QCoreApplication::translate("DataTex", "Entry dependencies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataTex: public Ui_DataTex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATATEX_H
