/********************************************************************************
** Form generated from reading UI file 'clonedatabasefile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLONEDATABASEFILE_H
#define UI_CLONEDATABASEFILE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CloneDatabaseFile
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_16;
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
    QHBoxLayout *horizontalLayout_4;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_17;
    QTabWidget *FilesTabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    LatexTextBrowser *FileContent;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitter_2;
    QTreeWidget *SelectedFiles;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    LatexTextBrowser *SourceCodeBrowser;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *MetadataTable;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_8;
    LatexTextBrowser *BibliographyBrowser;
    QDialogButtonBox *Okbutton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ImportButton;
    QPushButton *ExportButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *FilesDatabasesCombo;
    QButtonGroup *ImportExport;

    void setupUi(QDialog *CloneDatabaseFile)
    {
        if (CloneDatabaseFile->objectName().isEmpty())
            CloneDatabaseFile->setObjectName(QString::fromUtf8("CloneDatabaseFile"));
        CloneDatabaseFile->resize(1168, 674);
        gridLayout = new QGridLayout(CloneDatabaseFile);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_4 = new QSplitter(CloneDatabaseFile);
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
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/go-next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setFlat(true);

        verticalLayout->addWidget(addButton);

        addEverything = new QPushButton(layoutWidget);
        addEverything->setObjectName(QString::fromUtf8("addEverything"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addEverything->sizePolicy().hasHeightForWidth());
        addEverything->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/go-last.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addEverything->setIcon(icon1);
        addEverything->setFlat(true);

        verticalLayout->addWidget(addEverything);

        removeButton = new QPushButton(layoutWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        sizePolicy.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/go-previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon2);
        removeButton->setFlat(true);

        verticalLayout->addWidget(removeButton);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        EnableSortingFiles = new QPushButton(layoutWidget);
        EnableSortingFiles->setObjectName(QString::fromUtf8("EnableSortingFiles"));
        sizePolicy1.setHeightForWidth(EnableSortingFiles->sizePolicy().hasHeightForWidth());
        EnableSortingFiles->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/sort-presence.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EnableSortingFiles->setIcon(icon3);
        EnableSortingFiles->setCheckable(true);
        EnableSortingFiles->setFlat(true);

        verticalLayout->addWidget(EnableSortingFiles);

        ClearFiltersFD = new QPushButton(layoutWidget);
        ClearFiltersFD->setObjectName(QString::fromUtf8("ClearFiltersFD"));
        sizePolicy1.setHeightForWidth(ClearFiltersFD->sizePolicy().hasHeightForWidth());
        ClearFiltersFD->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/kt-remove-filters.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ClearFiltersFD->setIcon(icon4);
        ClearFiltersFD->setFlat(true);

        verticalLayout->addWidget(ClearFiltersFD);

        FilesTagFilter = new QPushButton(layoutWidget);
        FilesTagFilter->setObjectName(QString::fromUtf8("FilesTagFilter"));
        sizePolicy1.setHeightForWidth(FilesTagFilter->sizePolicy().hasHeightForWidth());
        FilesTagFilter->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/tag.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FilesTagFilter->setIcon(icon5);
        FilesTagFilter->setCheckable(true);
        FilesTagFilter->setFlat(true);

        verticalLayout->addWidget(FilesTagFilter);

        CountLabel = new QLabel(layoutWidget);
        CountLabel->setObjectName(QString::fromUtf8("CountLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("KerkisSans"));
        font.setPointSize(14);
        font.setBold(true);
        CountLabel->setFont(font);
        CountLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: #ffffff;"));
        CountLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(CountLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_16->addLayout(verticalLayout, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        gridLayout_16->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        splitter->addWidget(layoutWidget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        gridLayout_17 = new QGridLayout(layoutWidget_2);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        FilesTabWidget = new QTabWidget(layoutWidget_2);
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

        gridLayout_17->addWidget(FilesTabWidget, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget_2);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        SelectedFiles = new QTreeWidget(splitter_2);
        SelectedFiles->setObjectName(QString::fromUtf8("SelectedFiles"));
        SelectedFiles->setStyleSheet(QString::fromUtf8(""));
        splitter_2->addWidget(SelectedFiles);
        tabWidget = new QTabWidget(splitter_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SourceCodeBrowser = new LatexTextBrowser(tab);
        SourceCodeBrowser->setObjectName(QString::fromUtf8("SourceCodeBrowser"));

        verticalLayout_2->addWidget(SourceCodeBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_3 = new QVBoxLayout(tab_7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        MetadataTable = new QTableWidget(tab_7);
        if (MetadataTable->columnCount() < 1)
            MetadataTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        MetadataTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (MetadataTable->rowCount() < 10)
            MetadataTable->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        MetadataTable->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        MetadataTable->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        MetadataTable->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        MetadataTable->setItem(2, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        MetadataTable->setItem(3, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        MetadataTable->setItem(4, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        MetadataTable->setItem(5, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        MetadataTable->setItem(6, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        MetadataTable->setItem(7, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        MetadataTable->setItem(8, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        MetadataTable->setItem(9, 0, __qtablewidgetitem20);
        MetadataTable->setObjectName(QString::fromUtf8("MetadataTable"));
        MetadataTable->setAlternatingRowColors(true);
        MetadataTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        MetadataTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(MetadataTable);

        tabWidget->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_8 = new QVBoxLayout(tab_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        BibliographyBrowser = new LatexTextBrowser(tab_5);
        BibliographyBrowser->setObjectName(QString::fromUtf8("BibliographyBrowser"));

        verticalLayout_8->addWidget(BibliographyBrowser);

        tabWidget->addTab(tab_5, QString());
        splitter_2->addWidget(tabWidget);
        splitter_4->addWidget(splitter_2);

        gridLayout->addWidget(splitter_4, 1, 0, 1, 1);

        Okbutton = new QDialogButtonBox(CloneDatabaseFile);
        Okbutton->setObjectName(QString::fromUtf8("Okbutton"));
        Okbutton->setLayoutDirection(Qt::LeftToRight);
        Okbutton->setOrientation(Qt::Horizontal);
        Okbutton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(Okbutton, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ImportButton = new QPushButton(CloneDatabaseFile);
        ImportExport = new QButtonGroup(CloneDatabaseFile);
        ImportExport->setObjectName(QString::fromUtf8("ImportExport"));
        ImportExport->addButton(ImportButton);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/database-import.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ImportButton->setIcon(icon6);
        ImportButton->setIconSize(QSize(20, 20));
        ImportButton->setCheckable(true);
        ImportButton->setFlat(true);

        horizontalLayout_2->addWidget(ImportButton);

        ExportButton = new QPushButton(CloneDatabaseFile);
        ImportExport->addButton(ExportButton);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/database-export.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ExportButton->setIcon(icon7);
        ExportButton->setIconSize(QSize(20, 20));
        ExportButton->setCheckable(true);
        ExportButton->setFlat(true);

        horizontalLayout_2->addWidget(ExportButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(CloneDatabaseFile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 88, 0);"));

        horizontalLayout_2->addWidget(label_2);

        FilesDatabasesCombo = new QComboBox(CloneDatabaseFile);
        FilesDatabasesCombo->setObjectName(QString::fromUtf8("FilesDatabasesCombo"));

        horizontalLayout_2->addWidget(FilesDatabasesCombo);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(CloneDatabaseFile);
        QObject::connect(Okbutton, SIGNAL(accepted()), CloneDatabaseFile, SLOT(accept()));
        QObject::connect(Okbutton, SIGNAL(rejected()), CloneDatabaseFile, SLOT(reject()));

        FilesTabWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CloneDatabaseFile);
    } // setupUi

    void retranslateUi(QDialog *CloneDatabaseFile)
    {
        CloneDatabaseFile->setWindowTitle(QCoreApplication::translate("CloneDatabaseFile", "Dialog", nullptr));
        addButton->setText(QString());
        addEverything->setText(QString());
        removeButton->setText(QString());
        EnableSortingFiles->setText(QString());
        ClearFiltersFD->setText(QString());
        FilesTagFilter->setText(QString());
        CountLabel->setText(QString());
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_3), QCoreApplication::translate("CloneDatabaseFile", "File content", nullptr));
        FilesTabWidget->setTabText(FilesTabWidget->indexOf(tab_4), QCoreApplication::translate("CloneDatabaseFile", "Pdf view", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = SelectedFiles->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("CloneDatabaseFile", "Actions", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("CloneDatabaseFile", "Include solution", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("CloneDatabaseFile", "Destination", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("CloneDatabaseFile", "Selected files", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CloneDatabaseFile", "Source code", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CloneDatabaseFile", "Pdf", nullptr));
        QTableWidgetItem *___qtablewidgetitem = MetadataTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CloneDatabaseFile", "Metadata", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = MetadataTable->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CloneDatabaseFile", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = MetadataTable->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CloneDatabaseFile", "Field", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = MetadataTable->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CloneDatabaseFile", "Chapter", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = MetadataTable->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CloneDatabaseFile", "Sections", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = MetadataTable->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CloneDatabaseFile", "Subsection", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = MetadataTable->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CloneDatabaseFile", "File type", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = MetadataTable->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CloneDatabaseFile", "Difficulty", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = MetadataTable->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CloneDatabaseFile", "Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = MetadataTable->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("CloneDatabaseFile", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = MetadataTable->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("CloneDatabaseFile", "Solved - Prooved", nullptr));

        const bool __sortingEnabled = MetadataTable->isSortingEnabled();
        MetadataTable->setSortingEnabled(false);
        MetadataTable->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("CloneDatabaseFile", "Metadata", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("CloneDatabaseFile", "Bibliography", nullptr));
        ImportButton->setText(QCoreApplication::translate("CloneDatabaseFile", "Import", nullptr));
        ExportButton->setText(QCoreApplication::translate("CloneDatabaseFile", "Export", nullptr));
        label_2->setText(QCoreApplication::translate("CloneDatabaseFile", "Database source : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloneDatabaseFile: public Ui_CloneDatabaseFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLONEDATABASEFILE_H
