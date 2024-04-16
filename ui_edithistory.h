/********************************************************************************
** Form generated from reading UI file 'edithistory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITHISTORY_H
#define UI_EDITHISTORY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditHistory
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *Complile;
    QPushButton *DeleteEntry;
    QListWidget *HistoryList;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *RestoreContent;
    QCheckBox *RestoreMetadata;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *TexButton;
    QPushButton *PdfButton;
    QPushButton *MetadataButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    LatexTextEdit *FileContent;
    LatexTextEdit *CurrentFileContent;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QTableWidget *MetadataTable;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *EditHistory)
    {
        if (EditHistory->objectName().isEmpty())
            EditHistory->setObjectName(QString::fromUtf8("EditHistory"));
        EditHistory->resize(1020, 704);
        gridLayout = new QGridLayout(EditHistory);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(EditHistory);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Complile = new QPushButton(layoutWidget);
        Complile->setObjectName(QString::fromUtf8("Complile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Complile->setIcon(icon);
        Complile->setFlat(true);

        horizontalLayout->addWidget(Complile);

        DeleteEntry = new QPushButton(layoutWidget);
        DeleteEntry->setObjectName(QString::fromUtf8("DeleteEntry"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeleteEntry->sizePolicy().hasHeightForWidth());
        DeleteEntry->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteEntry->setIcon(icon1);
        DeleteEntry->setFlat(true);

        horizontalLayout->addWidget(DeleteEntry);


        verticalLayout->addLayout(horizontalLayout);

        HistoryList = new QListWidget(layoutWidget);
        HistoryList->setObjectName(QString::fromUtf8("HistoryList"));
        HistoryList->setAlternatingRowColors(true);
        HistoryList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        HistoryList->setWordWrap(true);

        verticalLayout->addWidget(HistoryList);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        RestoreContent = new QCheckBox(groupBox);
        RestoreContent->setObjectName(QString::fromUtf8("RestoreContent"));

        verticalLayout_3->addWidget(RestoreContent);

        RestoreMetadata = new QCheckBox(groupBox);
        RestoreMetadata->setObjectName(QString::fromUtf8("RestoreMetadata"));

        verticalLayout_3->addWidget(RestoreMetadata);


        verticalLayout->addWidget(groupBox);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        TexButton = new QPushButton(layoutWidget1);
        buttonGroup = new QButtonGroup(EditHistory);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(TexButton);
        TexButton->setObjectName(QString::fromUtf8("TexButton"));
        sizePolicy.setHeightForWidth(TexButton->sizePolicy().hasHeightForWidth());
        TexButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/latex-config.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TexButton->setIcon(icon2);
        TexButton->setCheckable(true);
        TexButton->setFlat(true);

        horizontalLayout_2->addWidget(TexButton);

        PdfButton = new QPushButton(layoutWidget1);
        buttonGroup->addButton(PdfButton);
        PdfButton->setObjectName(QString::fromUtf8("PdfButton"));
        sizePolicy.setHeightForWidth(PdfButton->sizePolicy().hasHeightForWidth());
        PdfButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/pdf2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        PdfButton->setIcon(icon3);
        PdfButton->setCheckable(true);
        PdfButton->setFlat(true);

        horizontalLayout_2->addWidget(PdfButton);

        MetadataButton = new QPushButton(layoutWidget1);
        buttonGroup->addButton(MetadataButton);
        MetadataButton->setObjectName(QString::fromUtf8("MetadataButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/table.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MetadataButton->setIcon(icon4);
        MetadataButton->setCheckable(true);
        MetadataButton->setFlat(true);

        horizontalLayout_2->addWidget(MetadataButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(layoutWidget1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        FileContent = new LatexTextEdit(page);
        FileContent->setObjectName(QString::fromUtf8("FileContent"));

        gridLayout_2->addWidget(FileContent, 0, 0, 1, 1);

        CurrentFileContent = new LatexTextEdit(page);
        CurrentFileContent->setObjectName(QString::fromUtf8("CurrentFileContent"));

        gridLayout_2->addWidget(CurrentFileContent, 0, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        MetadataTable = new QTableWidget(page_3);
        MetadataTable->setObjectName(QString::fromUtf8("MetadataTable"));

        gridLayout_4->addWidget(MetadataTable, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EditHistory);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        label_2 = new QLabel(EditHistory);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        retranslateUi(EditHistory);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditHistory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditHistory, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditHistory);
    } // setupUi

    void retranslateUi(QDialog *EditHistory)
    {
        EditHistory->setWindowTitle(QCoreApplication::translate("EditHistory", "Edit history", nullptr));
        label->setText(QCoreApplication::translate("EditHistory", "History", nullptr));
        Complile->setText(QCoreApplication::translate("EditHistory", "Build temp file", nullptr));
        DeleteEntry->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("EditHistory", "Select what you want to restore", nullptr));
        RestoreContent->setText(QCoreApplication::translate("EditHistory", "File content", nullptr));
        RestoreMetadata->setText(QCoreApplication::translate("EditHistory", "Metadata", nullptr));
        label_3->setText(QCoreApplication::translate("EditHistory", "File view", nullptr));
        TexButton->setText(QString());
        PdfButton->setText(QString());
        MetadataButton->setText(QString());
        label_2->setText(QCoreApplication::translate("EditHistory", "Select a restore point from the file's history record below and replace the current file content or metadata with the ones selected.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditHistory: public Ui_EditHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITHISTORY_H
