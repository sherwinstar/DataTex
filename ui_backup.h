/********************************************************************************
** Form generated from reading UI file 'backup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUP_H
#define UI_BACKUP_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "switch.h"

QT_BEGIN_NAMESPACE

class Ui_BackUp
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QCheckBox *BackUpDatabase;
    QFrame *line;
    QCheckBox *BackUpDBFile;
    QCheckBox *BackUpLatexFiles;
    QCheckBox *BackUpPdfFiles;
    QCheckBox *BackUpCsvFiles;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *BackUpRadioButton;
    QRadioButton *RestoreRadioButton;
    QTreeWidget *OpenDatabasesTreeWidget;
    QCheckBox *KeepFolderStructure;
    QLabel *SelectionLabel;
    QPushButton *SelectPath;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *DestinationLine;
    QPushButton *OpenPath;
    QLabel *UpdatePathInfo;
    QDialogButtonBox *OkBackUp;
    QPushButton *BackUpFilesButton;
    Switch *BackUpZipBase;
    QCheckBox *AddDateToName;
    QCheckBox *UpdatePath;
    QButtonGroup *BackUpGroup;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *BackUp)
    {
        if (BackUp->objectName().isEmpty())
            BackUp->setObjectName(QString::fromUtf8("BackUp"));
        BackUp->resize(793, 371);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pngwing.com(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        BackUp->setWindowIcon(icon);
        gridLayout = new QGridLayout(BackUp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(BackUp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 5, -1, 5);
        BackUpDatabase = new QCheckBox(frame);
        BackUpGroup = new QButtonGroup(BackUp);
        BackUpGroup->setObjectName(QString::fromUtf8("BackUpGroup"));
        BackUpGroup->setExclusive(false);
        BackUpGroup->addButton(BackUpDatabase);
        BackUpDatabase->setObjectName(QString::fromUtf8("BackUpDatabase"));

        verticalLayout->addWidget(BackUpDatabase);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        BackUpDBFile = new QCheckBox(frame);
        BackUpGroup->addButton(BackUpDBFile);
        BackUpDBFile->setObjectName(QString::fromUtf8("BackUpDBFile"));

        verticalLayout->addWidget(BackUpDBFile);

        BackUpLatexFiles = new QCheckBox(frame);
        BackUpGroup->addButton(BackUpLatexFiles);
        BackUpLatexFiles->setObjectName(QString::fromUtf8("BackUpLatexFiles"));

        verticalLayout->addWidget(BackUpLatexFiles);

        BackUpPdfFiles = new QCheckBox(frame);
        BackUpGroup->addButton(BackUpPdfFiles);
        BackUpPdfFiles->setObjectName(QString::fromUtf8("BackUpPdfFiles"));

        verticalLayout->addWidget(BackUpPdfFiles);

        BackUpCsvFiles = new QCheckBox(frame);
        BackUpGroup->addButton(BackUpCsvFiles);
        BackUpCsvFiles->setObjectName(QString::fromUtf8("BackUpCsvFiles"));

        verticalLayout->addWidget(BackUpCsvFiles);


        gridLayout->addWidget(frame, 2, 1, 3, 2);

        frame_2 = new QFrame(BackUp);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        BackUpRadioButton = new QRadioButton(frame_2);
        buttonGroup = new QButtonGroup(BackUp);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(BackUpRadioButton);
        BackUpRadioButton->setObjectName(QString::fromUtf8("BackUpRadioButton"));

        verticalLayout_2->addWidget(BackUpRadioButton);

        RestoreRadioButton = new QRadioButton(frame_2);
        buttonGroup->addButton(RestoreRadioButton);
        RestoreRadioButton->setObjectName(QString::fromUtf8("RestoreRadioButton"));

        verticalLayout_2->addWidget(RestoreRadioButton);


        gridLayout->addWidget(frame_2, 0, 1, 1, 2);

        OpenDatabasesTreeWidget = new QTreeWidget(BackUp);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/texfile.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font;
        font.setBold(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(OpenDatabasesTreeWidget);
        __qtreewidgetitem->setFont(0, font);
        __qtreewidgetitem->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(OpenDatabasesTreeWidget);
        __qtreewidgetitem1->setFont(0, font);
        __qtreewidgetitem1->setIcon(0, icon2);
        OpenDatabasesTreeWidget->setObjectName(QString::fromUtf8("OpenDatabasesTreeWidget"));
        OpenDatabasesTreeWidget->setAnimated(true);

        gridLayout->addWidget(OpenDatabasesTreeWidget, 0, 0, 8, 1);

        KeepFolderStructure = new QCheckBox(BackUp);
        KeepFolderStructure->setObjectName(QString::fromUtf8("KeepFolderStructure"));

        gridLayout->addWidget(KeepFolderStructure, 5, 1, 1, 1);

        SelectionLabel = new QLabel(BackUp);
        SelectionLabel->setObjectName(QString::fromUtf8("SelectionLabel"));

        gridLayout->addWidget(SelectionLabel, 1, 1, 1, 2);

        SelectPath = new QPushButton(BackUp);
        SelectPath->setObjectName(QString::fromUtf8("SelectPath"));

        gridLayout->addWidget(SelectPath, 8, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(BackUp);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        DestinationLine = new QLineEdit(BackUp);
        DestinationLine->setObjectName(QString::fromUtf8("DestinationLine"));

        horizontalLayout->addWidget(DestinationLine);

        OpenPath = new QPushButton(BackUp);
        OpenPath->setObjectName(QString::fromUtf8("OpenPath"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/document-open-data.svg"), QSize(), QIcon::Normal, QIcon::Off);
        OpenPath->setIcon(icon3);

        horizontalLayout->addWidget(OpenPath);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);

        UpdatePathInfo = new QLabel(BackUp);
        UpdatePathInfo->setObjectName(QString::fromUtf8("UpdatePathInfo"));

        gridLayout->addWidget(UpdatePathInfo, 9, 0, 1, 1);

        OkBackUp = new QDialogButtonBox(BackUp);
        OkBackUp->setObjectName(QString::fromUtf8("OkBackUp"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OkBackUp->sizePolicy().hasHeightForWidth());
        OkBackUp->setSizePolicy(sizePolicy);
        OkBackUp->setLayoutDirection(Qt::RightToLeft);
        OkBackUp->setOrientation(Qt::Horizontal);
        OkBackUp->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(OkBackUp, 9, 2, 1, 1);

        BackUpFilesButton = new QPushButton(BackUp);
        BackUpFilesButton->setObjectName(QString::fromUtf8("BackUpFilesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BackUpFilesButton->sizePolicy().hasHeightForWidth());
        BackUpFilesButton->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/database-line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        BackUpFilesButton->setIcon(icon4);

        gridLayout->addWidget(BackUpFilesButton, 8, 2, 1, 1);

        BackUpZipBase = new Switch(BackUp);
        BackUpZipBase->setObjectName(QString::fromUtf8("BackUpZipBase"));

        gridLayout->addWidget(BackUpZipBase, 5, 2, 1, 1);

        AddDateToName = new QCheckBox(BackUp);
        AddDateToName->setObjectName(QString::fromUtf8("AddDateToName"));

        gridLayout->addWidget(AddDateToName, 6, 2, 1, 1);

        UpdatePath = new QCheckBox(BackUp);
        UpdatePath->setObjectName(QString::fromUtf8("UpdatePath"));

        gridLayout->addWidget(UpdatePath, 6, 1, 1, 1);


        retranslateUi(BackUp);
        QObject::connect(OkBackUp, SIGNAL(clicked(QAbstractButton*)), BackUp, SLOT(close()));

        QMetaObject::connectSlotsByName(BackUp);
    } // setupUi

    void retranslateUi(QDialog *BackUp)
    {
        BackUp->setWindowTitle(QCoreApplication::translate("BackUp", "\316\221\317\200\316\277\316\270\316\256\316\272\316\265\317\205\317\203\316\267 \317\206\316\261\316\272\316\255\316\273\317\211\316\275 \316\272\316\261\316\271 \316\261\317\201\317\207\316\265\316\257\317\211\316\275", nullptr));
        BackUpDatabase->setText(QCoreApplication::translate("BackUp", "Back up entire database", nullptr));
        BackUpDBFile->setText(QCoreApplication::translate("BackUp", "Back up DB file", nullptr));
        BackUpLatexFiles->setText(QCoreApplication::translate("BackUp", "LaTeX files", nullptr));
        BackUpPdfFiles->setText(QCoreApplication::translate("BackUp", "Pdf files", nullptr));
        BackUpCsvFiles->setText(QCoreApplication::translate("BackUp", "Csv metadata files", nullptr));
        BackUpRadioButton->setText(QCoreApplication::translate("BackUp", "Back Up Database", nullptr));
        RestoreRadioButton->setText(QCoreApplication::translate("BackUp", "Restore files", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = OpenDatabasesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("BackUp", "Id", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("BackUp", "Path", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BackUp", "Count", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BackUp", "Name", nullptr));

        const bool __sortingEnabled = OpenDatabasesTreeWidget->isSortingEnabled();
        OpenDatabasesTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = OpenDatabasesTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("BackUp", "Latex databases", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = OpenDatabasesTreeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("BackUp", "Document databases", nullptr));
        OpenDatabasesTreeWidget->setSortingEnabled(__sortingEnabled);

        KeepFolderStructure->setText(QCoreApplication::translate("BackUp", "Keep folder structure", nullptr));
        SelectionLabel->setText(QCoreApplication::translate("BackUp", "Select files to back up", nullptr));
        SelectPath->setText(QCoreApplication::translate("BackUp", "Select destination", nullptr));
        label->setText(QCoreApplication::translate("BackUp", "Destination", nullptr));
        OpenPath->setText(QString());
        UpdatePathInfo->setText(QString());
        BackUpFilesButton->setText(QCoreApplication::translate("BackUp", "BackUp", nullptr));
        BackUpZipBase->setText(QCoreApplication::translate("BackUp", "Create zip", nullptr));
        AddDateToName->setText(QCoreApplication::translate("BackUp", "Add date to name", nullptr));
        UpdatePath->setText(QCoreApplication::translate("BackUp", "Update file paths", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BackUp: public Ui_BackUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUP_H
