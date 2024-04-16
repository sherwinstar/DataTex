/********************************************************************************
** Form generated from reading UI file 'addfolder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFOLDER_H
#define UI_ADDFOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_addfolder
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *NameLine;
    QDialogButtonBox *OkbuttonBoxLine;

    void setupUi(QDialog *addfolder)
    {
        if (addfolder->objectName().isEmpty())
            addfolder->setObjectName(QString::fromUtf8("addfolder"));
        addfolder->resize(426, 116);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addfolder->sizePolicy().hasHeightForWidth());
        addfolder->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(addfolder);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 3, 10, 0);
        label = new QLabel(addfolder);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        NameLine = new QLineEdit(addfolder);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));

        gridLayout->addWidget(NameLine, 1, 0, 1, 1);

        OkbuttonBoxLine = new QDialogButtonBox(addfolder);
        OkbuttonBoxLine->setObjectName(QString::fromUtf8("OkbuttonBoxLine"));
        OkbuttonBoxLine->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(OkbuttonBoxLine, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(addfolder);

        QMetaObject::connectSlotsByName(addfolder);
    } // setupUi

    void retranslateUi(QDialog *addfolder)
    {
        addfolder->setWindowTitle(QCoreApplication::translate("addfolder", "New name", nullptr));
        label->setText(QCoreApplication::translate("addfolder", "New name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addfolder: public Ui_addfolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOLDER_H
