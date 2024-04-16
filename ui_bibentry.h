/********************************************************************************
** Form generated from reading UI file 'bibentry.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBENTRY_H
#define UI_BIBENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibEntry
{
public:
    QGridLayout *gridLayout_7;
    QLabel *label_29;
    QPushButton *RemoveBibDocTypeButton;
    QComboBox *DocumentTypeCombo;
    QLineEdit *CitationKeyLine;
    QLabel *label_28;
    QLabel *label_30;
    QPushButton *AddBibDocTypeButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *NewAuthorButton;
    QPushButton *AddAuthorButton;
    QListWidget *AuthorsList;
    QPushButton *RemoveAuthorButton;
    QPushButton *DeleteAuthorButton;
    QComboBox *AuthorsCombo;
    QLabel *label_54;
    QLineEdit *NewAuthorLine;
    QLabel *AuthorWarningLabel;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QPushButton *AddEditorButton;
    QPushButton *RemoveEditorButton;
    QListWidget *EditorsList;
    QPushButton *DeleteEditorButton;
    QPushButton *NewEditorButton;
    QComboBox *EditorCombo;
    QLabel *label_55;
    QLineEdit *NewEditorLine;
    QLabel *EditorWarningLabel;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QListWidget *TranslatorList;
    QPushButton *RemoveTranslatorButton;
    QPushButton *DeleteTranslatorButton;
    QComboBox *TranslatorCombo;
    QPushButton *AddTranslatorButton;
    QPushButton *NewTranslatorButton;
    QLabel *label_56;
    QLineEdit *NewTranslatorLine;
    QLabel *TranslatorWarningLabel;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout;
    QLineEdit *ISBNLine;
    QLineEdit *PagesLine;
    QLineEdit *PublisherLine;
    QLineEdit *VolumeLine;
    QLineEdit *JournalLine;
    QLineEdit *SubtitleLine;
    QLabel *label_5;
    QLineEdit *NumberLine;
    QLabel *label_6;
    QLabel *label_20;
    QLabel *label_3;
    QLineEdit *SeriesLine;
    QLineEdit *ChapterLine;
    QLabel *label_4;
    QLabel *label_23;
    QLineEdit *LocationLine;
    QLabel *label_32;
    QLineEdit *OrganizationLine;
    QLineEdit *URLLine;
    QLabel *label_19;
    QLineEdit *DOILine;
    QLabel *label_10;
    QLabel *label_24;
    QLineEdit *AddressLine;
    QLabel *label_27;
    QLabel *label_21;
    QLineEdit *SchoolLine;
    QLineEdit *InstitutionLine;
    QLineEdit *YearLine;
    QLineEdit *LanguageLine;
    QLabel *label_14;
    QLineEdit *ISSNLine;
    QLabel *label_26;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_22;
    QLineEdit *EditionLine;
    QLabel *label;
    QLineEdit *MonthLine;
    QLabel *label_2;
    QLabel *label_31;
    QLabel *label_9;
    QLabel *label_25;
    QLineEdit *IssueLine;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QSplitter *splitter_2;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_8;
    QLabel *label_11;
    QLineEdit *KeyLine;
    QLabel *label_12;
    QLineEdit *NoteLine;
    QLabel *label_13;
    QComboBox *CrossReferenceCombo;
    QLabel *label_51;
    QTextEdit *AbstractTextEdit;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_9;
    QLabel *label_50;
    QLabel *label_53;
    QLineEdit *CustomIdLine;
    QPushButton *AddCustomFieldButton;
    QLabel *label_52;
    QLineEdit *CustomValueLine;
    QPushButton *RemoveCustomFieldButton;
    QTableWidget *CustomFieldsTable;
    QWidget *tab_5;
    QGridLayout *gridLayout_11;
    QTextBrowser *SourceCodeText;
    QDialogButtonBox *buttonBox;
    QLineEdit *TitleLine;
    QLabel *warningLabel;

    void setupUi(QDialog *BibEntry)
    {
        if (BibEntry->objectName().isEmpty())
            BibEntry->setObjectName(QString::fromUtf8("BibEntry"));
        BibEntry->resize(827, 549);
        gridLayout_7 = new QGridLayout(BibEntry);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_29 = new QLabel(BibEntry);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_29, 0, 2, 1, 1);

        RemoveBibDocTypeButton = new QPushButton(BibEntry);
        RemoveBibDocTypeButton->setObjectName(QString::fromUtf8("RemoveBibDocTypeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RemoveBibDocTypeButton->sizePolicy().hasHeightForWidth());
        RemoveBibDocTypeButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveBibDocTypeButton->setIcon(icon);
        RemoveBibDocTypeButton->setFlat(true);

        gridLayout_7->addWidget(RemoveBibDocTypeButton, 0, 5, 1, 1);

        DocumentTypeCombo = new QComboBox(BibEntry);
        DocumentTypeCombo->setObjectName(QString::fromUtf8("DocumentTypeCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DocumentTypeCombo->sizePolicy().hasHeightForWidth());
        DocumentTypeCombo->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(DocumentTypeCombo, 0, 3, 1, 1);

        CitationKeyLine = new QLineEdit(BibEntry);
        CitationKeyLine->setObjectName(QString::fromUtf8("CitationKeyLine"));
        CitationKeyLine->setClearButtonEnabled(true);

        gridLayout_7->addWidget(CitationKeyLine, 0, 1, 1, 1);

        label_28 = new QLabel(BibEntry);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_28, 0, 0, 1, 1);

        label_30 = new QLabel(BibEntry);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_30, 1, 0, 1, 1);

        AddBibDocTypeButton = new QPushButton(BibEntry);
        AddBibDocTypeButton->setObjectName(QString::fromUtf8("AddBibDocTypeButton"));
        sizePolicy.setHeightForWidth(AddBibDocTypeButton->sizePolicy().hasHeightForWidth());
        AddBibDocTypeButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddBibDocTypeButton->setIcon(icon1);
        AddBibDocTypeButton->setFlat(true);

        gridLayout_7->addWidget(AddBibDocTypeButton, 0, 4, 1, 1);

        tabWidget = new QTabWidget(BibEntry);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        splitter = new QSplitter(tab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        NewAuthorButton = new QPushButton(layoutWidget);
        NewAuthorButton->setObjectName(QString::fromUtf8("NewAuthorButton"));
        sizePolicy.setHeightForWidth(NewAuthorButton->sizePolicy().hasHeightForWidth());
        NewAuthorButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/list-add-user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        NewAuthorButton->setIcon(icon2);
        NewAuthorButton->setIconSize(QSize(20, 20));
        NewAuthorButton->setFlat(true);

        gridLayout_3->addWidget(NewAuthorButton, 1, 3, 1, 1);

        AddAuthorButton = new QPushButton(layoutWidget);
        AddAuthorButton->setObjectName(QString::fromUtf8("AddAuthorButton"));
        sizePolicy.setHeightForWidth(AddAuthorButton->sizePolicy().hasHeightForWidth());
        AddAuthorButton->setSizePolicy(sizePolicy);
        AddAuthorButton->setIcon(icon1);
        AddAuthorButton->setFlat(true);

        gridLayout_3->addWidget(AddAuthorButton, 2, 3, 1, 1);

        AuthorsList = new QListWidget(layoutWidget);
        AuthorsList->setObjectName(QString::fromUtf8("AuthorsList"));
        AuthorsList->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(AuthorsList, 3, 0, 1, 5);

        RemoveAuthorButton = new QPushButton(layoutWidget);
        RemoveAuthorButton->setObjectName(QString::fromUtf8("RemoveAuthorButton"));
        sizePolicy.setHeightForWidth(RemoveAuthorButton->sizePolicy().hasHeightForWidth());
        RemoveAuthorButton->setSizePolicy(sizePolicy);
        RemoveAuthorButton->setIcon(icon);
        RemoveAuthorButton->setFlat(true);

        gridLayout_3->addWidget(RemoveAuthorButton, 2, 4, 1, 1);

        DeleteAuthorButton = new QPushButton(layoutWidget);
        DeleteAuthorButton->setObjectName(QString::fromUtf8("DeleteAuthorButton"));
        sizePolicy.setHeightForWidth(DeleteAuthorButton->sizePolicy().hasHeightForWidth());
        DeleteAuthorButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/list-remove-user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteAuthorButton->setIcon(icon3);
        DeleteAuthorButton->setIconSize(QSize(20, 20));
        DeleteAuthorButton->setFlat(true);

        gridLayout_3->addWidget(DeleteAuthorButton, 1, 4, 1, 1);

        AuthorsCombo = new QComboBox(layoutWidget);
        AuthorsCombo->setObjectName(QString::fromUtf8("AuthorsCombo"));
        AuthorsCombo->setEditable(false);

        gridLayout_3->addWidget(AuthorsCombo, 2, 0, 1, 3);

        label_54 = new QLabel(layoutWidget);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_54->sizePolicy().hasHeightForWidth());
        label_54->setSizePolicy(sizePolicy2);
        label_54->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_54, 0, 0, 1, 2);

        NewAuthorLine = new QLineEdit(layoutWidget);
        NewAuthorLine->setObjectName(QString::fromUtf8("NewAuthorLine"));
        NewAuthorLine->setClearButtonEnabled(true);

        gridLayout_3->addWidget(NewAuthorLine, 1, 0, 1, 3);

        AuthorWarningLabel = new QLabel(layoutWidget);
        AuthorWarningLabel->setObjectName(QString::fromUtf8("AuthorWarningLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(AuthorWarningLabel->sizePolicy().hasHeightForWidth());
        AuthorWarningLabel->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(AuthorWarningLabel, 0, 2, 1, 3);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        AddEditorButton = new QPushButton(layoutWidget1);
        AddEditorButton->setObjectName(QString::fromUtf8("AddEditorButton"));
        sizePolicy.setHeightForWidth(AddEditorButton->sizePolicy().hasHeightForWidth());
        AddEditorButton->setSizePolicy(sizePolicy);
        AddEditorButton->setIcon(icon1);
        AddEditorButton->setFlat(true);

        gridLayout_4->addWidget(AddEditorButton, 2, 3, 1, 1);

        RemoveEditorButton = new QPushButton(layoutWidget1);
        RemoveEditorButton->setObjectName(QString::fromUtf8("RemoveEditorButton"));
        sizePolicy.setHeightForWidth(RemoveEditorButton->sizePolicy().hasHeightForWidth());
        RemoveEditorButton->setSizePolicy(sizePolicy);
        RemoveEditorButton->setIcon(icon);
        RemoveEditorButton->setFlat(true);

        gridLayout_4->addWidget(RemoveEditorButton, 2, 4, 1, 1);

        EditorsList = new QListWidget(layoutWidget1);
        EditorsList->setObjectName(QString::fromUtf8("EditorsList"));

        gridLayout_4->addWidget(EditorsList, 3, 0, 1, 5);

        DeleteEditorButton = new QPushButton(layoutWidget1);
        DeleteEditorButton->setObjectName(QString::fromUtf8("DeleteEditorButton"));
        sizePolicy.setHeightForWidth(DeleteEditorButton->sizePolicy().hasHeightForWidth());
        DeleteEditorButton->setSizePolicy(sizePolicy);
        DeleteEditorButton->setIcon(icon3);
        DeleteEditorButton->setIconSize(QSize(20, 20));
        DeleteEditorButton->setFlat(true);

        gridLayout_4->addWidget(DeleteEditorButton, 1, 4, 1, 1);

        NewEditorButton = new QPushButton(layoutWidget1);
        NewEditorButton->setObjectName(QString::fromUtf8("NewEditorButton"));
        sizePolicy.setHeightForWidth(NewEditorButton->sizePolicy().hasHeightForWidth());
        NewEditorButton->setSizePolicy(sizePolicy);
        NewEditorButton->setIcon(icon2);
        NewEditorButton->setIconSize(QSize(20, 20));
        NewEditorButton->setFlat(true);

        gridLayout_4->addWidget(NewEditorButton, 1, 3, 1, 1);

        EditorCombo = new QComboBox(layoutWidget1);
        EditorCombo->setObjectName(QString::fromUtf8("EditorCombo"));
        EditorCombo->setEditable(false);

        gridLayout_4->addWidget(EditorCombo, 2, 0, 1, 3);

        label_55 = new QLabel(layoutWidget1);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        sizePolicy2.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy2);
        label_55->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_55, 0, 0, 1, 2);

        NewEditorLine = new QLineEdit(layoutWidget1);
        NewEditorLine->setObjectName(QString::fromUtf8("NewEditorLine"));
        NewEditorLine->setClearButtonEnabled(true);

        gridLayout_4->addWidget(NewEditorLine, 1, 0, 1, 3);

        EditorWarningLabel = new QLabel(layoutWidget1);
        EditorWarningLabel->setObjectName(QString::fromUtf8("EditorWarningLabel"));
        sizePolicy3.setHeightForWidth(EditorWarningLabel->sizePolicy().hasHeightForWidth());
        EditorWarningLabel->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(EditorWarningLabel, 0, 2, 1, 3);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        TranslatorList = new QListWidget(layoutWidget2);
        TranslatorList->setObjectName(QString::fromUtf8("TranslatorList"));

        gridLayout_5->addWidget(TranslatorList, 3, 0, 1, 5);

        RemoveTranslatorButton = new QPushButton(layoutWidget2);
        RemoveTranslatorButton->setObjectName(QString::fromUtf8("RemoveTranslatorButton"));
        sizePolicy.setHeightForWidth(RemoveTranslatorButton->sizePolicy().hasHeightForWidth());
        RemoveTranslatorButton->setSizePolicy(sizePolicy);
        RemoveTranslatorButton->setIcon(icon);
        RemoveTranslatorButton->setFlat(true);

        gridLayout_5->addWidget(RemoveTranslatorButton, 2, 4, 1, 1);

        DeleteTranslatorButton = new QPushButton(layoutWidget2);
        DeleteTranslatorButton->setObjectName(QString::fromUtf8("DeleteTranslatorButton"));
        sizePolicy.setHeightForWidth(DeleteTranslatorButton->sizePolicy().hasHeightForWidth());
        DeleteTranslatorButton->setSizePolicy(sizePolicy);
        DeleteTranslatorButton->setIcon(icon3);
        DeleteTranslatorButton->setIconSize(QSize(20, 20));
        DeleteTranslatorButton->setFlat(true);

        gridLayout_5->addWidget(DeleteTranslatorButton, 1, 4, 1, 1);

        TranslatorCombo = new QComboBox(layoutWidget2);
        TranslatorCombo->setObjectName(QString::fromUtf8("TranslatorCombo"));
        TranslatorCombo->setEditable(false);

        gridLayout_5->addWidget(TranslatorCombo, 2, 0, 1, 3);

        AddTranslatorButton = new QPushButton(layoutWidget2);
        AddTranslatorButton->setObjectName(QString::fromUtf8("AddTranslatorButton"));
        sizePolicy.setHeightForWidth(AddTranslatorButton->sizePolicy().hasHeightForWidth());
        AddTranslatorButton->setSizePolicy(sizePolicy);
        AddTranslatorButton->setIcon(icon1);
        AddTranslatorButton->setFlat(true);

        gridLayout_5->addWidget(AddTranslatorButton, 2, 3, 1, 1);

        NewTranslatorButton = new QPushButton(layoutWidget2);
        NewTranslatorButton->setObjectName(QString::fromUtf8("NewTranslatorButton"));
        sizePolicy.setHeightForWidth(NewTranslatorButton->sizePolicy().hasHeightForWidth());
        NewTranslatorButton->setSizePolicy(sizePolicy);
        NewTranslatorButton->setIcon(icon2);
        NewTranslatorButton->setIconSize(QSize(20, 20));
        NewTranslatorButton->setFlat(true);

        gridLayout_5->addWidget(NewTranslatorButton, 1, 3, 1, 1);

        label_56 = new QLabel(layoutWidget2);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_56, 0, 0, 1, 2);

        NewTranslatorLine = new QLineEdit(layoutWidget2);
        NewTranslatorLine->setObjectName(QString::fromUtf8("NewTranslatorLine"));
        NewTranslatorLine->setClearButtonEnabled(true);

        gridLayout_5->addWidget(NewTranslatorLine, 1, 0, 1, 3);

        TranslatorWarningLabel = new QLabel(layoutWidget2);
        TranslatorWarningLabel->setObjectName(QString::fromUtf8("TranslatorWarningLabel"));
        sizePolicy3.setHeightForWidth(TranslatorWarningLabel->sizePolicy().hasHeightForWidth());
        TranslatorWarningLabel->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(TranslatorWarningLabel, 0, 2, 1, 3);

        splitter->addWidget(layoutWidget2);

        gridLayout_6->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QString::fromUtf8("tabWidgetPage1"));
        gridLayout = new QGridLayout(tabWidgetPage1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(9, 0, -1, 0);
        ISBNLine = new QLineEdit(tabWidgetPage1);
        ISBNLine->setObjectName(QString::fromUtf8("ISBNLine"));
        ISBNLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ISBNLine->setClearButtonEnabled(true);

        gridLayout->addWidget(ISBNLine, 6, 1, 1, 1);

        PagesLine = new QLineEdit(tabWidgetPage1);
        PagesLine->setObjectName(QString::fromUtf8("PagesLine"));
        PagesLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PagesLine->setClearButtonEnabled(true);

        gridLayout->addWidget(PagesLine, 8, 1, 1, 1);

        PublisherLine = new QLineEdit(tabWidgetPage1);
        PublisherLine->setObjectName(QString::fromUtf8("PublisherLine"));
        PublisherLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PublisherLine->setClearButtonEnabled(true);

        gridLayout->addWidget(PublisherLine, 1, 3, 1, 1);

        VolumeLine = new QLineEdit(tabWidgetPage1);
        VolumeLine->setObjectName(QString::fromUtf8("VolumeLine"));
        VolumeLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        VolumeLine->setClearButtonEnabled(true);

        gridLayout->addWidget(VolumeLine, 1, 1, 1, 1);

        JournalLine = new QLineEdit(tabWidgetPage1);
        JournalLine->setObjectName(QString::fromUtf8("JournalLine"));
        JournalLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        JournalLine->setClearButtonEnabled(true);

        gridLayout->addWidget(JournalLine, 0, 1, 1, 1);

        SubtitleLine = new QLineEdit(tabWidgetPage1);
        SubtitleLine->setObjectName(QString::fromUtf8("SubtitleLine"));
        SubtitleLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SubtitleLine->setClearButtonEnabled(true);

        gridLayout->addWidget(SubtitleLine, 10, 1, 1, 1);

        label_5 = new QLabel(tabWidgetPage1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        NumberLine = new QLineEdit(tabWidgetPage1);
        NumberLine->setObjectName(QString::fromUtf8("NumberLine"));
        NumberLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        NumberLine->setClearButtonEnabled(true);

        gridLayout->addWidget(NumberLine, 5, 1, 1, 1);

        label_6 = new QLabel(tabWidgetPage1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_20 = new QLabel(tabWidgetPage1);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 3, 2, 1, 1);

        label_3 = new QLabel(tabWidgetPage1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        SeriesLine = new QLineEdit(tabWidgetPage1);
        SeriesLine->setObjectName(QString::fromUtf8("SeriesLine"));
        SeriesLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SeriesLine->setClearButtonEnabled(true);

        gridLayout->addWidget(SeriesLine, 2, 1, 1, 1);

        ChapterLine = new QLineEdit(tabWidgetPage1);
        ChapterLine->setObjectName(QString::fromUtf8("ChapterLine"));
        ChapterLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ChapterLine->setClearButtonEnabled(true);

        gridLayout->addWidget(ChapterLine, 9, 1, 1, 1);

        label_4 = new QLabel(tabWidgetPage1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_23 = new QLabel(tabWidgetPage1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_23, 4, 2, 1, 1);

        LocationLine = new QLineEdit(tabWidgetPage1);
        LocationLine->setObjectName(QString::fromUtf8("LocationLine"));
        LocationLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LocationLine->setClearButtonEnabled(true);

        gridLayout->addWidget(LocationLine, 9, 3, 1, 1);

        label_32 = new QLabel(tabWidgetPage1);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_32, 0, 2, 1, 1);

        OrganizationLine = new QLineEdit(tabWidgetPage1);
        OrganizationLine->setObjectName(QString::fromUtf8("OrganizationLine"));
        OrganizationLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        OrganizationLine->setClearButtonEnabled(true);

        gridLayout->addWidget(OrganizationLine, 10, 3, 1, 1);

        URLLine = new QLineEdit(tabWidgetPage1);
        URLLine->setObjectName(QString::fromUtf8("URLLine"));
        URLLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        URLLine->setClearButtonEnabled(true);

        gridLayout->addWidget(URLLine, 7, 3, 1, 1);

        label_19 = new QLabel(tabWidgetPage1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 9, 2, 1, 1);

        DOILine = new QLineEdit(tabWidgetPage1);
        DOILine->setObjectName(QString::fromUtf8("DOILine"));
        DOILine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DOILine->setClearButtonEnabled(true);

        gridLayout->addWidget(DOILine, 6, 3, 1, 1);

        label_10 = new QLabel(tabWidgetPage1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        label_24 = new QLabel(tabWidgetPage1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 5, 2, 1, 1);

        AddressLine = new QLineEdit(tabWidgetPage1);
        AddressLine->setObjectName(QString::fromUtf8("AddressLine"));
        AddressLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AddressLine->setClearButtonEnabled(true);

        gridLayout->addWidget(AddressLine, 8, 3, 1, 1);

        label_27 = new QLabel(tabWidgetPage1);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_27, 7, 2, 1, 1);

        label_21 = new QLabel(tabWidgetPage1);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 6, 2, 1, 1);

        SchoolLine = new QLineEdit(tabWidgetPage1);
        SchoolLine->setObjectName(QString::fromUtf8("SchoolLine"));
        SchoolLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SchoolLine->setClearButtonEnabled(true);

        gridLayout->addWidget(SchoolLine, 3, 3, 1, 1);

        InstitutionLine = new QLineEdit(tabWidgetPage1);
        InstitutionLine->setObjectName(QString::fromUtf8("InstitutionLine"));
        InstitutionLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        InstitutionLine->setClearButtonEnabled(true);

        gridLayout->addWidget(InstitutionLine, 4, 3, 1, 1);

        YearLine = new QLineEdit(tabWidgetPage1);
        YearLine->setObjectName(QString::fromUtf8("YearLine"));
        YearLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        YearLine->setClearButtonEnabled(true);

        gridLayout->addWidget(YearLine, 4, 1, 1, 1);

        LanguageLine = new QLineEdit(tabWidgetPage1);
        LanguageLine->setObjectName(QString::fromUtf8("LanguageLine"));
        LanguageLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LanguageLine->setClearButtonEnabled(true);

        gridLayout->addWidget(LanguageLine, 5, 3, 1, 1);

        label_14 = new QLabel(tabWidgetPage1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 9, 0, 1, 1);

        ISSNLine = new QLineEdit(tabWidgetPage1);
        ISSNLine->setObjectName(QString::fromUtf8("ISSNLine"));
        ISSNLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ISSNLine->setClearButtonEnabled(true);

        gridLayout->addWidget(ISSNLine, 7, 1, 1, 1);

        label_26 = new QLabel(tabWidgetPage1);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 8, 2, 1, 1);

        label_8 = new QLabel(tabWidgetPage1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_7 = new QLabel(tabWidgetPage1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_22 = new QLabel(tabWidgetPage1);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 2, 2, 1, 1);

        EditionLine = new QLineEdit(tabWidgetPage1);
        EditionLine->setObjectName(QString::fromUtf8("EditionLine"));
        EditionLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        EditionLine->setClearButtonEnabled(true);

        gridLayout->addWidget(EditionLine, 2, 3, 1, 1);

        label = new QLabel(tabWidgetPage1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        MonthLine = new QLineEdit(tabWidgetPage1);
        MonthLine->setObjectName(QString::fromUtf8("MonthLine"));
        MonthLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MonthLine->setClearButtonEnabled(true);

        gridLayout->addWidget(MonthLine, 3, 1, 1, 1);

        label_2 = new QLabel(tabWidgetPage1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_31 = new QLabel(tabWidgetPage1);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_31, 10, 2, 1, 1);

        label_9 = new QLabel(tabWidgetPage1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_25 = new QLabel(tabWidgetPage1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_25, 1, 2, 1, 1);

        IssueLine = new QLineEdit(tabWidgetPage1);
        IssueLine->setObjectName(QString::fromUtf8("IssueLine"));
        IssueLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        IssueLine->setClearButtonEnabled(true);

        gridLayout->addWidget(IssueLine, 0, 3, 1, 1);

        tabWidget->addTab(tabWidgetPage1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        splitter_2 = new QSplitter(tab_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setHandleWidth(8);
        layoutWidget3 = new QWidget(splitter_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        gridLayout_8 = new QGridLayout(layoutWidget3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_11, 0, 0, 1, 1);

        KeyLine = new QLineEdit(layoutWidget3);
        KeyLine->setObjectName(QString::fromUtf8("KeyLine"));
        KeyLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(KeyLine, 0, 1, 1, 1);

        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_12, 1, 0, 1, 1);

        NoteLine = new QLineEdit(layoutWidget3);
        NoteLine->setObjectName(QString::fromUtf8("NoteLine"));
        NoteLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(NoteLine, 1, 1, 1, 1);

        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_13, 2, 0, 1, 1);

        CrossReferenceCombo = new QComboBox(layoutWidget3);
        CrossReferenceCombo->setObjectName(QString::fromUtf8("CrossReferenceCombo"));

        gridLayout_8->addWidget(CrossReferenceCombo, 2, 1, 1, 1);

        label_51 = new QLabel(layoutWidget3);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_51, 3, 0, 1, 1);

        AbstractTextEdit = new QTextEdit(layoutWidget3);
        AbstractTextEdit->setObjectName(QString::fromUtf8("AbstractTextEdit"));

        gridLayout_8->addWidget(AbstractTextEdit, 4, 0, 1, 2);

        splitter_2->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        gridLayout_9 = new QGridLayout(layoutWidget4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_50 = new QLabel(layoutWidget4);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_50, 0, 0, 1, 2);

        label_53 = new QLabel(layoutWidget4);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_53, 1, 0, 1, 1);

        CustomIdLine = new QLineEdit(layoutWidget4);
        CustomIdLine->setObjectName(QString::fromUtf8("CustomIdLine"));
        CustomIdLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(CustomIdLine, 1, 1, 1, 1);

        AddCustomFieldButton = new QPushButton(layoutWidget4);
        AddCustomFieldButton->setObjectName(QString::fromUtf8("AddCustomFieldButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AddCustomFieldButton->sizePolicy().hasHeightForWidth());
        AddCustomFieldButton->setSizePolicy(sizePolicy4);

        gridLayout_9->addWidget(AddCustomFieldButton, 1, 2, 1, 1);

        label_52 = new QLabel(layoutWidget4);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_52, 2, 0, 1, 1);

        CustomValueLine = new QLineEdit(layoutWidget4);
        CustomValueLine->setObjectName(QString::fromUtf8("CustomValueLine"));
        CustomValueLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(CustomValueLine, 2, 1, 1, 1);

        RemoveCustomFieldButton = new QPushButton(layoutWidget4);
        RemoveCustomFieldButton->setObjectName(QString::fromUtf8("RemoveCustomFieldButton"));
        sizePolicy4.setHeightForWidth(RemoveCustomFieldButton->sizePolicy().hasHeightForWidth());
        RemoveCustomFieldButton->setSizePolicy(sizePolicy4);

        gridLayout_9->addWidget(RemoveCustomFieldButton, 2, 2, 1, 1);

        CustomFieldsTable = new QTableWidget(layoutWidget4);
        CustomFieldsTable->setObjectName(QString::fromUtf8("CustomFieldsTable"));
        CustomFieldsTable->setAlternatingRowColors(true);
        CustomFieldsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        CustomFieldsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        CustomFieldsTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_9->addWidget(CustomFieldsTable, 3, 0, 1, 3);

        splitter_2->addWidget(layoutWidget4);

        gridLayout_10->addWidget(splitter_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_11 = new QGridLayout(tab_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        SourceCodeText = new QTextBrowser(tab_5);
        SourceCodeText->setObjectName(QString::fromUtf8("SourceCodeText"));

        gridLayout_11->addWidget(SourceCodeText, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout_7->addWidget(tabWidget, 2, 0, 1, 6);

        buttonBox = new QDialogButtonBox(BibEntry);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_7->addWidget(buttonBox, 3, 2, 1, 4);

        TitleLine = new QLineEdit(BibEntry);
        TitleLine->setObjectName(QString::fromUtf8("TitleLine"));
        TitleLine->setClearButtonEnabled(true);

        gridLayout_7->addWidget(TitleLine, 1, 1, 1, 5);

        warningLabel = new QLabel(BibEntry);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(10);
        font.setBold(true);
        warningLabel->setFont(font);
        warningLabel->setStyleSheet(QString::fromUtf8("color: rgb(238, 0, 0);"));

        gridLayout_7->addWidget(warningLabel, 3, 0, 1, 2);


        retranslateUi(BibEntry);
        QObject::connect(buttonBox, SIGNAL(rejected()), BibEntry, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BibEntry);
    } // setupUi

    void retranslateUi(QDialog *BibEntry)
    {
        BibEntry->setWindowTitle(QCoreApplication::translate("BibEntry", "Bibliography", nullptr));
        label_29->setText(QCoreApplication::translate("BibEntry", "Document type", nullptr));
        RemoveBibDocTypeButton->setText(QString());
        label_28->setText(QCoreApplication::translate("BibEntry", "Citation key", nullptr));
        label_30->setText(QCoreApplication::translate("BibEntry", "Title", nullptr));
        AddBibDocTypeButton->setText(QString());
#if QT_CONFIG(tooltip)
        NewAuthorButton->setToolTip(QCoreApplication::translate("BibEntry", "Add new author", nullptr));
#endif // QT_CONFIG(tooltip)
        NewAuthorButton->setText(QString());
#if QT_CONFIG(tooltip)
        AddAuthorButton->setToolTip(QCoreApplication::translate("BibEntry", "Insert to list", nullptr));
#endif // QT_CONFIG(tooltip)
        AddAuthorButton->setText(QString());
#if QT_CONFIG(tooltip)
        RemoveAuthorButton->setToolTip(QCoreApplication::translate("BibEntry", "Remove from list", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveAuthorButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteAuthorButton->setToolTip(QCoreApplication::translate("BibEntry", "Delete current author", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteAuthorButton->setText(QString());
        label_54->setText(QCoreApplication::translate("BibEntry", "Authors", nullptr));
        NewAuthorLine->setPlaceholderText(QCoreApplication::translate("BibEntry", "New author...", nullptr));
        AuthorWarningLabel->setText(QString());
#if QT_CONFIG(tooltip)
        AddEditorButton->setToolTip(QCoreApplication::translate("BibEntry", "Insert to list", nullptr));
#endif // QT_CONFIG(tooltip)
        AddEditorButton->setText(QString());
#if QT_CONFIG(tooltip)
        RemoveEditorButton->setToolTip(QCoreApplication::translate("BibEntry", "Remove from list", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveEditorButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteEditorButton->setToolTip(QCoreApplication::translate("BibEntry", "Delete current editor", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteEditorButton->setText(QString());
#if QT_CONFIG(tooltip)
        NewEditorButton->setToolTip(QCoreApplication::translate("BibEntry", "Add new editor", nullptr));
#endif // QT_CONFIG(tooltip)
        NewEditorButton->setText(QString());
        label_55->setText(QCoreApplication::translate("BibEntry", "Editors", nullptr));
        NewEditorLine->setPlaceholderText(QCoreApplication::translate("BibEntry", "New editor...", nullptr));
        EditorWarningLabel->setText(QString());
#if QT_CONFIG(tooltip)
        RemoveTranslatorButton->setToolTip(QCoreApplication::translate("BibEntry", "Remove from list", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveTranslatorButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteTranslatorButton->setToolTip(QCoreApplication::translate("BibEntry", "Delete current translator", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteTranslatorButton->setText(QString());
#if QT_CONFIG(tooltip)
        AddTranslatorButton->setToolTip(QCoreApplication::translate("BibEntry", "Insert to list", nullptr));
#endif // QT_CONFIG(tooltip)
        AddTranslatorButton->setText(QString());
#if QT_CONFIG(tooltip)
        NewTranslatorButton->setToolTip(QCoreApplication::translate("BibEntry", "Add new translator", nullptr));
#endif // QT_CONFIG(tooltip)
        NewTranslatorButton->setText(QString());
        label_56->setText(QCoreApplication::translate("BibEntry", "Translators", nullptr));
        NewTranslatorLine->setPlaceholderText(QCoreApplication::translate("BibEntry", "New translator...", nullptr));
        TranslatorWarningLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("BibEntry", "Authors - Editors", nullptr));
        ISBNLine->setInputMask(QCoreApplication::translate("BibEntry", "999-999-9999-99-9", nullptr));
        ISBNLine->setPlaceholderText(QCoreApplication::translate("BibEntry", "123-456-7890-12-3", nullptr));
        label_5->setText(QCoreApplication::translate("BibEntry", "Year", nullptr));
        label_6->setText(QCoreApplication::translate("BibEntry", "Number", nullptr));
        label_20->setText(QCoreApplication::translate("BibEntry", "School", nullptr));
        label_3->setText(QCoreApplication::translate("BibEntry", "Series", nullptr));
        label_4->setText(QCoreApplication::translate("BibEntry", "Month", nullptr));
        label_23->setText(QCoreApplication::translate("BibEntry", "Institution", nullptr));
        label_32->setText(QCoreApplication::translate("BibEntry", "Issue", nullptr));
        label_19->setText(QCoreApplication::translate("BibEntry", "Location", nullptr));
        label_10->setText(QCoreApplication::translate("BibEntry", "Subtitle", nullptr));
        label_24->setText(QCoreApplication::translate("BibEntry", "Language", nullptr));
        label_27->setText(QCoreApplication::translate("BibEntry", "URL", nullptr));
        label_21->setText(QCoreApplication::translate("BibEntry", "DOI", nullptr));
        label_14->setText(QCoreApplication::translate("BibEntry", "Chapter", nullptr));
        ISSNLine->setInputMask(QCoreApplication::translate("BibEntry", "999-999-9999-99-9", nullptr));
        label_26->setText(QCoreApplication::translate("BibEntry", "Address", nullptr));
        label_8->setText(QCoreApplication::translate("BibEntry", "ISSN", nullptr));
        label_7->setText(QCoreApplication::translate("BibEntry", "ISBN", nullptr));
        label_22->setText(QCoreApplication::translate("BibEntry", "Edition", nullptr));
        label->setText(QCoreApplication::translate("BibEntry", "Journal", nullptr));
        label_2->setText(QCoreApplication::translate("BibEntry", "Volume", nullptr));
        label_31->setText(QCoreApplication::translate("BibEntry", "Organization", nullptr));
        label_9->setText(QCoreApplication::translate("BibEntry", "Pages", nullptr));
        label_25->setText(QCoreApplication::translate("BibEntry", "Publisher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QCoreApplication::translate("BibEntry", "Basic Info", nullptr));
        label_11->setText(QCoreApplication::translate("BibEntry", "Key", nullptr));
        label_12->setText(QCoreApplication::translate("BibEntry", "Note", nullptr));
        label_13->setText(QCoreApplication::translate("BibEntry", "Cross reference", nullptr));
        label_51->setText(QCoreApplication::translate("BibEntry", "Abstract", nullptr));
        label_50->setText(QCoreApplication::translate("BibEntry", "Custom Fields", nullptr));
        label_53->setText(QCoreApplication::translate("BibEntry", "Id", nullptr));
        AddCustomFieldButton->setText(QString());
        label_52->setText(QCoreApplication::translate("BibEntry", "Value", nullptr));
        RemoveCustomFieldButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("BibEntry", "Misc", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("BibEntry", "BibTeX source code", nullptr));
        warningLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BibEntry: public Ui_BibEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBENTRY_H
