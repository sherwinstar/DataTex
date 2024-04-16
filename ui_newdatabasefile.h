/********************************************************************************
** Form generated from reading UI file 'newdatabasefile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDATABASEFILE_H
#define UI_NEWDATABASEFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_NewDatabaseFile
{
public:
    QGridLayout *gridLayout_19;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_17;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_9;
    QLabel *FileInfo;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QPushButton *addField;
    QPushButton *removeField;
    QListWidget *FieldTable;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_16;
    QSplitter *splitter_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_12;
    QLabel *label_39;
    QPushButton *addChapter;
    QPushButton *removeChapter;
    QListWidget *Chapters;
    QLineEdit *FilterChapters;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_13;
    QLabel *label_38;
    QPushButton *addSection;
    QPushButton *removeSection;
    QListWidget *Sections;
    QLineEdit *FilterSections;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_15;
    QPushButton *addExType;
    QPushButton *removeExType;
    QListWidget *SubSections;
    QLineEdit *FilterSubSections;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *UseExerciseType;
    QLabel *label_12;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_13;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    LatexTextWidget *NewFileContentText;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *DescriptionLine;
    QFrame *line;
    QLabel *label_7;
    QSpinBox *DifficultySpin;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *BuildBox;
    QComboBox *PreambleBox;
    QCheckBox *SaveSelectionsCheckBox;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_4;
    QLabel *SectionExerciseLabel;
    QTableView *ExerciseFileList;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_6;
    QLineEdit *FilePathLine;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *FileNameLine;
    QPushButton *BackButton;
    QPushButton *NextButton;
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_10;
    QLabel *label_2;
    QRadioButton *ExampleButton;
    QFrame *line_2;
    QFrame *line_4;
    QRadioButton *CorollaryButton;
    QRadioButton *TableButton;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *CombExerciseButton;
    QLabel *label_3;
    QRadioButton *SectionSubjectButton;
    QRadioButton *PropositionButton;
    QRadioButton *AxiomButton;
    QRadioButton *TheoremButton;
    QFrame *line_7;
    QRadioButton *SectionExerciseButton;
    QRadioButton *CombSubjectButton;
    QRadioButton *LemmButton;
    QLabel *label;
    QRadioButton *MethodButton;
    QRadioButton *FigureButton;
    QRadioButton *DefinitionButton;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QPushButton *addFileType;
    QPushButton *removeFileType;
    QButtonGroup *FileTypeGroup;

    void setupUi(QDialog *NewDatabaseFile)
    {
        if (NewDatabaseFile->objectName().isEmpty())
            NewDatabaseFile->setObjectName(QString::fromUtf8("NewDatabaseFile"));
        NewDatabaseFile->resize(1256, 628);
        gridLayout_19 = new QGridLayout(NewDatabaseFile);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        splitter_2 = new QSplitter(NewDatabaseFile);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_18 = new QGridLayout(layoutWidget);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        scrollArea_2 = new QScrollArea(layoutWidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollArea_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 367, 251));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        FileInfo = new QLabel(scrollAreaWidgetContents_2);
        FileInfo->setObjectName(QString::fromUtf8("FileInfo"));
        FileInfo->setTextFormat(Qt::MarkdownText);
        FileInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        FileInfo->setWordWrap(true);

        gridLayout_9->addWidget(FileInfo, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_17->addWidget(scrollArea_2, 0, 1, 2, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font;
        font.setBold(true);
        label_13->setFont(font);

        horizontalLayout_6->addWidget(label_13);

        addField = new QPushButton(layoutWidget);
        addField->setObjectName(QString::fromUtf8("addField"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addField->sizePolicy().hasHeightForWidth());
        addField->setSizePolicy(sizePolicy);
        addField->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add-button.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addField->setIcon(icon);
        addField->setFlat(true);

        horizontalLayout_6->addWidget(addField);

        removeField = new QPushButton(layoutWidget);
        removeField->setObjectName(QString::fromUtf8("removeField"));
        sizePolicy.setHeightForWidth(removeField->sizePolicy().hasHeightForWidth());
        removeField->setSizePolicy(sizePolicy);
        removeField->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeField->setIcon(icon1);
        removeField->setFlat(true);

        horizontalLayout_6->addWidget(removeField);


        gridLayout_17->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        FieldTable = new QListWidget(layoutWidget);
        FieldTable->setObjectName(QString::fromUtf8("FieldTable"));

        gridLayout_17->addWidget(FieldTable, 1, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_17, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_16 = new QGridLayout(page_3);
        gridLayout_16->setSpacing(2);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(page_3);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_12 = new QGridLayout(layoutWidget1);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(layoutWidget1);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font);

        gridLayout_12->addWidget(label_39, 0, 0, 1, 1);

        addChapter = new QPushButton(layoutWidget1);
        addChapter->setObjectName(QString::fromUtf8("addChapter"));
        sizePolicy.setHeightForWidth(addChapter->sizePolicy().hasHeightForWidth());
        addChapter->setSizePolicy(sizePolicy);
        addChapter->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        addChapter->setIcon(icon);
        addChapter->setFlat(true);

        gridLayout_12->addWidget(addChapter, 0, 1, 1, 1);

        removeChapter = new QPushButton(layoutWidget1);
        removeChapter->setObjectName(QString::fromUtf8("removeChapter"));
        sizePolicy.setHeightForWidth(removeChapter->sizePolicy().hasHeightForWidth());
        removeChapter->setSizePolicy(sizePolicy);
        removeChapter->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        removeChapter->setIcon(icon1);
        removeChapter->setFlat(true);

        gridLayout_12->addWidget(removeChapter, 0, 2, 1, 1);

        Chapters = new QListWidget(layoutWidget1);
        Chapters->setObjectName(QString::fromUtf8("Chapters"));
        Chapters->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_12->addWidget(Chapters, 2, 0, 1, 3);

        FilterChapters = new QLineEdit(layoutWidget1);
        FilterChapters->setObjectName(QString::fromUtf8("FilterChapters"));

        gridLayout_12->addWidget(FilterChapters, 1, 0, 1, 3);

        splitter_3->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        gridLayout_13 = new QGridLayout(layoutWidget2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_38 = new QLabel(layoutWidget2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setFont(font);

        gridLayout_13->addWidget(label_38, 0, 0, 1, 1);

        addSection = new QPushButton(layoutWidget2);
        addSection->setObjectName(QString::fromUtf8("addSection"));
        sizePolicy.setHeightForWidth(addSection->sizePolicy().hasHeightForWidth());
        addSection->setSizePolicy(sizePolicy);
        addSection->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        addSection->setIcon(icon);
        addSection->setFlat(true);

        gridLayout_13->addWidget(addSection, 0, 1, 1, 1);

        removeSection = new QPushButton(layoutWidget2);
        removeSection->setObjectName(QString::fromUtf8("removeSection"));
        sizePolicy.setHeightForWidth(removeSection->sizePolicy().hasHeightForWidth());
        removeSection->setSizePolicy(sizePolicy);
        removeSection->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        removeSection->setIcon(icon1);
        removeSection->setFlat(true);

        gridLayout_13->addWidget(removeSection, 0, 2, 1, 1);

        Sections = new QListWidget(layoutWidget2);
        Sections->setObjectName(QString::fromUtf8("Sections"));
        Sections->setStyleSheet(QString::fromUtf8(""));
        Sections->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_13->addWidget(Sections, 2, 0, 1, 3);

        FilterSections = new QLineEdit(layoutWidget2);
        FilterSections->setObjectName(QString::fromUtf8("FilterSections"));

        gridLayout_13->addWidget(FilterSections, 1, 0, 1, 3);

        splitter_3->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        gridLayout_15 = new QGridLayout(layoutWidget3);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        addExType = new QPushButton(layoutWidget3);
        addExType->setObjectName(QString::fromUtf8("addExType"));
        sizePolicy.setHeightForWidth(addExType->sizePolicy().hasHeightForWidth());
        addExType->setSizePolicy(sizePolicy);
        addExType->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        addExType->setIcon(icon);
        addExType->setFlat(true);

        gridLayout_15->addWidget(addExType, 0, 1, 1, 1);

        removeExType = new QPushButton(layoutWidget3);
        removeExType->setObjectName(QString::fromUtf8("removeExType"));
        sizePolicy.setHeightForWidth(removeExType->sizePolicy().hasHeightForWidth());
        removeExType->setSizePolicy(sizePolicy);
        removeExType->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        removeExType->setIcon(icon1);
        removeExType->setFlat(true);

        gridLayout_15->addWidget(removeExType, 0, 2, 1, 1);

        SubSections = new QListWidget(layoutWidget3);
        SubSections->setObjectName(QString::fromUtf8("SubSections"));
        SubSections->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_15->addWidget(SubSections, 2, 0, 1, 3);

        FilterSubSections = new QLineEdit(layoutWidget3);
        FilterSubSections->setObjectName(QString::fromUtf8("FilterSubSections"));

        gridLayout_15->addWidget(FilterSubSections, 1, 0, 1, 3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        UseExerciseType = new QCheckBox(layoutWidget3);
        UseExerciseType->setObjectName(QString::fromUtf8("UseExerciseType"));
        sizePolicy.setHeightForWidth(UseExerciseType->sizePolicy().hasHeightForWidth());
        UseExerciseType->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(UseExerciseType);

        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setBold(true);
        label_12->setFont(font1);

        horizontalLayout_14->addWidget(label_12);


        gridLayout_15->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        splitter_3->addWidget(layoutWidget3);

        gridLayout_16->addWidget(splitter_3, 0, 0, 1, 1);

        label_41 = new QLabel(page_3);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font);

        gridLayout_16->addWidget(label_41, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));

        gridLayout_16->addLayout(horizontalLayout_13, 2, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout_18->addWidget(stackedWidget, 1, 0, 1, 1);

        splitter_2->addWidget(layoutWidget);
        layoutWidget4 = new QWidget(splitter_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(layoutWidget4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(2, 2, 2, 3);
        NewFileContentText = new LatexTextWidget(tab);
        NewFileContentText->setObjectName(QString::fromUtf8("NewFileContentText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NewFileContentText->sizePolicy().hasHeightForWidth());
        NewFileContentText->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(NewFileContentText, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        DescriptionLine = new QLineEdit(tab);
        DescriptionLine->setObjectName(QString::fromUtf8("DescriptionLine"));

        horizontalLayout_7->addWidget(DescriptionLine);

        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        DifficultySpin = new QSpinBox(tab);
        DifficultySpin->setObjectName(QString::fromUtf8("DifficultySpin"));
        DifficultySpin->setMinimum(1);

        horizontalLayout_7->addWidget(DifficultySpin);


        gridLayout_7->addLayout(horizontalLayout_7, 2, 0, 1, 2);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_7->addWidget(label_5, 0, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        BuildBox = new QComboBox(tab);
        BuildBox->setObjectName(QString::fromUtf8("BuildBox"));

        gridLayout_7->addWidget(BuildBox, 1, 1, 1, 1);

        PreambleBox = new QComboBox(tab);
        PreambleBox->setObjectName(QString::fromUtf8("PreambleBox"));

        gridLayout_7->addWidget(PreambleBox, 1, 0, 1, 1);

        SaveSelectionsCheckBox = new QCheckBox(tab);
        SaveSelectionsCheckBox->setObjectName(QString::fromUtf8("SaveSelectionsCheckBox"));

        gridLayout_7->addWidget(SaveSelectionsCheckBox, 3, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        splitter = new QSplitter(tab_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget5 = new QWidget(splitter);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        SectionExerciseLabel = new QLabel(layoutWidget5);
        SectionExerciseLabel->setObjectName(QString::fromUtf8("SectionExerciseLabel"));
        SectionExerciseLabel->setFont(font);

        verticalLayout_4->addWidget(SectionExerciseLabel);

        ExerciseFileList = new QTableView(layoutWidget5);
        ExerciseFileList->setObjectName(QString::fromUtf8("ExerciseFileList"));
        ExerciseFileList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ExerciseFileList->setSelectionMode(QAbstractItemView::SingleSelection);
        ExerciseFileList->setSelectionBehavior(QAbstractItemView::SelectRows);
        ExerciseFileList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        ExerciseFileList->setSortingEnabled(true);

        verticalLayout_4->addWidget(ExerciseFileList);

        splitter->addWidget(layoutWidget5);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(verticalLayoutWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        splitter_2->addWidget(layoutWidget4);

        gridLayout_19->addWidget(splitter_2, 0, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        FilePathLine = new QLineEdit(NewDatabaseFile);
        FilePathLine->setObjectName(QString::fromUtf8("FilePathLine"));
        FilePathLine->setEnabled(true);
        FilePathLine->setReadOnly(true);

        gridLayout_6->addWidget(FilePathLine, 0, 1, 1, 1);

        label_9 = new QLabel(NewDatabaseFile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(NewDatabaseFile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_2->addWidget(label_10);

        FileNameLine = new QLineEdit(NewDatabaseFile);
        FileNameLine->setObjectName(QString::fromUtf8("FileNameLine"));
        FileNameLine->setReadOnly(true);

        horizontalLayout_2->addWidget(FileNameLine);

        BackButton = new QPushButton(NewDatabaseFile);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));

        horizontalLayout_2->addWidget(BackButton);

        NextButton = new QPushButton(NewDatabaseFile);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));

        horizontalLayout_2->addWidget(NextButton);

        buttonBox = new QDialogButtonBox(NewDatabaseFile);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 2);


        gridLayout_19->addLayout(gridLayout_6, 1, 0, 1, 2);

        scrollArea = new QScrollArea(NewDatabaseFile);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMinimumSize(QSize(220, 0));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 218, 542));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(2);
        label_2 = new QLabel(scrollAreaWidgetContents_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_2, 13, 0, 1, 1);

        ExampleButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup = new QButtonGroup(NewDatabaseFile);
        FileTypeGroup->setObjectName(QString::fromUtf8("FileTypeGroup"));
        FileTypeGroup->addButton(ExampleButton);
        ExampleButton->setObjectName(QString::fromUtf8("ExampleButton"));
        sizePolicy.setHeightForWidth(ExampleButton->sizePolicy().hasHeightForWidth());
        ExampleButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(ExampleButton, 22, 0, 1, 1);

        line_2 = new QFrame(scrollAreaWidgetContents_7);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_2, 1, 0, 1, 1);

        line_4 = new QFrame(scrollAreaWidgetContents_7);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_4, 14, 0, 1, 1);

        CorollaryButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(CorollaryButton);
        CorollaryButton->setObjectName(QString::fromUtf8("CorollaryButton"));
        sizePolicy.setHeightForWidth(CorollaryButton->sizePolicy().hasHeightForWidth());
        CorollaryButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(CorollaryButton, 9, 0, 1, 1);

        TableButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(TableButton);
        TableButton->setObjectName(QString::fromUtf8("TableButton"));
        sizePolicy.setHeightForWidth(TableButton->sizePolicy().hasHeightForWidth());
        TableButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(TableButton, 24, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_2, 25, 0, 1, 1);

        CombExerciseButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(CombExerciseButton);
        CombExerciseButton->setObjectName(QString::fromUtf8("CombExerciseButton"));
        sizePolicy.setHeightForWidth(CombExerciseButton->sizePolicy().hasHeightForWidth());
        CombExerciseButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(CombExerciseButton, 17, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_3, 19, 0, 1, 1);

        SectionSubjectButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(SectionSubjectButton);
        SectionSubjectButton->setObjectName(QString::fromUtf8("SectionSubjectButton"));
        sizePolicy.setHeightForWidth(SectionSubjectButton->sizePolicy().hasHeightForWidth());
        SectionSubjectButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(SectionSubjectButton, 16, 0, 1, 1);

        PropositionButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(PropositionButton);
        PropositionButton->setObjectName(QString::fromUtf8("PropositionButton"));
        sizePolicy.setHeightForWidth(PropositionButton->sizePolicy().hasHeightForWidth());
        PropositionButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(PropositionButton, 7, 0, 1, 1);

        AxiomButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(AxiomButton);
        AxiomButton->setObjectName(QString::fromUtf8("AxiomButton"));
        sizePolicy.setHeightForWidth(AxiomButton->sizePolicy().hasHeightForWidth());
        AxiomButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(AxiomButton, 10, 0, 1, 1);

        TheoremButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(TheoremButton);
        TheoremButton->setObjectName(QString::fromUtf8("TheoremButton"));
        sizePolicy.setHeightForWidth(TheoremButton->sizePolicy().hasHeightForWidth());
        TheoremButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(TheoremButton, 5, 0, 2, 1);

        line_7 = new QFrame(scrollAreaWidgetContents_7);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_7, 20, 0, 1, 1);

        SectionExerciseButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(SectionExerciseButton);
        SectionExerciseButton->setObjectName(QString::fromUtf8("SectionExerciseButton"));
        sizePolicy.setHeightForWidth(SectionExerciseButton->sizePolicy().hasHeightForWidth());
        SectionExerciseButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(SectionExerciseButton, 15, 0, 1, 1);

        CombSubjectButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(CombSubjectButton);
        CombSubjectButton->setObjectName(QString::fromUtf8("CombSubjectButton"));
        sizePolicy.setHeightForWidth(CombSubjectButton->sizePolicy().hasHeightForWidth());
        CombSubjectButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(CombSubjectButton, 18, 0, 1, 1);

        LemmButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(LemmButton);
        LemmButton->setObjectName(QString::fromUtf8("LemmButton"));
        sizePolicy.setHeightForWidth(LemmButton->sizePolicy().hasHeightForWidth());
        LemmButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(LemmButton, 8, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents_7);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label, 2, 0, 1, 1);

        MethodButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(MethodButton);
        MethodButton->setObjectName(QString::fromUtf8("MethodButton"));
        sizePolicy.setHeightForWidth(MethodButton->sizePolicy().hasHeightForWidth());
        MethodButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(MethodButton, 21, 0, 1, 1);

        FigureButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(FigureButton);
        FigureButton->setObjectName(QString::fromUtf8("FigureButton"));
        sizePolicy.setHeightForWidth(FigureButton->sizePolicy().hasHeightForWidth());
        FigureButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(FigureButton, 23, 0, 1, 1);

        DefinitionButton = new QRadioButton(scrollAreaWidgetContents_7);
        FileTypeGroup->addButton(DefinitionButton);
        DefinitionButton->setObjectName(QString::fromUtf8("DefinitionButton"));
        sizePolicy.setHeightForWidth(DefinitionButton->sizePolicy().hasHeightForWidth());
        DefinitionButton->setSizePolicy(sizePolicy);

        gridLayout_10->addWidget(DefinitionButton, 4, 0, 1, 1);

        line_3 = new QFrame(scrollAreaWidgetContents_7);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_3, 3, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(scrollAreaWidgetContents_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setFont(font);

        horizontalLayout_8->addWidget(label_8);

        addFileType = new QPushButton(scrollAreaWidgetContents_7);
        addFileType->setObjectName(QString::fromUtf8("addFileType"));
        sizePolicy.setHeightForWidth(addFileType->sizePolicy().hasHeightForWidth());
        addFileType->setSizePolicy(sizePolicy);
        addFileType->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        addFileType->setIcon(icon);
        addFileType->setFlat(true);

        horizontalLayout_8->addWidget(addFileType);

        removeFileType = new QPushButton(scrollAreaWidgetContents_7);
        removeFileType->setObjectName(QString::fromUtf8("removeFileType"));
        sizePolicy.setHeightForWidth(removeFileType->sizePolicy().hasHeightForWidth());
        removeFileType->setSizePolicy(sizePolicy);
        removeFileType->setStyleSheet(QString::fromUtf8("padding: 4px;"));
        removeFileType->setIcon(icon1);
        removeFileType->setFlat(true);

        horizontalLayout_8->addWidget(removeFileType);


        gridLayout_10->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_10);

        scrollArea->setWidget(scrollAreaWidgetContents_7);

        gridLayout_19->addWidget(scrollArea, 0, 0, 1, 1);

        QWidget::setTabOrder(DefinitionButton, TheoremButton);
        QWidget::setTabOrder(TheoremButton, SectionExerciseButton);
        QWidget::setTabOrder(SectionExerciseButton, SectionSubjectButton);
        QWidget::setTabOrder(SectionSubjectButton, CombExerciseButton);
        QWidget::setTabOrder(CombExerciseButton, CombSubjectButton);
        QWidget::setTabOrder(CombSubjectButton, MethodButton);
        QWidget::setTabOrder(MethodButton, ExampleButton);
        QWidget::setTabOrder(ExampleButton, tabWidget);
        QWidget::setTabOrder(tabWidget, FieldTable);
        QWidget::setTabOrder(FieldTable, NewFileContentText);
        QWidget::setTabOrder(NewFileContentText, ExerciseFileList);
        QWidget::setTabOrder(ExerciseFileList, FileNameLine);
        QWidget::setTabOrder(FileNameLine, FilePathLine);

        retranslateUi(NewDatabaseFile);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewDatabaseFile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewDatabaseFile, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewDatabaseFile);
    } // setupUi

    void retranslateUi(QDialog *NewDatabaseFile)
    {
        NewDatabaseFile->setWindowTitle(QCoreApplication::translate("NewDatabaseFile", "NewDatabaseFile", nullptr));
        FileInfo->setText(QString());
        label_13->setText(QCoreApplication::translate("NewDatabaseFile", "Field", nullptr));
        addField->setText(QString());
        removeField->setText(QString());
        label_39->setText(QCoreApplication::translate("NewDatabaseFile", "Chapters", nullptr));
        addChapter->setText(QString());
        removeChapter->setText(QString());
        FilterChapters->setPlaceholderText(QCoreApplication::translate("NewDatabaseFile", "Filter...", nullptr));
        label_38->setText(QCoreApplication::translate("NewDatabaseFile", "Sections", nullptr));
        addSection->setText(QString());
        removeSection->setText(QString());
        FilterSections->setPlaceholderText(QCoreApplication::translate("NewDatabaseFile", "Filter...", nullptr));
        addExType->setText(QString());
        removeExType->setText(QString());
        FilterSubSections->setPlaceholderText(QCoreApplication::translate("NewDatabaseFile", "Filter...", nullptr));
        UseExerciseType->setText(QString());
        label_12->setText(QCoreApplication::translate("NewDatabaseFile", "Subsections", nullptr));
        label_41->setText(QCoreApplication::translate("NewDatabaseFile", "Custom tags", nullptr));
        DescriptionLine->setPlaceholderText(QCoreApplication::translate("NewDatabaseFile", "Description...", nullptr));
        label_7->setText(QCoreApplication::translate("NewDatabaseFile", "Difficulty", nullptr));
        label_5->setText(QCoreApplication::translate("NewDatabaseFile", "Build command", nullptr));
        label_4->setText(QCoreApplication::translate("NewDatabaseFile", "Preamble", nullptr));
        SaveSelectionsCheckBox->setText(QCoreApplication::translate("NewDatabaseFile", "Remember current selections", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("NewDatabaseFile", "New file content", nullptr));
        SectionExerciseLabel->setText(QCoreApplication::translate("NewDatabaseFile", "File table", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("NewDatabaseFile", "Files Preview", nullptr));
        label_9->setText(QCoreApplication::translate("NewDatabaseFile", "File path", nullptr));
        label_10->setText(QCoreApplication::translate("NewDatabaseFile", "File name", nullptr));
        FileNameLine->setText(QString());
        BackButton->setText(QCoreApplication::translate("NewDatabaseFile", "Back", nullptr));
        NextButton->setText(QCoreApplication::translate("NewDatabaseFile", "Next", nullptr));
        label_2->setText(QCoreApplication::translate("NewDatabaseFile", "Exercises", nullptr));
        ExampleButton->setText(QCoreApplication::translate("NewDatabaseFile", "Example", nullptr));
        CorollaryButton->setText(QCoreApplication::translate("NewDatabaseFile", "Corollary", nullptr));
        TableButton->setText(QCoreApplication::translate("NewDatabaseFile", "Table", nullptr));
        CombExerciseButton->setText(QCoreApplication::translate("NewDatabaseFile", "MultiSection Exercise", nullptr));
        label_3->setText(QCoreApplication::translate("NewDatabaseFile", "Misc.", nullptr));
        SectionSubjectButton->setText(QCoreApplication::translate("NewDatabaseFile", "Section Exam Subject", nullptr));
        PropositionButton->setText(QCoreApplication::translate("NewDatabaseFile", "Proposition", nullptr));
        AxiomButton->setText(QCoreApplication::translate("NewDatabaseFile", "Axiom", nullptr));
        TheoremButton->setText(QCoreApplication::translate("NewDatabaseFile", "Theorem", nullptr));
        SectionExerciseButton->setText(QCoreApplication::translate("NewDatabaseFile", "Section Exercise", nullptr));
        CombSubjectButton->setText(QCoreApplication::translate("NewDatabaseFile", "MultiSection Exam Subject", nullptr));
        LemmButton->setText(QCoreApplication::translate("NewDatabaseFile", "Lemma", nullptr));
        label->setText(QCoreApplication::translate("NewDatabaseFile", "Theory", nullptr));
        MethodButton->setText(QCoreApplication::translate("NewDatabaseFile", "Method", nullptr));
        FigureButton->setText(QCoreApplication::translate("NewDatabaseFile", "Figure", nullptr));
        DefinitionButton->setText(QCoreApplication::translate("NewDatabaseFile", "Definition", nullptr));
        label_8->setText(QCoreApplication::translate("NewDatabaseFile", "Select a file type", nullptr));
        addFileType->setText(QString());
        removeFileType->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewDatabaseFile: public Ui_NewDatabaseFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDATABASEFILE_H
