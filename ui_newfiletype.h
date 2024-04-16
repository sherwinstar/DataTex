/********************************************************************************
** Form generated from reading UI file 'newfiletype.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILETYPE_H
#define UI_NEWFILETYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_NewFileType
{
public:
    QGridLayout *gridLayout;
    QLineEdit *FolderLine;
    QLabel *label_2;
    QLineEdit *IdLine;
    QLabel *label;
    QLineEdit *NameLine;
    QLabel *label_3;
    QCheckBox *NeedsSolution;
    QLabel *warning;
    QDialogButtonBox *OkButton;

    void setupUi(QDialog *NewFileType)
    {
        if (NewFileType->objectName().isEmpty())
            NewFileType->setObjectName(QString::fromUtf8("NewFileType"));
        NewFileType->resize(400, 166);
        gridLayout = new QGridLayout(NewFileType);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(14, -1, 14, -1);
        FolderLine = new QLineEdit(NewFileType);
        FolderLine->setObjectName(QString::fromUtf8("FolderLine"));

        gridLayout->addWidget(FolderLine, 3, 0, 1, 2);

        label_2 = new QLabel(NewFileType);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        IdLine = new QLineEdit(NewFileType);
        IdLine->setObjectName(QString::fromUtf8("IdLine"));

        gridLayout->addWidget(IdLine, 1, 0, 1, 1);

        label = new QLabel(NewFileType);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        NameLine = new QLineEdit(NewFileType);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));

        gridLayout->addWidget(NameLine, 1, 1, 1, 1);

        label_3 = new QLabel(NewFileType);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        NeedsSolution = new QCheckBox(NewFileType);
        NeedsSolution->setObjectName(QString::fromUtf8("NeedsSolution"));

        gridLayout->addWidget(NeedsSolution, 4, 0, 1, 2);

        warning = new QLabel(NewFileType);
        warning->setObjectName(QString::fromUtf8("warning"));

        gridLayout->addWidget(warning, 5, 0, 1, 1);

        OkButton = new QDialogButtonBox(NewFileType);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setOrientation(Qt::Horizontal);
        OkButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(OkButton, 5, 1, 1, 1);

        QWidget::setTabOrder(IdLine, NameLine);
        QWidget::setTabOrder(NameLine, FolderLine);
        QWidget::setTabOrder(FolderLine, NeedsSolution);

        retranslateUi(NewFileType);
        QObject::connect(OkButton, SIGNAL(accepted()), NewFileType, SLOT(accept()));
        QObject::connect(OkButton, SIGNAL(rejected()), NewFileType, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewFileType);
    } // setupUi

    void retranslateUi(QDialog *NewFileType)
    {
        NewFileType->setWindowTitle(QCoreApplication::translate("NewFileType", "New file type", nullptr));
        label_2->setText(QCoreApplication::translate("NewFileType", "Name", nullptr));
        label->setText(QCoreApplication::translate("NewFileType", "Primary key", nullptr));
        label_3->setText(QCoreApplication::translate("NewFileType", "Folder name", nullptr));
        NeedsSolution->setText(QCoreApplication::translate("NewFileType", "The files of this type will have solutions.", nullptr));
        warning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewFileType: public Ui_NewFileType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILETYPE_H
