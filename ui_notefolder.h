/********************************************************************************
** Form generated from reading UI file 'notefolder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEFOLDER_H
#define UI_NOTEFOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NoteFolder
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *NotePath;
    QPushButton *NoteButton;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *NoteName;
    QLineEdit *NoteFileName;
    QDialogButtonBox *NoteButtonBox;

    void setupUi(QDialog *NoteFolder)
    {
        if (NoteFolder->objectName().isEmpty())
            NoteFolder->setObjectName(QString::fromUtf8("NoteFolder"));
        NoteFolder->resize(483, 178);
        gridLayout = new QGridLayout(NoteFolder);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NoteFolder);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        NotePath = new QLineEdit(NoteFolder);
        NotePath->setObjectName(QString::fromUtf8("NotePath"));
        NotePath->setMinimumSize(QSize(0, 32));

        gridLayout->addWidget(NotePath, 1, 0, 1, 2);

        NoteButton = new QPushButton(NoteFolder);
        NoteButton->setObjectName(QString::fromUtf8("NoteButton"));
        NoteButton->setMinimumSize(QSize(0, 32));

        gridLayout->addWidget(NoteButton, 1, 2, 1, 1);

        label_2 = new QLabel(NoteFolder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(NoteFolder);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        NoteName = new QLineEdit(NoteFolder);
        NoteName->setObjectName(QString::fromUtf8("NoteName"));
        NoteName->setMinimumSize(QSize(0, 32));

        gridLayout->addWidget(NoteName, 3, 0, 1, 1);

        NoteFileName = new QLineEdit(NoteFolder);
        NoteFileName->setObjectName(QString::fromUtf8("NoteFileName"));
        NoteFileName->setMinimumSize(QSize(0, 32));

        gridLayout->addWidget(NoteFileName, 3, 1, 1, 2);

        NoteButtonBox = new QDialogButtonBox(NoteFolder);
        NoteButtonBox->setObjectName(QString::fromUtf8("NoteButtonBox"));
        NoteButtonBox->setOrientation(Qt::Horizontal);
        NoteButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(NoteButtonBox, 4, 0, 1, 3);


        retranslateUi(NoteFolder);
        QObject::connect(NoteButtonBox, SIGNAL(accepted()), NoteFolder, SLOT(accept()));
        QObject::connect(NoteButtonBox, SIGNAL(rejected()), NoteFolder, SLOT(reject()));

        QMetaObject::connectSlotsByName(NoteFolder);
    } // setupUi

    void retranslateUi(QDialog *NoteFolder)
    {
        NoteFolder->setWindowTitle(QCoreApplication::translate("NoteFolder", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NoteFolder", "Folder path", nullptr));
        NoteButton->setText(QCoreApplication::translate("NoteFolder", "Open", nullptr));
        label_2->setText(QCoreApplication::translate("NoteFolder", "Folder name", nullptr));
        label_3->setText(QCoreApplication::translate("NoteFolder", "File name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteFolder: public Ui_NoteFolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEFOLDER_H
