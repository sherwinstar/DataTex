/********************************************************************************
** Form generated from reading UI file 'adddatabasefield.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATABASEFIELD_H
#define UI_ADDDATABASEFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddDatabaseField
{
public:
    QGridLayout *gridLayout;
    QLineEdit *NameLine;
    QDialogButtonBox *OkButton;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *warning;
    QLineEdit *CodeLine;
    QLabel *InfoLabel;

    void setupUi(QDialog *AddDatabaseField)
    {
        if (AddDatabaseField->objectName().isEmpty())
            AddDatabaseField->setObjectName(QString::fromUtf8("AddDatabaseField"));
        AddDatabaseField->resize(545, 126);
        gridLayout = new QGridLayout(AddDatabaseField);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NameLine = new QLineEdit(AddDatabaseField);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));

        gridLayout->addWidget(NameLine, 2, 0, 1, 1);

        OkButton = new QDialogButtonBox(AddDatabaseField);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setOrientation(Qt::Horizontal);
        OkButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(OkButton, 3, 1, 1, 1);

        label_2 = new QLabel(AddDatabaseField);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(AddDatabaseField);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        warning = new QLabel(AddDatabaseField);
        warning->setObjectName(QString::fromUtf8("warning"));

        gridLayout->addWidget(warning, 3, 0, 1, 1);

        CodeLine = new QLineEdit(AddDatabaseField);
        CodeLine->setObjectName(QString::fromUtf8("CodeLine"));

        gridLayout->addWidget(CodeLine, 2, 1, 1, 1);

        InfoLabel = new QLabel(AddDatabaseField);
        InfoLabel->setObjectName(QString::fromUtf8("InfoLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setBold(true);
        InfoLabel->setFont(font);

        gridLayout->addWidget(InfoLabel, 0, 0, 1, 2);

        QWidget::setTabOrder(NameLine, CodeLine);

        retranslateUi(AddDatabaseField);

        QMetaObject::connectSlotsByName(AddDatabaseField);
    } // setupUi

    void retranslateUi(QDialog *AddDatabaseField)
    {
        AddDatabaseField->setWindowTitle(QCoreApplication::translate("AddDatabaseField", "New database field", nullptr));
        label_2->setText(QCoreApplication::translate("AddDatabaseField", "Primary key", nullptr));
        label->setText(QCoreApplication::translate("AddDatabaseField", "Name", nullptr));
        warning->setText(QString());
        InfoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddDatabaseField: public Ui_AddDatabaseField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATABASEFIELD_H
