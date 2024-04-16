/********************************************************************************
** Form generated from reading UI file 'tablebuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEBUILDER_H
#define UI_TABLEBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "switch.h"

QT_BEGIN_NAMESPACE

class Ui_TableBuilder
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *RowsSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *ColumnsSpinBox;
    QFrame *line_4;
    QLabel *label_3;
    QComboBox *TableEnvComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *SettingsButton;
    Switch *checkBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpinBox *DelaySpinBox;
    QSpacerItem *verticalSpacer;
    QSplitter *splitter;
    QSplitter *splitter_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AlignLeftButton;
    QPushButton *AlignCenterButton;
    QPushButton *AlignRightButton;
    QFrame *line;
    QPushButton *setCellBoldButton;
    QPushButton *setCellItalicsButton;
    QPushButton *setCellUnderlineButton;
    QFrame *line_2;
    QPushButton *setFontColorButton;
    QPushButton *setBackgroundColorButton;
    QFrame *line_3;
    QPushButton *MergeCellsButton;
    QPushButton *SplitCellsButton;
    QPushButton *AddRowButton;
    QPushButton *AddColumnButton;
    QPushButton *DeleteRowButton;
    QPushButton *DeleteColumnButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QPushButton *AddColumnButton_2;
    QPushButton *AddRowButton_2;
    QPushButton *SplitCellsButton_2;
    QPushButton *MergeCellsButton_2;
    QPushButton *DeleteColumnButton_2;
    QPushButton *MergeCellsButton_3;
    QPushButton *SplitCellsButton_3;
    QPushButton *AddRowButton_3;
    QPushButton *AddColumnButton_3;
    QPushButton *DeleteRowButton_2;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidget;
    LatexTextWidget *TableSourceCode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TableBuilder)
    {
        if (TableBuilder->objectName().isEmpty())
            TableBuilder->setObjectName(QString::fromUtf8("TableBuilder"));
        TableBuilder->resize(1122, 724);
        gridLayout = new QGridLayout(TableBuilder);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(TableBuilder);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        RowsSpinBox = new QSpinBox(TableBuilder);
        RowsSpinBox->setObjectName(QString::fromUtf8("RowsSpinBox"));
        RowsSpinBox->setMinimum(1);
        RowsSpinBox->setValue(3);

        horizontalLayout_3->addWidget(RowsSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(TableBuilder);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        ColumnsSpinBox = new QSpinBox(TableBuilder);
        ColumnsSpinBox->setObjectName(QString::fromUtf8("ColumnsSpinBox"));
        ColumnsSpinBox->setMinimum(1);
        ColumnsSpinBox->setValue(3);

        horizontalLayout_4->addWidget(ColumnsSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_4 = new QFrame(TableBuilder);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        label_3 = new QLabel(TableBuilder);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        TableEnvComboBox = new QComboBox(TableBuilder);
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->addItem(QString());
        TableEnvComboBox->setObjectName(QString::fromUtf8("TableEnvComboBox"));

        verticalLayout_2->addWidget(TableEnvComboBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(TableBuilder);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit = new QLineEdit(TableBuilder);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        line_5 = new QFrame(TableBuilder);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SettingsButton = new QPushButton(TableBuilder);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SettingsButton->sizePolicy().hasHeightForWidth());
        SettingsButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsButton->setIcon(icon);
        SettingsButton->setFlat(true);

        horizontalLayout->addWidget(SettingsButton);

        checkBox = new Switch(TableBuilder);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(TableBuilder);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        DelaySpinBox = new QSpinBox(TableBuilder);
        DelaySpinBox->setObjectName(QString::fromUtf8("DelaySpinBox"));
        DelaySpinBox->setMinimum(100);
        DelaySpinBox->setMaximum(1000);
        DelaySpinBox->setSingleStep(10);
        DelaySpinBox->setValue(500);

        horizontalLayout_6->addWidget(DelaySpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        splitter = new QSplitter(TableBuilder);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AlignLeftButton = new QPushButton(widget);
        AlignLeftButton->setObjectName(QString::fromUtf8("AlignLeftButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/format-justify-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignLeftButton->setIcon(icon1);
        AlignLeftButton->setFlat(true);

        horizontalLayout_2->addWidget(AlignLeftButton);

        AlignCenterButton = new QPushButton(widget);
        AlignCenterButton->setObjectName(QString::fromUtf8("AlignCenterButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/format-justify-center.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignCenterButton->setIcon(icon2);
        AlignCenterButton->setFlat(true);

        horizontalLayout_2->addWidget(AlignCenterButton);

        AlignRightButton = new QPushButton(widget);
        AlignRightButton->setObjectName(QString::fromUtf8("AlignRightButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/format-justify-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AlignRightButton->setIcon(icon3);
        AlignRightButton->setFlat(true);

        horizontalLayout_2->addWidget(AlignRightButton);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        setCellBoldButton = new QPushButton(widget);
        setCellBoldButton->setObjectName(QString::fromUtf8("setCellBoldButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/format-text-bold.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setCellBoldButton->setIcon(icon4);
        setCellBoldButton->setFlat(true);

        horizontalLayout_2->addWidget(setCellBoldButton);

        setCellItalicsButton = new QPushButton(widget);
        setCellItalicsButton->setObjectName(QString::fromUtf8("setCellItalicsButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/format-text-italic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setCellItalicsButton->setIcon(icon5);
        setCellItalicsButton->setFlat(true);

        horizontalLayout_2->addWidget(setCellItalicsButton);

        setCellUnderlineButton = new QPushButton(widget);
        setCellUnderlineButton->setObjectName(QString::fromUtf8("setCellUnderlineButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/format-text-underline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setCellUnderlineButton->setIcon(icon6);
        setCellUnderlineButton->setFlat(true);

        horizontalLayout_2->addWidget(setCellUnderlineButton);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        setFontColorButton = new QPushButton(widget);
        setFontColorButton->setObjectName(QString::fromUtf8("setFontColorButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Font-Color.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setFontColorButton->setIcon(icon7);
        setFontColorButton->setFlat(true);

        horizontalLayout_2->addWidget(setFontColorButton);

        setBackgroundColorButton = new QPushButton(widget);
        setBackgroundColorButton->setObjectName(QString::fromUtf8("setBackgroundColorButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Background-Color.svg"), QSize(), QIcon::Normal, QIcon::Off);
        setBackgroundColorButton->setIcon(icon8);
        setBackgroundColorButton->setFlat(true);

        horizontalLayout_2->addWidget(setBackgroundColorButton);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        MergeCellsButton = new QPushButton(widget);
        MergeCellsButton->setObjectName(QString::fromUtf8("MergeCellsButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/edit-table-cell-merge.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MergeCellsButton->setIcon(icon9);
        MergeCellsButton->setIconSize(QSize(20, 20));
        MergeCellsButton->setFlat(true);

        horizontalLayout_2->addWidget(MergeCellsButton);

        SplitCellsButton = new QPushButton(widget);
        SplitCellsButton->setObjectName(QString::fromUtf8("SplitCellsButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/edit-table-cell-split.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SplitCellsButton->setIcon(icon10);
        SplitCellsButton->setIconSize(QSize(20, 20));
        SplitCellsButton->setFlat(true);

        horizontalLayout_2->addWidget(SplitCellsButton);

        AddRowButton = new QPushButton(widget);
        AddRowButton->setObjectName(QString::fromUtf8("AddRowButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/edit-table-add-row.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddRowButton->setIcon(icon11);
        AddRowButton->setIconSize(QSize(20, 20));
        AddRowButton->setFlat(true);

        horizontalLayout_2->addWidget(AddRowButton);

        AddColumnButton = new QPushButton(widget);
        AddColumnButton->setObjectName(QString::fromUtf8("AddColumnButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/edit-table-add-column.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddColumnButton->setIcon(icon12);
        AddColumnButton->setIconSize(QSize(20, 20));
        AddColumnButton->setFlat(true);

        horizontalLayout_2->addWidget(AddColumnButton);

        DeleteRowButton = new QPushButton(widget);
        DeleteRowButton->setObjectName(QString::fromUtf8("DeleteRowButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/edit-table-delete-row.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteRowButton->setIcon(icon13);
        DeleteRowButton->setIconSize(QSize(20, 20));
        DeleteRowButton->setFlat(true);

        horizontalLayout_2->addWidget(DeleteRowButton);

        DeleteColumnButton = new QPushButton(widget);
        DeleteColumnButton->setObjectName(QString::fromUtf8("DeleteColumnButton"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/edit-table-delete-column.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteColumnButton->setIcon(icon14);
        DeleteColumnButton->setIconSize(QSize(20, 20));
        DeleteColumnButton->setFlat(true);

        horizontalLayout_2->addWidget(DeleteColumnButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AddColumnButton_2 = new QPushButton(widget);
        AddColumnButton_2->setObjectName(QString::fromUtf8("AddColumnButton_2"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/format-border-set-top.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddColumnButton_2->setIcon(icon15);
        AddColumnButton_2->setIconSize(QSize(20, 20));
        AddColumnButton_2->setFlat(true);

        verticalLayout->addWidget(AddColumnButton_2);

        AddRowButton_2 = new QPushButton(widget);
        AddRowButton_2->setObjectName(QString::fromUtf8("AddRowButton_2"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/format-border-set-bottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddRowButton_2->setIcon(icon16);
        AddRowButton_2->setIconSize(QSize(20, 20));
        AddRowButton_2->setFlat(true);

        verticalLayout->addWidget(AddRowButton_2);

        SplitCellsButton_2 = new QPushButton(widget);
        SplitCellsButton_2->setObjectName(QString::fromUtf8("SplitCellsButton_2"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/format-border-set-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SplitCellsButton_2->setIcon(icon17);
        SplitCellsButton_2->setIconSize(QSize(20, 20));
        SplitCellsButton_2->setFlat(true);

        verticalLayout->addWidget(SplitCellsButton_2);

        MergeCellsButton_2 = new QPushButton(widget);
        MergeCellsButton_2->setObjectName(QString::fromUtf8("MergeCellsButton_2"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/format-border-set-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MergeCellsButton_2->setIcon(icon18);
        MergeCellsButton_2->setIconSize(QSize(20, 20));
        MergeCellsButton_2->setFlat(true);

        verticalLayout->addWidget(MergeCellsButton_2);

        DeleteColumnButton_2 = new QPushButton(widget);
        DeleteColumnButton_2->setObjectName(QString::fromUtf8("DeleteColumnButton_2"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/format-border-set-all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteColumnButton_2->setIcon(icon19);
        DeleteColumnButton_2->setIconSize(QSize(20, 20));
        DeleteColumnButton_2->setFlat(true);

        verticalLayout->addWidget(DeleteColumnButton_2);

        MergeCellsButton_3 = new QPushButton(widget);
        MergeCellsButton_3->setObjectName(QString::fromUtf8("MergeCellsButton_3"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/format-border-set-external.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MergeCellsButton_3->setIcon(icon20);
        MergeCellsButton_3->setIconSize(QSize(20, 20));
        MergeCellsButton_3->setFlat(true);

        verticalLayout->addWidget(MergeCellsButton_3);

        SplitCellsButton_3 = new QPushButton(widget);
        SplitCellsButton_3->setObjectName(QString::fromUtf8("SplitCellsButton_3"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/format-border-set-internal-horizontal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SplitCellsButton_3->setIcon(icon21);
        SplitCellsButton_3->setIconSize(QSize(20, 20));
        SplitCellsButton_3->setFlat(true);

        verticalLayout->addWidget(SplitCellsButton_3);

        AddRowButton_3 = new QPushButton(widget);
        AddRowButton_3->setObjectName(QString::fromUtf8("AddRowButton_3"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/format-border-set-internal-vertical.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddRowButton_3->setIcon(icon22);
        AddRowButton_3->setIconSize(QSize(20, 20));
        AddRowButton_3->setFlat(true);

        verticalLayout->addWidget(AddRowButton_3);

        AddColumnButton_3 = new QPushButton(widget);
        AddColumnButton_3->setObjectName(QString::fromUtf8("AddColumnButton_3"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/format-border-set-internal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddColumnButton_3->setIcon(icon23);
        AddColumnButton_3->setIconSize(QSize(20, 20));
        AddColumnButton_3->setFlat(true);

        verticalLayout->addWidget(AddColumnButton_3);

        DeleteRowButton_2 = new QPushButton(widget);
        DeleteRowButton_2->setObjectName(QString::fromUtf8("DeleteRowButton_2"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/format-border-set-none.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteRowButton_2->setIcon(icon24);
        DeleteRowButton_2->setIconSize(QSize(20, 20));
        DeleteRowButton_2->setFlat(true);

        verticalLayout->addWidget(DeleteRowButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_7->addLayout(verticalLayout);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);

        horizontalLayout_7->addWidget(tableWidget);


        verticalLayout_4->addLayout(horizontalLayout_7);

        splitter_2->addWidget(widget);
        TableSourceCode = new LatexTextWidget(splitter_2);
        TableSourceCode->setObjectName(QString::fromUtf8("TableSourceCode"));
        splitter_2->addWidget(TableSourceCode);
        splitter->addWidget(splitter_2);

        gridLayout->addWidget(splitter, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(TableBuilder);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(TableBuilder);
        QObject::connect(buttonBox, SIGNAL(accepted()), TableBuilder, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TableBuilder, SLOT(reject()));

        QMetaObject::connectSlotsByName(TableBuilder);
    } // setupUi

    void retranslateUi(QDialog *TableBuilder)
    {
        TableBuilder->setWindowTitle(QCoreApplication::translate("TableBuilder", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TableBuilder", "Rows", nullptr));
        label_2->setText(QCoreApplication::translate("TableBuilder", "Columns", nullptr));
        label_3->setText(QCoreApplication::translate("TableBuilder", "Table Environment", nullptr));
        TableEnvComboBox->setItemText(0, QCoreApplication::translate("TableBuilder", "tabular", nullptr));
        TableEnvComboBox->setItemText(1, QCoreApplication::translate("TableBuilder", "tabularx", nullptr));
        TableEnvComboBox->setItemText(2, QCoreApplication::translate("TableBuilder", "longtable", nullptr));
        TableEnvComboBox->setItemText(3, QCoreApplication::translate("TableBuilder", "booktabs", nullptr));
        TableEnvComboBox->setItemText(4, QCoreApplication::translate("TableBuilder", "tabulararray", nullptr));
        TableEnvComboBox->setItemText(5, QCoreApplication::translate("TableBuilder", "ltxtable", nullptr));
        TableEnvComboBox->setItemText(6, QCoreApplication::translate("TableBuilder", "xtab", nullptr));

        label_4->setText(QCoreApplication::translate("TableBuilder", "Caption", nullptr));
        SettingsButton->setText(QString());
        checkBox->setText(QCoreApplication::translate("TableBuilder", "Auto Compile", nullptr));
        label_5->setText(QCoreApplication::translate("TableBuilder", "Delay time", nullptr));
        DelaySpinBox->setSuffix(QCoreApplication::translate("TableBuilder", "ms", nullptr));
        AlignLeftButton->setText(QString());
        AlignCenterButton->setText(QString());
        AlignRightButton->setText(QString());
        setCellBoldButton->setText(QString());
        setCellItalicsButton->setText(QString());
        setCellUnderlineButton->setText(QString());
        setFontColorButton->setText(QString());
        setBackgroundColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        MergeCellsButton->setToolTip(QCoreApplication::translate("TableBuilder", "Merge cells", nullptr));
#endif // QT_CONFIG(tooltip)
        MergeCellsButton->setText(QString());
#if QT_CONFIG(tooltip)
        SplitCellsButton->setToolTip(QCoreApplication::translate("TableBuilder", "Split cells", nullptr));
#endif // QT_CONFIG(tooltip)
        SplitCellsButton->setText(QString());
#if QT_CONFIG(tooltip)
        AddRowButton->setToolTip(QCoreApplication::translate("TableBuilder", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        AddRowButton->setText(QString());
#if QT_CONFIG(tooltip)
        AddColumnButton->setToolTip(QCoreApplication::translate("TableBuilder", "Add column", nullptr));
#endif // QT_CONFIG(tooltip)
        AddColumnButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteRowButton->setToolTip(QCoreApplication::translate("TableBuilder", "Delete row", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteRowButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteColumnButton->setToolTip(QCoreApplication::translate("TableBuilder", "Delete column", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteColumnButton->setText(QString());
#if QT_CONFIG(tooltip)
        AddColumnButton_2->setToolTip(QCoreApplication::translate("TableBuilder", "Add column", nullptr));
#endif // QT_CONFIG(tooltip)
        AddColumnButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        AddRowButton_2->setToolTip(QCoreApplication::translate("TableBuilder", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        AddRowButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        SplitCellsButton_2->setToolTip(QCoreApplication::translate("TableBuilder", "Split cells", nullptr));
#endif // QT_CONFIG(tooltip)
        SplitCellsButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        MergeCellsButton_2->setToolTip(QCoreApplication::translate("TableBuilder", "Merge cells", nullptr));
#endif // QT_CONFIG(tooltip)
        MergeCellsButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteColumnButton_2->setToolTip(QCoreApplication::translate("TableBuilder", "Delete column", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteColumnButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        MergeCellsButton_3->setToolTip(QCoreApplication::translate("TableBuilder", "Merge cells", nullptr));
#endif // QT_CONFIG(tooltip)
        MergeCellsButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        SplitCellsButton_3->setToolTip(QCoreApplication::translate("TableBuilder", "Split cells", nullptr));
#endif // QT_CONFIG(tooltip)
        SplitCellsButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        AddRowButton_3->setToolTip(QCoreApplication::translate("TableBuilder", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        AddRowButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        AddColumnButton_3->setToolTip(QCoreApplication::translate("TableBuilder", "Add column", nullptr));
#endif // QT_CONFIG(tooltip)
        AddColumnButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteRowButton_2->setToolTip(QCoreApplication::translate("TableBuilder", "Delete row", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteRowButton_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TableBuilder", "Column 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TableBuilder", "Column 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TableBuilder", "Column 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TableBuilder", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TableBuilder", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TableBuilder", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableBuilder: public Ui_TableBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEBUILDER_H
