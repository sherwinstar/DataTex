/********************************************************************************
** Form generated from reading UI file 'datatables.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATATABLES_H
#define UI_DATATABLES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataTables
{
public:
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *warrningLabel;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *FilesDBCombo;
    QLabel *label_2;
    QComboBox *DocsDBCombo;
    QTabWidget *tabWidget;
    QWidget *FieldTab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *RemFieldButton;
    QTableWidget *FieldTable;
    QPushButton *EditFieldButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *FieldNameLine;
    QLineEdit *FieldPKLine;
    QPushButton *AddFieldButton;
    QWidget *ChapterTab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *EditChapterButton;
    QComboBox *ComboFields_ChapterTab;
    QPushButton *RemoveChapterButton;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *ChapterTable;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *ChapterNameLine;
    QLineEdit *ChapterPKLine;
    QPushButton *AddChapterButton;
    QWidget *SectionTab;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QPushButton *EditSectionButton;
    QComboBox *ComboFields_SectionTab;
    QLabel *label_4;
    QLabel *Level3Combo2Name;
    QComboBox *ComboChapters_SectionTab;
    QPushButton *RemoveSectionButton;
    QSpacerItem *verticalSpacer_3;
    QTableWidget *SectionTable;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *SectionNameLine;
    QLineEdit *SectionPKLine;
    QPushButton *AddSectionButton;
    QWidget *ExerciseTypeTab;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QPushButton *EditExerciseTypeButton;
    QTableWidget *ExerciseTypeTable;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_4;
    QComboBox *ComboChapters_ExerciseTypeTab;
    QComboBox *ComboFields_ExerciseTypeTab;
    QComboBox *ComboSections_ExerciseTypeTab;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *RemoveExerciseTypeButton;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *ExerciseTypeNameLine;
    QLineEdit *ExerciseTypePKLine;
    QPushButton *AddExerciseTypeButton;
    QWidget *DocumentTypeTab;
    QGridLayout *gridLayout_9;
    QSplitter *splitter;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_14;
    QTableWidget *FileTypeTable;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QPushButton *AddFileTypeButton;
    QPushButton *RemFileTypeButton;
    QPushButton *EditFileTypeButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *AddDocumentTypeButton;
    QPushButton *RemDocumentTypeButton;
    QPushButton *EditDocumentTypeButton;
    QTableWidget *DocumentTypeTable;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_13;
    QTableWidget *TagTable;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QPushButton *AddTag;
    QPushButton *RemTag;
    QPushButton *EditTag;

    void setupUi(QDialog *DataTables)
    {
        if (DataTables->objectName().isEmpty())
            DataTables->setObjectName(QString::fromUtf8("DataTables"));
        DataTables->resize(816, 426);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        DataTables->setWindowIcon(icon);
        gridLayout_11 = new QGridLayout(DataTables);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        warrningLabel = new QLabel(DataTables);
        warrningLabel->setObjectName(QString::fromUtf8("warrningLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(warrningLabel->sizePolicy().hasHeightForWidth());
        warrningLabel->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(warrningLabel);

        buttonBox = new QDialogButtonBox(DataTables);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        gridLayout_11->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(DataTables);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_5);

        FilesDBCombo = new QComboBox(DataTables);
        FilesDBCombo->setObjectName(QString::fromUtf8("FilesDBCombo"));

        horizontalLayout_4->addWidget(FilesDBCombo);

        label_2 = new QLabel(DataTables);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_2);

        DocsDBCombo = new QComboBox(DataTables);
        DocsDBCombo->setObjectName(QString::fromUtf8("DocsDBCombo"));

        horizontalLayout_4->addWidget(DocsDBCombo);


        gridLayout_11->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidget = new QTabWidget(DataTables);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        FieldTab = new QWidget();
        FieldTab->setObjectName(QString::fromUtf8("FieldTab"));
        gridLayout_2 = new QGridLayout(FieldTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        RemFieldButton = new QPushButton(FieldTab);
        RemFieldButton->setObjectName(QString::fromUtf8("RemFieldButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(RemFieldButton->sizePolicy().hasHeightForWidth());
        RemFieldButton->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RemFieldButton->setIcon(icon1);

        gridLayout->addWidget(RemFieldButton, 1, 1, 1, 1);

        FieldTable = new QTableWidget(FieldTab);
        FieldTable->setObjectName(QString::fromUtf8("FieldTable"));
        FieldTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        FieldTable->setAlternatingRowColors(true);
        FieldTable->setSelectionMode(QAbstractItemView::SingleSelection);
        FieldTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        FieldTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout->addWidget(FieldTable, 0, 0, 4, 1);

        EditFieldButton = new QPushButton(FieldTab);
        EditFieldButton->setObjectName(QString::fromUtf8("EditFieldButton"));
        sizePolicy3.setHeightForWidth(EditFieldButton->sizePolicy().hasHeightForWidth());
        EditFieldButton->setSizePolicy(sizePolicy3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/document-edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EditFieldButton->setIcon(icon2);

        gridLayout->addWidget(EditFieldButton, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        FieldNameLine = new QLineEdit(FieldTab);
        FieldNameLine->setObjectName(QString::fromUtf8("FieldNameLine"));

        horizontalLayout_2->addWidget(FieldNameLine);

        FieldPKLine = new QLineEdit(FieldTab);
        FieldPKLine->setObjectName(QString::fromUtf8("FieldPKLine"));

        horizontalLayout_2->addWidget(FieldPKLine);

        AddFieldButton = new QPushButton(FieldTab);
        AddFieldButton->setObjectName(QString::fromUtf8("AddFieldButton"));
        sizePolicy3.setHeightForWidth(AddFieldButton->sizePolicy().hasHeightForWidth());
        AddFieldButton->setSizePolicy(sizePolicy3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddFieldButton->setIcon(icon3);

        horizontalLayout_2->addWidget(AddFieldButton);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(FieldTab, QString());
        ChapterTab = new QWidget();
        ChapterTab->setObjectName(QString::fromUtf8("ChapterTab"));
        gridLayout_4 = new QGridLayout(ChapterTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(ChapterTab);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        EditChapterButton = new QPushButton(ChapterTab);
        EditChapterButton->setObjectName(QString::fromUtf8("EditChapterButton"));
        sizePolicy3.setHeightForWidth(EditChapterButton->sizePolicy().hasHeightForWidth());
        EditChapterButton->setSizePolicy(sizePolicy3);
        EditChapterButton->setIcon(icon2);

        gridLayout_3->addWidget(EditChapterButton, 4, 1, 1, 1);

        ComboFields_ChapterTab = new QComboBox(ChapterTab);
        ComboFields_ChapterTab->setObjectName(QString::fromUtf8("ComboFields_ChapterTab"));

        gridLayout_3->addWidget(ComboFields_ChapterTab, 1, 0, 1, 1);

        RemoveChapterButton = new QPushButton(ChapterTab);
        RemoveChapterButton->setObjectName(QString::fromUtf8("RemoveChapterButton"));
        sizePolicy3.setHeightForWidth(RemoveChapterButton->sizePolicy().hasHeightForWidth());
        RemoveChapterButton->setSizePolicy(sizePolicy3);
        RemoveChapterButton->setIcon(icon1);

        gridLayout_3->addWidget(RemoveChapterButton, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 5, 1, 1, 1);

        ChapterTable = new QTableWidget(ChapterTab);
        ChapterTable->setObjectName(QString::fromUtf8("ChapterTable"));
        ChapterTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ChapterTable->setAlternatingRowColors(true);
        ChapterTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ChapterTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ChapterTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_3->addWidget(ChapterTable, 2, 0, 4, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ChapterNameLine = new QLineEdit(ChapterTab);
        ChapterNameLine->setObjectName(QString::fromUtf8("ChapterNameLine"));

        horizontalLayout_8->addWidget(ChapterNameLine);

        ChapterPKLine = new QLineEdit(ChapterTab);
        ChapterPKLine->setObjectName(QString::fromUtf8("ChapterPKLine"));

        horizontalLayout_8->addWidget(ChapterPKLine);

        AddChapterButton = new QPushButton(ChapterTab);
        AddChapterButton->setObjectName(QString::fromUtf8("AddChapterButton"));
        sizePolicy3.setHeightForWidth(AddChapterButton->sizePolicy().hasHeightForWidth());
        AddChapterButton->setSizePolicy(sizePolicy3);
        AddChapterButton->setIcon(icon3);

        horizontalLayout_8->addWidget(AddChapterButton);


        gridLayout_4->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        tabWidget->addTab(ChapterTab, QString());
        SectionTab = new QWidget();
        SectionTab->setObjectName(QString::fromUtf8("SectionTab"));
        gridLayout_6 = new QGridLayout(SectionTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        EditSectionButton = new QPushButton(SectionTab);
        EditSectionButton->setObjectName(QString::fromUtf8("EditSectionButton"));
        sizePolicy3.setHeightForWidth(EditSectionButton->sizePolicy().hasHeightForWidth());
        EditSectionButton->setSizePolicy(sizePolicy3);
        EditSectionButton->setIcon(icon2);

        gridLayout_5->addWidget(EditSectionButton, 4, 2, 1, 1);

        ComboFields_SectionTab = new QComboBox(SectionTab);
        ComboFields_SectionTab->setObjectName(QString::fromUtf8("ComboFields_SectionTab"));

        gridLayout_5->addWidget(ComboFields_SectionTab, 1, 0, 1, 1);

        label_4 = new QLabel(SectionTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        Level3Combo2Name = new QLabel(SectionTab);
        Level3Combo2Name->setObjectName(QString::fromUtf8("Level3Combo2Name"));
        sizePolicy1.setHeightForWidth(Level3Combo2Name->sizePolicy().hasHeightForWidth());
        Level3Combo2Name->setSizePolicy(sizePolicy1);
        Level3Combo2Name->setFont(font);

        gridLayout_5->addWidget(Level3Combo2Name, 0, 1, 1, 1);

        ComboChapters_SectionTab = new QComboBox(SectionTab);
        ComboChapters_SectionTab->setObjectName(QString::fromUtf8("ComboChapters_SectionTab"));

        gridLayout_5->addWidget(ComboChapters_SectionTab, 1, 1, 1, 1);

        RemoveSectionButton = new QPushButton(SectionTab);
        RemoveSectionButton->setObjectName(QString::fromUtf8("RemoveSectionButton"));
        sizePolicy3.setHeightForWidth(RemoveSectionButton->sizePolicy().hasHeightForWidth());
        RemoveSectionButton->setSizePolicy(sizePolicy3);
        RemoveSectionButton->setIcon(icon1);

        gridLayout_5->addWidget(RemoveSectionButton, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 5, 2, 1, 1);

        SectionTable = new QTableWidget(SectionTab);
        SectionTable->setObjectName(QString::fromUtf8("SectionTable"));
        SectionTable->setAlternatingRowColors(true);
        SectionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        SectionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        SectionTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_5->addWidget(SectionTable, 2, 0, 4, 2);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        SectionNameLine = new QLineEdit(SectionTab);
        SectionNameLine->setObjectName(QString::fromUtf8("SectionNameLine"));

        horizontalLayout_9->addWidget(SectionNameLine);

        SectionPKLine = new QLineEdit(SectionTab);
        SectionPKLine->setObjectName(QString::fromUtf8("SectionPKLine"));

        horizontalLayout_9->addWidget(SectionPKLine);

        AddSectionButton = new QPushButton(SectionTab);
        AddSectionButton->setObjectName(QString::fromUtf8("AddSectionButton"));
        sizePolicy3.setHeightForWidth(AddSectionButton->sizePolicy().hasHeightForWidth());
        AddSectionButton->setSizePolicy(sizePolicy3);
        AddSectionButton->setIcon(icon3);

        horizontalLayout_9->addWidget(AddSectionButton);


        gridLayout_6->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        tabWidget->addTab(SectionTab, QString());
        ExerciseTypeTab = new QWidget();
        ExerciseTypeTab->setObjectName(QString::fromUtf8("ExerciseTypeTab"));
        gridLayout_8 = new QGridLayout(ExerciseTypeTab);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        EditExerciseTypeButton = new QPushButton(ExerciseTypeTab);
        EditExerciseTypeButton->setObjectName(QString::fromUtf8("EditExerciseTypeButton"));
        sizePolicy3.setHeightForWidth(EditExerciseTypeButton->sizePolicy().hasHeightForWidth());
        EditExerciseTypeButton->setSizePolicy(sizePolicy3);
        EditExerciseTypeButton->setIcon(icon2);

        gridLayout_7->addWidget(EditExerciseTypeButton, 4, 3, 1, 1);

        ExerciseTypeTable = new QTableWidget(ExerciseTypeTab);
        ExerciseTypeTable->setObjectName(QString::fromUtf8("ExerciseTypeTable"));
        ExerciseTypeTable->setAlternatingRowColors(true);
        ExerciseTypeTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ExerciseTypeTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ExerciseTypeTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_7->addWidget(ExerciseTypeTable, 2, 0, 4, 3);

        label_10 = new QLabel(ExerciseTypeTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_7->addWidget(label_10, 0, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 5, 3, 1, 1);

        ComboChapters_ExerciseTypeTab = new QComboBox(ExerciseTypeTab);
        ComboChapters_ExerciseTypeTab->setObjectName(QString::fromUtf8("ComboChapters_ExerciseTypeTab"));

        gridLayout_7->addWidget(ComboChapters_ExerciseTypeTab, 1, 1, 1, 1);

        ComboFields_ExerciseTypeTab = new QComboBox(ExerciseTypeTab);
        ComboFields_ExerciseTypeTab->setObjectName(QString::fromUtf8("ComboFields_ExerciseTypeTab"));

        gridLayout_7->addWidget(ComboFields_ExerciseTypeTab, 1, 0, 1, 1);

        ComboSections_ExerciseTypeTab = new QComboBox(ExerciseTypeTab);
        ComboSections_ExerciseTypeTab->setObjectName(QString::fromUtf8("ComboSections_ExerciseTypeTab"));

        gridLayout_7->addWidget(ComboSections_ExerciseTypeTab, 1, 2, 1, 1);

        label_11 = new QLabel(ExerciseTypeTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_7->addWidget(label_11, 0, 1, 1, 1);

        label_12 = new QLabel(ExerciseTypeTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout_7->addWidget(label_12, 0, 0, 1, 1);

        RemoveExerciseTypeButton = new QPushButton(ExerciseTypeTab);
        RemoveExerciseTypeButton->setObjectName(QString::fromUtf8("RemoveExerciseTypeButton"));
        sizePolicy3.setHeightForWidth(RemoveExerciseTypeButton->sizePolicy().hasHeightForWidth());
        RemoveExerciseTypeButton->setSizePolicy(sizePolicy3);
        RemoveExerciseTypeButton->setIcon(icon1);

        gridLayout_7->addWidget(RemoveExerciseTypeButton, 3, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        ExerciseTypeNameLine = new QLineEdit(ExerciseTypeTab);
        ExerciseTypeNameLine->setObjectName(QString::fromUtf8("ExerciseTypeNameLine"));

        horizontalLayout_10->addWidget(ExerciseTypeNameLine);

        ExerciseTypePKLine = new QLineEdit(ExerciseTypeTab);
        ExerciseTypePKLine->setObjectName(QString::fromUtf8("ExerciseTypePKLine"));

        horizontalLayout_10->addWidget(ExerciseTypePKLine);

        AddExerciseTypeButton = new QPushButton(ExerciseTypeTab);
        AddExerciseTypeButton->setObjectName(QString::fromUtf8("AddExerciseTypeButton"));
        sizePolicy3.setHeightForWidth(AddExerciseTypeButton->sizePolicy().hasHeightForWidth());
        AddExerciseTypeButton->setSizePolicy(sizePolicy3);
        AddExerciseTypeButton->setIcon(icon3);

        horizontalLayout_10->addWidget(AddExerciseTypeButton);


        gridLayout_8->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        tabWidget->addTab(ExerciseTypeTab, QString());
        DocumentTypeTab = new QWidget();
        DocumentTypeTab->setObjectName(QString::fromUtf8("DocumentTypeTab"));
        gridLayout_9 = new QGridLayout(DocumentTypeTab);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        splitter = new QSplitter(DocumentTypeTab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy4);
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget_6 = new QWidget(splitter);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        gridLayout_14 = new QGridLayout(layoutWidget_6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        FileTypeTable = new QTableWidget(layoutWidget_6);
        FileTypeTable->setObjectName(QString::fromUtf8("FileTypeTable"));
        sizePolicy4.setHeightForWidth(FileTypeTable->sizePolicy().hasHeightForWidth());
        FileTypeTable->setSizePolicy(sizePolicy4);
        FileTypeTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        FileTypeTable->setAlternatingRowColors(true);
        FileTypeTable->setSelectionMode(QAbstractItemView::SingleSelection);
        FileTypeTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        FileTypeTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_14->addWidget(FileTypeTable, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(layoutWidget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        AddFileTypeButton = new QPushButton(layoutWidget_6);
        AddFileTypeButton->setObjectName(QString::fromUtf8("AddFileTypeButton"));
        sizePolicy3.setHeightForWidth(AddFileTypeButton->sizePolicy().hasHeightForWidth());
        AddFileTypeButton->setSizePolicy(sizePolicy3);
        AddFileTypeButton->setIcon(icon3);

        horizontalLayout_6->addWidget(AddFileTypeButton);

        RemFileTypeButton = new QPushButton(layoutWidget_6);
        RemFileTypeButton->setObjectName(QString::fromUtf8("RemFileTypeButton"));
        sizePolicy3.setHeightForWidth(RemFileTypeButton->sizePolicy().hasHeightForWidth());
        RemFileTypeButton->setSizePolicy(sizePolicy3);
        RemFileTypeButton->setIcon(icon1);

        horizontalLayout_6->addWidget(RemFileTypeButton);

        EditFileTypeButton = new QPushButton(layoutWidget_6);
        EditFileTypeButton->setObjectName(QString::fromUtf8("EditFileTypeButton"));
        sizePolicy3.setHeightForWidth(EditFileTypeButton->sizePolicy().hasHeightForWidth());
        EditFileTypeButton->setSizePolicy(sizePolicy3);
        EditFileTypeButton->setIcon(icon2);

        horizontalLayout_6->addWidget(EditFileTypeButton);


        gridLayout_14->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget_6);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_12 = new QGridLayout(layoutWidget);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        AddDocumentTypeButton = new QPushButton(layoutWidget);
        AddDocumentTypeButton->setObjectName(QString::fromUtf8("AddDocumentTypeButton"));
        sizePolicy3.setHeightForWidth(AddDocumentTypeButton->sizePolicy().hasHeightForWidth());
        AddDocumentTypeButton->setSizePolicy(sizePolicy3);
        AddDocumentTypeButton->setIcon(icon3);

        horizontalLayout->addWidget(AddDocumentTypeButton);

        RemDocumentTypeButton = new QPushButton(layoutWidget);
        RemDocumentTypeButton->setObjectName(QString::fromUtf8("RemDocumentTypeButton"));
        sizePolicy3.setHeightForWidth(RemDocumentTypeButton->sizePolicy().hasHeightForWidth());
        RemDocumentTypeButton->setSizePolicy(sizePolicy3);
        RemDocumentTypeButton->setIcon(icon1);

        horizontalLayout->addWidget(RemDocumentTypeButton);

        EditDocumentTypeButton = new QPushButton(layoutWidget);
        EditDocumentTypeButton->setObjectName(QString::fromUtf8("EditDocumentTypeButton"));
        sizePolicy3.setHeightForWidth(EditDocumentTypeButton->sizePolicy().hasHeightForWidth());
        EditDocumentTypeButton->setSizePolicy(sizePolicy3);
        EditDocumentTypeButton->setIcon(icon2);

        horizontalLayout->addWidget(EditDocumentTypeButton);


        gridLayout_12->addLayout(horizontalLayout, 0, 0, 1, 1);

        DocumentTypeTable = new QTableWidget(layoutWidget);
        DocumentTypeTable->setObjectName(QString::fromUtf8("DocumentTypeTable"));
        sizePolicy4.setHeightForWidth(DocumentTypeTable->sizePolicy().hasHeightForWidth());
        DocumentTypeTable->setSizePolicy(sizePolicy4);
        DocumentTypeTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        DocumentTypeTable->setAlternatingRowColors(true);
        DocumentTypeTable->setSelectionMode(QAbstractItemView::SingleSelection);
        DocumentTypeTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        DocumentTypeTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_12->addWidget(DocumentTypeTable, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_13 = new QGridLayout(layoutWidget1);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        TagTable = new QTableWidget(layoutWidget1);
        TagTable->setObjectName(QString::fromUtf8("TagTable"));
        sizePolicy4.setHeightForWidth(TagTable->sizePolicy().hasHeightForWidth());
        TagTable->setSizePolicy(sizePolicy4);
        TagTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TagTable->setAlternatingRowColors(true);
        TagTable->setSelectionMode(QAbstractItemView::SingleSelection);
        TagTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        TagTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_13->addWidget(TagTable, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        AddTag = new QPushButton(layoutWidget1);
        AddTag->setObjectName(QString::fromUtf8("AddTag"));
        sizePolicy3.setHeightForWidth(AddTag->sizePolicy().hasHeightForWidth());
        AddTag->setSizePolicy(sizePolicy3);
        AddTag->setIcon(icon3);

        horizontalLayout_5->addWidget(AddTag);

        RemTag = new QPushButton(layoutWidget1);
        RemTag->setObjectName(QString::fromUtf8("RemTag"));
        sizePolicy3.setHeightForWidth(RemTag->sizePolicy().hasHeightForWidth());
        RemTag->setSizePolicy(sizePolicy3);
        RemTag->setIcon(icon1);

        horizontalLayout_5->addWidget(RemTag);

        EditTag = new QPushButton(layoutWidget1);
        EditTag->setObjectName(QString::fromUtf8("EditTag"));
        sizePolicy3.setHeightForWidth(EditTag->sizePolicy().hasHeightForWidth());
        EditTag->setSizePolicy(sizePolicy3);
        EditTag->setIcon(icon2);

        horizontalLayout_5->addWidget(EditTag);


        gridLayout_13->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget1);

        gridLayout_9->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(DocumentTypeTab, QString());

        gridLayout_11->addWidget(tabWidget, 1, 0, 1, 1);


        retranslateUi(DataTables);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataTables);
    } // setupUi

    void retranslateUi(QDialog *DataTables)
    {
        DataTables->setWindowTitle(QCoreApplication::translate("DataTables", "Database entries", nullptr));
        warrningLabel->setText(QString());
        label_5->setText(QCoreApplication::translate("DataTables", "Files databases", nullptr));
        label_2->setText(QCoreApplication::translate("DataTables", "Document databases", nullptr));
        RemFieldButton->setText(QString());
        EditFieldButton->setText(QString());
        FieldNameLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Field name...", nullptr));
        FieldPKLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Primary key...", nullptr));
        AddFieldButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(FieldTab), QCoreApplication::translate("DataTables", "Fields", nullptr));
        label->setText(QCoreApplication::translate("DataTables", "Fields", nullptr));
        EditChapterButton->setText(QString());
        RemoveChapterButton->setText(QString());
        ChapterNameLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Chapter name...", nullptr));
        ChapterPKLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Primary key...", nullptr));
        AddChapterButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(ChapterTab), QCoreApplication::translate("DataTables", "Chapters", nullptr));
        EditSectionButton->setText(QString());
        label_4->setText(QCoreApplication::translate("DataTables", "Fields", nullptr));
        Level3Combo2Name->setText(QCoreApplication::translate("DataTables", "Chapters", nullptr));
        RemoveSectionButton->setText(QString());
        SectionNameLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Section name...", nullptr));
        SectionPKLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Primary key...", nullptr));
        AddSectionButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(SectionTab), QCoreApplication::translate("DataTables", "Sections", nullptr));
        EditExerciseTypeButton->setText(QString());
        label_10->setText(QCoreApplication::translate("DataTables", "Sections", nullptr));
        label_11->setText(QCoreApplication::translate("DataTables", "Chapters", nullptr));
        label_12->setText(QCoreApplication::translate("DataTables", "Fields", nullptr));
        RemoveExerciseTypeButton->setText(QString());
        ExerciseTypeNameLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Exercise type name...", nullptr));
        ExerciseTypePKLine->setPlaceholderText(QCoreApplication::translate("DataTables", "Primary key...", nullptr));
        AddExerciseTypeButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(ExerciseTypeTab), QCoreApplication::translate("DataTables", "Exercise types", nullptr));
        label_3->setText(QCoreApplication::translate("DataTables", "File types", nullptr));
        AddFileTypeButton->setText(QString());
        RemFileTypeButton->setText(QString());
        EditFileTypeButton->setText(QString());
        label_6->setText(QCoreApplication::translate("DataTables", "Document types", nullptr));
        AddDocumentTypeButton->setText(QString());
        RemDocumentTypeButton->setText(QString());
        EditDocumentTypeButton->setText(QString());
        label_8->setText(QCoreApplication::translate("DataTables", "Custom tags", nullptr));
        AddTag->setText(QString());
        RemTag->setText(QString());
        EditTag->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(DocumentTypeTab), QCoreApplication::translate("DataTables", "File Types / Document types / Custom Tags", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataTables: public Ui_DataTables {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATATABLES_H
