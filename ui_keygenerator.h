/********************************************************************************
** Form generated from reading UI file 'keygenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYGENERATOR_H
#define UI_KEYGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_KeyGenerator
{
public:
    QGridLayout *gridLayout;
    QPushButton *IncludeSymbols;
    QTextEdit *Code;
    QPushButton *IncludeCapitals;
    QDialogButtonBox *buttonBox;
    QSlider *keyLengthSlider;
    QPushButton *IncludeSmall;
    QHBoxLayout *horizontalLayout;
    QLabel *SafeLevel;
    QSpacerItem *horizontalSpacer;
    QSpinBox *KeyLength;
    QPushButton *Update;
    QPushButton *Copy;
    QPushButton *IncludeNumbers;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *KeyGenerator)
    {
        if (KeyGenerator->objectName().isEmpty())
            KeyGenerator->setObjectName(QString::fromUtf8("KeyGenerator"));
        KeyGenerator->resize(454, 205);
        gridLayout = new QGridLayout(KeyGenerator);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        IncludeSymbols = new QPushButton(KeyGenerator);
        buttonGroup = new QButtonGroup(KeyGenerator);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->setExclusive(false);
        buttonGroup->addButton(IncludeSymbols);
        IncludeSymbols->setObjectName(QString::fromUtf8("IncludeSymbols"));
        IncludeSymbols->setCheckable(true);

        gridLayout->addWidget(IncludeSymbols, 3, 3, 1, 1);

        Code = new QTextEdit(KeyGenerator);
        Code->setObjectName(QString::fromUtf8("Code"));

        gridLayout->addWidget(Code, 2, 0, 1, 4);

        IncludeCapitals = new QPushButton(KeyGenerator);
        buttonGroup->addButton(IncludeCapitals);
        IncludeCapitals->setObjectName(QString::fromUtf8("IncludeCapitals"));
        IncludeCapitals->setCheckable(true);

        gridLayout->addWidget(IncludeCapitals, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(KeyGenerator);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 4);

        keyLengthSlider = new QSlider(KeyGenerator);
        keyLengthSlider->setObjectName(QString::fromUtf8("keyLengthSlider"));
        keyLengthSlider->setMinimum(4);
        keyLengthSlider->setMaximum(128);
        keyLengthSlider->setSliderPosition(8);
        keyLengthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(keyLengthSlider, 1, 0, 1, 4);

        IncludeSmall = new QPushButton(KeyGenerator);
        buttonGroup->addButton(IncludeSmall);
        IncludeSmall->setObjectName(QString::fromUtf8("IncludeSmall"));
        IncludeSmall->setCheckable(true);

        gridLayout->addWidget(IncludeSmall, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SafeLevel = new QLabel(KeyGenerator);
        SafeLevel->setObjectName(QString::fromUtf8("SafeLevel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setPointSize(10);
        font.setBold(true);
        SafeLevel->setFont(font);

        horizontalLayout->addWidget(SafeLevel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        KeyLength = new QSpinBox(KeyGenerator);
        KeyLength->setObjectName(QString::fromUtf8("KeyLength"));
        KeyLength->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        KeyLength->setMinimum(4);
        KeyLength->setMaximum(128);
        KeyLength->setValue(8);

        horizontalLayout->addWidget(KeyLength);

        Update = new QPushButton(KeyGenerator);
        Update->setObjectName(QString::fromUtf8("Update"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/update-document.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Update->setIcon(icon);

        horizontalLayout->addWidget(Update);

        Copy = new QPushButton(KeyGenerator);
        Copy->setObjectName(QString::fromUtf8("Copy"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/edit-copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Copy->setIcon(icon1);

        horizontalLayout->addWidget(Copy);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 4);

        IncludeNumbers = new QPushButton(KeyGenerator);
        buttonGroup->addButton(IncludeNumbers);
        IncludeNumbers->setObjectName(QString::fromUtf8("IncludeNumbers"));
        IncludeNumbers->setCheckable(true);

        gridLayout->addWidget(IncludeNumbers, 3, 2, 1, 1);


        retranslateUi(KeyGenerator);
        QObject::connect(buttonBox, SIGNAL(accepted()), KeyGenerator, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KeyGenerator, SLOT(reject()));

        QMetaObject::connectSlotsByName(KeyGenerator);
    } // setupUi

    void retranslateUi(QDialog *KeyGenerator)
    {
        KeyGenerator->setWindowTitle(QCoreApplication::translate("KeyGenerator", "Key Generator", nullptr));
        IncludeSymbols->setText(QCoreApplication::translate("KeyGenerator", "! @ #", nullptr));
        IncludeCapitals->setText(QCoreApplication::translate("KeyGenerator", "A-Z", nullptr));
        IncludeSmall->setText(QCoreApplication::translate("KeyGenerator", "a-z", nullptr));
        SafeLevel->setText(QString());
        Update->setText(QString());
        Copy->setText(QString());
        IncludeNumbers->setText(QCoreApplication::translate("KeyGenerator", "0-9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyGenerator: public Ui_KeyGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYGENERATOR_H
