/********************************************************************************
** Form generated from reading UI file 'updatedocumentcontent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDOCUMENTCONTENT_H
#define UI_UPDATEDOCUMENTCONTENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_UpdateDocumentContent
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableView *FilesTable;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *UpdateFileButton;
    LatexTextEdit *FileContent;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *pushButton;
    LatexTextWidget *CurrentDocumentContent;
    QLabel *label_2;
    LatexTextWidget *UpdatedDocumentContent;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;

    void setupUi(QDialog *UpdateDocumentContent)
    {
        if (UpdateDocumentContent->objectName().isEmpty())
            UpdateDocumentContent->setObjectName(QString::fromUtf8("UpdateDocumentContent"));
        UpdateDocumentContent->resize(989, 581);
        gridLayout = new QGridLayout(UpdateDocumentContent);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(14, 14, 14, 14);
        splitter_2 = new QSplitter(UpdateDocumentContent);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setHandleWidth(8);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_3);

        FilesTable = new QTableView(layoutWidget);
        FilesTable->setObjectName(QString::fromUtf8("FilesTable"));
        FilesTable->setSelectionMode(QAbstractItemView::SingleSelection);
        FilesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        FilesTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(FilesTable);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        UpdateFileButton = new QPushButton(layoutWidget1);
        UpdateFileButton->setObjectName(QString::fromUtf8("UpdateFileButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(UpdateFileButton->sizePolicy().hasHeightForWidth());
        UpdateFileButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/view-refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        UpdateFileButton->setIcon(icon);

        horizontalLayout->addWidget(UpdateFileButton);


        verticalLayout_2->addLayout(horizontalLayout);

        FileContent = new LatexTextEdit(layoutWidget1);
        FileContent->setObjectName(QString::fromUtf8("FileContent"));

        verticalLayout_2->addWidget(FileContent);

        splitter->addWidget(layoutWidget1);
        splitter_2->addWidget(splitter);
        layoutWidget2 = new QWidget(splitter_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_4);

        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        CurrentDocumentContent = new LatexTextWidget(layoutWidget2);
        CurrentDocumentContent->setObjectName(QString::fromUtf8("CurrentDocumentContent"));

        gridLayout_3->addWidget(CurrentDocumentContent, 1, 1, 2, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        UpdatedDocumentContent = new LatexTextWidget(layoutWidget2);
        UpdatedDocumentContent->setObjectName(QString::fromUtf8("UpdatedDocumentContent"));

        gridLayout_3->addWidget(UpdatedDocumentContent, 1, 0, 2, 1);

        splitter_2->addWidget(layoutWidget2);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(UpdateDocumentContent);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        label_5 = new QLabel(UpdateDocumentContent);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);


        retranslateUi(UpdateDocumentContent);
        QObject::connect(buttonBox, SIGNAL(accepted()), UpdateDocumentContent, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UpdateDocumentContent, SLOT(reject()));

        QMetaObject::connectSlotsByName(UpdateDocumentContent);
    } // setupUi

    void retranslateUi(QDialog *UpdateDocumentContent)
    {
        UpdateDocumentContent->setWindowTitle(QCoreApplication::translate("UpdateDocumentContent", "Update Document Content", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateDocumentContent", "Files to be updated in document", nullptr));
        label->setText(QCoreApplication::translate("UpdateDocumentContent", "File content", nullptr));
        UpdateFileButton->setText(QCoreApplication::translate("UpdateDocumentContent", "file", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateDocumentContent", "Current content", nullptr));
        pushButton->setText(QCoreApplication::translate("UpdateDocumentContent", "Document", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateDocumentContent", "Updated content preview", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateDocumentContent", "Current document : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDocumentContent: public Ui_UpdateDocumentContent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDOCUMENTCONTENT_H
