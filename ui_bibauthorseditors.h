/********************************************************************************
** Form generated from reading UI file 'bibauthorseditors.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBAUTHORSEDITORS_H
#define UI_BIBAUTHORSEDITORS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibAuthorsEditors
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *warningLabel;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *DeleteAuthorButton;
    QPushButton *NewAuthorButton;
    QListWidget *AuthorsList;
    QLineEdit *NewAuthorLine;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *DeleteEditorButton;
    QListWidget *EditorsList;
    QPushButton *NewEditorButton;
    QLineEdit *NewEditorLine;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_5;
    QListWidget *TranslatorList;
    QPushButton *NewTranslatorButton;
    QPushButton *DeleteTranslatorButton;
    QLineEdit *NewTranslatorLine;

    void setupUi(QDialog *BibAuthorsEditors)
    {
        if (BibAuthorsEditors->objectName().isEmpty())
            BibAuthorsEditors->setObjectName(QString::fromUtf8("BibAuthorsEditors"));
        BibAuthorsEditors->resize(733, 400);
        gridLayout = new QGridLayout(BibAuthorsEditors);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(BibAuthorsEditors);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);

        warningLabel = new QLabel(BibAuthorsEditors);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));

        gridLayout->addWidget(warningLabel, 1, 0, 1, 1);

        splitter = new QSplitter(BibAuthorsEditors);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        DeleteAuthorButton = new QPushButton(layoutWidget);
        DeleteAuthorButton->setObjectName(QString::fromUtf8("DeleteAuthorButton"));
        sizePolicy.setHeightForWidth(DeleteAuthorButton->sizePolicy().hasHeightForWidth());
        DeleteAuthorButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-remove-user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteAuthorButton->setIcon(icon);
        DeleteAuthorButton->setIconSize(QSize(20, 20));
        DeleteAuthorButton->setFlat(true);

        gridLayout_3->addWidget(DeleteAuthorButton, 0, 2, 1, 1);

        NewAuthorButton = new QPushButton(layoutWidget);
        NewAuthorButton->setObjectName(QString::fromUtf8("NewAuthorButton"));
        sizePolicy.setHeightForWidth(NewAuthorButton->sizePolicy().hasHeightForWidth());
        NewAuthorButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-add-user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        NewAuthorButton->setIcon(icon1);
        NewAuthorButton->setIconSize(QSize(20, 20));
        NewAuthorButton->setFlat(true);

        gridLayout_3->addWidget(NewAuthorButton, 0, 1, 1, 1);

        AuthorsList = new QListWidget(layoutWidget);
        AuthorsList->setObjectName(QString::fromUtf8("AuthorsList"));
        AuthorsList->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(AuthorsList, 1, 0, 1, 3);

        NewAuthorLine = new QLineEdit(layoutWidget);
        NewAuthorLine->setObjectName(QString::fromUtf8("NewAuthorLine"));

        gridLayout_3->addWidget(NewAuthorLine, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        DeleteEditorButton = new QPushButton(layoutWidget_2);
        DeleteEditorButton->setObjectName(QString::fromUtf8("DeleteEditorButton"));
        sizePolicy.setHeightForWidth(DeleteEditorButton->sizePolicy().hasHeightForWidth());
        DeleteEditorButton->setSizePolicy(sizePolicy);
        DeleteEditorButton->setIcon(icon);
        DeleteEditorButton->setIconSize(QSize(20, 20));
        DeleteEditorButton->setFlat(true);

        gridLayout_4->addWidget(DeleteEditorButton, 0, 2, 1, 1);

        EditorsList = new QListWidget(layoutWidget_2);
        EditorsList->setObjectName(QString::fromUtf8("EditorsList"));

        gridLayout_4->addWidget(EditorsList, 1, 0, 1, 3);

        NewEditorButton = new QPushButton(layoutWidget_2);
        NewEditorButton->setObjectName(QString::fromUtf8("NewEditorButton"));
        sizePolicy.setHeightForWidth(NewEditorButton->sizePolicy().hasHeightForWidth());
        NewEditorButton->setSizePolicy(sizePolicy);
        NewEditorButton->setIcon(icon1);
        NewEditorButton->setIconSize(QSize(20, 20));
        NewEditorButton->setFlat(true);

        gridLayout_4->addWidget(NewEditorButton, 0, 1, 1, 1);

        NewEditorLine = new QLineEdit(layoutWidget_2);
        NewEditorLine->setObjectName(QString::fromUtf8("NewEditorLine"));

        gridLayout_4->addWidget(NewEditorLine, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        TranslatorList = new QListWidget(layoutWidget_3);
        TranslatorList->setObjectName(QString::fromUtf8("TranslatorList"));

        gridLayout_5->addWidget(TranslatorList, 1, 0, 1, 3);

        NewTranslatorButton = new QPushButton(layoutWidget_3);
        NewTranslatorButton->setObjectName(QString::fromUtf8("NewTranslatorButton"));
        sizePolicy.setHeightForWidth(NewTranslatorButton->sizePolicy().hasHeightForWidth());
        NewTranslatorButton->setSizePolicy(sizePolicy);
        NewTranslatorButton->setIcon(icon1);
        NewTranslatorButton->setIconSize(QSize(20, 20));
        NewTranslatorButton->setFlat(true);

        gridLayout_5->addWidget(NewTranslatorButton, 0, 1, 1, 1);

        DeleteTranslatorButton = new QPushButton(layoutWidget_3);
        DeleteTranslatorButton->setObjectName(QString::fromUtf8("DeleteTranslatorButton"));
        sizePolicy.setHeightForWidth(DeleteTranslatorButton->sizePolicy().hasHeightForWidth());
        DeleteTranslatorButton->setSizePolicy(sizePolicy);
        DeleteTranslatorButton->setIcon(icon);
        DeleteTranslatorButton->setIconSize(QSize(20, 20));
        DeleteTranslatorButton->setFlat(true);

        gridLayout_5->addWidget(DeleteTranslatorButton, 0, 2, 1, 1);

        NewTranslatorLine = new QLineEdit(layoutWidget_3);
        NewTranslatorLine->setObjectName(QString::fromUtf8("NewTranslatorLine"));

        gridLayout_5->addWidget(NewTranslatorLine, 0, 0, 1, 1);

        splitter->addWidget(layoutWidget_3);

        gridLayout->addWidget(splitter, 0, 0, 1, 2);


        retranslateUi(BibAuthorsEditors);
        QObject::connect(buttonBox, SIGNAL(rejected()), BibAuthorsEditors, SLOT(close()));

        QMetaObject::connectSlotsByName(BibAuthorsEditors);
    } // setupUi

    void retranslateUi(QDialog *BibAuthorsEditors)
    {
        BibAuthorsEditors->setWindowTitle(QCoreApplication::translate("BibAuthorsEditors", "Authors - Editors", nullptr));
        warningLabel->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteAuthorButton->setToolTip(QCoreApplication::translate("BibAuthorsEditors", "Delete current author", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteAuthorButton->setText(QString());
#if QT_CONFIG(tooltip)
        NewAuthorButton->setToolTip(QCoreApplication::translate("BibAuthorsEditors", "Add new author", nullptr));
#endif // QT_CONFIG(tooltip)
        NewAuthorButton->setText(QString());
        NewAuthorLine->setPlaceholderText(QCoreApplication::translate("BibAuthorsEditors", "New author...", nullptr));
#if QT_CONFIG(tooltip)
        DeleteEditorButton->setToolTip(QCoreApplication::translate("BibAuthorsEditors", "Delete current editor", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteEditorButton->setText(QString());
#if QT_CONFIG(tooltip)
        NewEditorButton->setToolTip(QCoreApplication::translate("BibAuthorsEditors", "Add new editor", nullptr));
#endif // QT_CONFIG(tooltip)
        NewEditorButton->setText(QString());
        NewEditorLine->setPlaceholderText(QCoreApplication::translate("BibAuthorsEditors", "New editor...", nullptr));
#if QT_CONFIG(tooltip)
        NewTranslatorButton->setToolTip(QCoreApplication::translate("BibAuthorsEditors", "Add new translator", nullptr));
#endif // QT_CONFIG(tooltip)
        NewTranslatorButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeleteTranslatorButton->setToolTip(QCoreApplication::translate("BibAuthorsEditors", "Delete current translator", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteTranslatorButton->setText(QString());
        NewTranslatorLine->setPlaceholderText(QCoreApplication::translate("BibAuthorsEditors", "New translator...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibAuthorsEditors: public Ui_BibAuthorsEditors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBAUTHORSEDITORS_H
