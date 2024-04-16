/********************************************************************************
** Form generated from reading UI file 'databasesync.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESYNC_H
#define UI_DATABASESYNC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DatabaseSync
{
public:
    QGridLayout *gridLayout_4;
    QDialogButtonBox *buttonBox;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QTreeWidget *OpenDatabasesTreeWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *MetaCheck;
    QCheckBox *SyncCheck;
    QLabel *label;
    QCheckBox *MissingCheck;
    QProgressBar *progressBar;
    QProgressBar *SyncProgressBar;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *ScanFiles;
    QPushButton *StartSync;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QLabel *label_5;
    QSplitter *splitter_2;
    QTreeWidget *ResultsTreeWidget;
    QStackedWidget *ResultsTab;
    QWidget *ResultsTabPage1;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    LatexTextEdit *ContentFromFileEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    LatexTextEdit *ContentFromDatabaseEdit;
    QWidget *ResultsTabPage2;
    QGridLayout *gridLayout_5;
    QTableWidget *MetadataDifferences;
    QWidget *ResultsTabPage3;
    QGridLayout *gridLayout_7;
    QSplitter *splitter_5;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *PreambleLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *DateLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *PathLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *FileNameLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *BuildCommandLabel;
    QFrame *line_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    LatexTextBrowser *ContentOfMissingFile;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *DatabaseSync)
    {
        if (DatabaseSync->objectName().isEmpty())
            DatabaseSync->setObjectName(QString::fromUtf8("DatabaseSync"));
        DatabaseSync->resize(1028, 573);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        DatabaseSync->setFont(font);
        gridLayout_4 = new QGridLayout(DatabaseSync);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        buttonBox = new QDialogButtonBox(DatabaseSync);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_4->addWidget(buttonBox, 1, 0, 1, 1);

        splitter_4 = new QSplitter(DatabaseSync);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_4->setHandleWidth(7);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_3->setHandleWidth(7);
        OpenDatabasesTreeWidget = new QTreeWidget(splitter_3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/texfile.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font1;
        font1.setBold(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(OpenDatabasesTreeWidget);
        __qtreewidgetitem->setFont(0, font1);
        __qtreewidgetitem->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(OpenDatabasesTreeWidget);
        __qtreewidgetitem1->setFont(0, font1);
        __qtreewidgetitem1->setIcon(0, icon1);
        OpenDatabasesTreeWidget->setObjectName(QString::fromUtf8("OpenDatabasesTreeWidget"));
        OpenDatabasesTreeWidget->setAnimated(true);
        splitter_3->addWidget(OpenDatabasesTreeWidget);
        layoutWidget = new QWidget(splitter_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MetaCheck = new QCheckBox(layoutWidget);
        buttonGroup = new QButtonGroup(DatabaseSync);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(MetaCheck);
        MetaCheck->setObjectName(QString::fromUtf8("MetaCheck"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MetaCheck->sizePolicy().hasHeightForWidth());
        MetaCheck->setSizePolicy(sizePolicy);

        gridLayout->addWidget(MetaCheck, 2, 0, 1, 1);

        SyncCheck = new QCheckBox(layoutWidget);
        buttonGroup->addButton(SyncCheck);
        SyncCheck->setObjectName(QString::fromUtf8("SyncCheck"));
        sizePolicy.setHeightForWidth(SyncCheck->sizePolicy().hasHeightForWidth());
        SyncCheck->setSizePolicy(sizePolicy);

        gridLayout->addWidget(SyncCheck, 1, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setBold(true);
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        MissingCheck = new QCheckBox(layoutWidget);
        buttonGroup->addButton(MissingCheck);
        MissingCheck->setObjectName(QString::fromUtf8("MissingCheck"));
        sizePolicy.setHeightForWidth(MissingCheck->sizePolicy().hasHeightForWidth());
        MissingCheck->setSizePolicy(sizePolicy);

        gridLayout->addWidget(MissingCheck, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 3);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(progressBar, 5, 2, 1, 1);

        SyncProgressBar = new QProgressBar(layoutWidget);
        SyncProgressBar->setObjectName(QString::fromUtf8("SyncProgressBar"));
        SyncProgressBar->setValue(0);
        SyncProgressBar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(SyncProgressBar, 7, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_2, 5, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ScanFiles = new QPushButton(layoutWidget);
        ScanFiles->setObjectName(QString::fromUtf8("ScanFiles"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/edit-find.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ScanFiles->setIcon(icon2);

        horizontalLayout->addWidget(ScanFiles);

        StartSync = new QPushButton(layoutWidget);
        StartSync->setObjectName(QString::fromUtf8("StartSync"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        StartSync->setIcon(icon3);

        horizontalLayout->addWidget(StartSync);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 3);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_5, 7, 0, 1, 2);

        splitter_3->addWidget(layoutWidget);
        splitter_4->addWidget(splitter_3);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(7);
        ResultsTreeWidget = new QTreeWidget(splitter_2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/latex-config.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/pdf2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/table.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/datatex_color.svg"), QSize(), QIcon::Normal, QIcon::Off);
        new QTreeWidgetItem(ResultsTreeWidget);
        new QTreeWidgetItem(ResultsTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(ResultsTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem3->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem4->setIcon(0, icon5);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem5->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem6->setIcon(0, icon7);
        ResultsTreeWidget->setObjectName(QString::fromUtf8("ResultsTreeWidget"));
        QPalette palette;
        QBrush brush(QColor(218, 218, 218, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        QBrush brush2(QColor(225, 225, 225, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        ResultsTreeWidget->setPalette(palette);
        ResultsTreeWidget->setAnimated(true);
        ResultsTreeWidget->setColumnCount(3);
        splitter_2->addWidget(ResultsTreeWidget);
        ResultsTab = new QStackedWidget(splitter_2);
        ResultsTab->setObjectName(QString::fromUtf8("ResultsTab"));
        ResultsTabPage1 = new QWidget();
        ResultsTabPage1->setObjectName(QString::fromUtf8("ResultsTabPage1"));
        gridLayout_3 = new QGridLayout(ResultsTabPage1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(ResultsTabPage1);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(7);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        ContentFromFileEdit = new LatexTextEdit(layoutWidget1);
        ContentFromFileEdit->setObjectName(QString::fromUtf8("ContentFromFileEdit"));

        verticalLayout->addWidget(ContentFromFileEdit);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        ContentFromDatabaseEdit = new LatexTextEdit(layoutWidget2);
        ContentFromDatabaseEdit->setObjectName(QString::fromUtf8("ContentFromDatabaseEdit"));

        verticalLayout_2->addWidget(ContentFromDatabaseEdit);

        splitter->addWidget(layoutWidget2);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        ResultsTab->addWidget(ResultsTabPage1);
        ResultsTabPage2 = new QWidget();
        ResultsTabPage2->setObjectName(QString::fromUtf8("ResultsTabPage2"));
        gridLayout_5 = new QGridLayout(ResultsTabPage2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        MetadataDifferences = new QTableWidget(ResultsTabPage2);
        if (MetadataDifferences->columnCount() < 4)
            MetadataDifferences->setColumnCount(4);
        MetadataDifferences->setObjectName(QString::fromUtf8("MetadataDifferences"));
        MetadataDifferences->setAlternatingRowColors(true);
        MetadataDifferences->setSelectionBehavior(QAbstractItemView::SelectRows);
        MetadataDifferences->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        MetadataDifferences->setColumnCount(4);

        gridLayout_5->addWidget(MetadataDifferences, 0, 0, 1, 1);

        ResultsTab->addWidget(ResultsTabPage2);
        ResultsTabPage3 = new QWidget();
        ResultsTabPage3->setObjectName(QString::fromUtf8("ResultsTabPage3"));
        gridLayout_7 = new QGridLayout(ResultsTabPage3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_5 = new QSplitter(ResultsTabPage3);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        splitter_5->setHandleWidth(4);
        layoutWidget3 = new QWidget(splitter_5);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        gridLayout_6 = new QGridLayout(layoutWidget3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(label_8);

        PreambleLabel = new QLabel(layoutWidget3);
        PreambleLabel->setObjectName(QString::fromUtf8("PreambleLabel"));
        sizePolicy1.setHeightForWidth(PreambleLabel->sizePolicy().hasHeightForWidth());
        PreambleLabel->setSizePolicy(sizePolicy1);
        PreambleLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_4->addWidget(PreambleLabel);


        gridLayout_6->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_5->addWidget(label_9);

        DateLabel = new QLabel(layoutWidget3);
        DateLabel->setObjectName(QString::fromUtf8("DateLabel"));
        sizePolicy1.setHeightForWidth(DateLabel->sizePolicy().hasHeightForWidth());
        DateLabel->setSizePolicy(sizePolicy1);
        DateLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_5->addWidget(DateLabel);


        gridLayout_6->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_6->addWidget(label_11);

        PathLabel = new QLabel(layoutWidget3);
        PathLabel->setObjectName(QString::fromUtf8("PathLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PathLabel->sizePolicy().hasHeightForWidth());
        PathLabel->setSizePolicy(sizePolicy3);
        PathLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        PathLabel->setWordWrap(true);

        horizontalLayout_6->addWidget(PathLabel);


        gridLayout_6->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_6);

        FileNameLabel = new QLabel(layoutWidget3);
        FileNameLabel->setObjectName(QString::fromUtf8("FileNameLabel"));
        sizePolicy1.setHeightForWidth(FileNameLabel->sizePolicy().hasHeightForWidth());
        FileNameLabel->setSizePolicy(sizePolicy1);
        FileNameLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_2->addWidget(FileNameLabel);


        gridLayout_6->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label_7);

        BuildCommandLabel = new QLabel(layoutWidget3);
        BuildCommandLabel->setObjectName(QString::fromUtf8("BuildCommandLabel"));
        sizePolicy1.setHeightForWidth(BuildCommandLabel->sizePolicy().hasHeightForWidth());
        BuildCommandLabel->setSizePolicy(sizePolicy1);
        BuildCommandLabel->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_3->addWidget(BuildCommandLabel);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        line_2 = new QFrame(layoutWidget3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 0, 1, 6, 1);

        splitter_5->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter_5);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        ContentOfMissingFile = new LatexTextBrowser(layoutWidget4);
        ContentOfMissingFile->setObjectName(QString::fromUtf8("ContentOfMissingFile"));

        verticalLayout_3->addWidget(ContentOfMissingFile);

        splitter_5->addWidget(layoutWidget4);

        gridLayout_7->addWidget(splitter_5, 0, 0, 1, 1);

        ResultsTab->addWidget(ResultsTabPage3);
        splitter_2->addWidget(ResultsTab);
        splitter_4->addWidget(splitter_2);

        gridLayout_4->addWidget(splitter_4, 0, 0, 1, 1);


        retranslateUi(DatabaseSync);
        QObject::connect(buttonBox, SIGNAL(accepted()), DatabaseSync, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DatabaseSync, SLOT(reject()));

        QMetaObject::connectSlotsByName(DatabaseSync);
    } // setupUi

    void retranslateUi(QDialog *DatabaseSync)
    {
        DatabaseSync->setWindowTitle(QCoreApplication::translate("DatabaseSync", "Database Synchronization", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = OpenDatabasesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("DatabaseSync", "Id", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("DatabaseSync", "Path", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("DatabaseSync", "Count", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("DatabaseSync", "Name", nullptr));

        const bool __sortingEnabled = OpenDatabasesTreeWidget->isSortingEnabled();
        OpenDatabasesTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = OpenDatabasesTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("DatabaseSync", "Latex databases", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = OpenDatabasesTreeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("DatabaseSync", "Document databases", nullptr));
        OpenDatabasesTreeWidget->setSortingEnabled(__sortingEnabled);

        MetaCheck->setText(QCoreApplication::translate("DatabaseSync", "Check metadata integrity", nullptr));
        SyncCheck->setText(QCoreApplication::translate("DatabaseSync", "Sync files content", nullptr));
        label->setText(QCoreApplication::translate("DatabaseSync", "Synchronization tools", nullptr));
        MissingCheck->setText(QCoreApplication::translate("DatabaseSync", "Check for missing files", nullptr));
        label_2->setText(QCoreApplication::translate("DatabaseSync", "Scan progress", nullptr));
        ScanFiles->setText(QCoreApplication::translate("DatabaseSync", "Scan files", nullptr));
        StartSync->setText(QCoreApplication::translate("DatabaseSync", "Start Sync", nullptr));
        label_5->setText(QCoreApplication::translate("DatabaseSync", "Sync progress", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ResultsTreeWidget->headerItem();
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("DatabaseSync", "Path", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("DatabaseSync", "Actions", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("DatabaseSync", "Files", nullptr));

        const bool __sortingEnabled1 = ResultsTreeWidget->isSortingEnabled();
        ResultsTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem4 = ResultsTreeWidget->topLevelItem(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("DatabaseSync", "Content differences", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ResultsTreeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("DatabaseSync", "Metadata differences", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ResultsTreeWidget->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("DatabaseSync", "Files missing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("DatabaseSync", "Tex missing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem6->child(1);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("DatabaseSync", "Pdf missing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem6->child(2);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("DatabaseSync", "Csv missing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem6->child(3);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("DatabaseSync", "DTex missing", nullptr));
        ResultsTreeWidget->setSortingEnabled(__sortingEnabled1);

        label_3->setText(QCoreApplication::translate("DatabaseSync", "File content", nullptr));
        label_4->setText(QCoreApplication::translate("DatabaseSync", "Content stored in database", nullptr));
        label_8->setText(QCoreApplication::translate("DatabaseSync", "Preamble used : ", nullptr));
        PreambleLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("DatabaseSync", "Date : ", nullptr));
        DateLabel->setText(QString());
        label_11->setText(QCoreApplication::translate("DatabaseSync", "Path : ", nullptr));
        PathLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("DatabaseSync", "File Id : ", nullptr));
        FileNameLabel->setText(QString());
        label_7->setText(QCoreApplication::translate("DatabaseSync", "Built with : ", nullptr));
        BuildCommandLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DatabaseSync: public Ui_DatabaseSync {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESYNC_H
