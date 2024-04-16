/********************************************************************************
** Form generated from reading UI file 'preamblesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREAMBLESETTINGS_H
#define UI_PREAMBLESETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "minisplitter.h"
#include "switch.h"

QT_BEGIN_NAMESPACE

class Ui_PreambleSettings
{
public:
    QGridLayout *gridLayout_2;
    MiniSplitter *splitter_2;
    MiniSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    Switch *UseTemplate;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *PdfLatexButton;
    QRadioButton *XeLatexButton;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *ClassCombo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QComboBox *FontSizeCombo;
    QLabel *label_7;
    QComboBox *PaperSizeCombo;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *InputCheck;
    QComboBox *InputCombo;
    QCheckBox *FontCheck;
    QComboBox *FontEncCombo;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *BabelPolyglossiaCheckBox;
    QListWidget *BabelList;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *TamplateTree;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *PackageFilter;
    QVBoxLayout *verticalLayout;
    QPushButton *AddButton;
    QPushButton *RemoveButton;
    QSpacerItem *verticalSpacer;
    QListView *PackageList;
    LatexTextWidget *PreambleContentWidget;
    QLabel *PackageDescription;
    QDialogButtonBox *OkButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *CodeLine;
    QLabel *label;
    QLineEdit *NameLine;

    void setupUi(QDialog *PreambleSettings)
    {
        if (PreambleSettings->objectName().isEmpty())
            PreambleSettings->setObjectName(QString::fromUtf8("PreambleSettings"));
        PreambleSettings->resize(884, 612);
        gridLayout_2 = new QGridLayout(PreambleSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_2 = new MiniSplitter(PreambleSettings);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new MiniSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        UseTemplate = new Switch(widget);
        UseTemplate->setObjectName(QString::fromUtf8("UseTemplate"));

        verticalLayout_2->addWidget(UseTemplate);

        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_3 = new QVBoxLayout(page_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        PdfLatexButton = new QRadioButton(page_5);
        PdfLatexButton->setObjectName(QString::fromUtf8("PdfLatexButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PdfLatexButton->sizePolicy().hasHeightForWidth());
        PdfLatexButton->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(PdfLatexButton);

        XeLatexButton = new QRadioButton(page_5);
        XeLatexButton->setObjectName(QString::fromUtf8("XeLatexButton"));
        sizePolicy.setHeightForWidth(XeLatexButton->sizePolicy().hasHeightForWidth());
        XeLatexButton->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(XeLatexButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_10);

        line_2 = new QFrame(page_5);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_5);

        ClassCombo = new QComboBox(page_5);
        ClassCombo->addItem(QString());
        ClassCombo->addItem(QString());
        ClassCombo->addItem(QString());
        ClassCombo->addItem(QString());
        ClassCombo->addItem(QString());
        ClassCombo->setObjectName(QString::fromUtf8("ClassCombo"));
        ClassCombo->setEditable(true);

        horizontalLayout->addWidget(ClassCombo);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_6);

        FontSizeCombo = new QComboBox(page_5);
        FontSizeCombo->addItem(QString());
        FontSizeCombo->addItem(QString());
        FontSizeCombo->addItem(QString());
        FontSizeCombo->setObjectName(QString::fromUtf8("FontSizeCombo"));

        horizontalLayout_3->addWidget(FontSizeCombo);

        label_7 = new QLabel(page_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_7);

        PaperSizeCombo = new QComboBox(page_5);
        PaperSizeCombo->addItem(QString());
        PaperSizeCombo->addItem(QString());
        PaperSizeCombo->addItem(QString());
        PaperSizeCombo->addItem(QString());
        PaperSizeCombo->addItem(QString());
        PaperSizeCombo->addItem(QString());
        PaperSizeCombo->setObjectName(QString::fromUtf8("PaperSizeCombo"));
        PaperSizeCombo->setEditable(true);

        horizontalLayout_3->addWidget(PaperSizeCombo);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        InputCheck = new QCheckBox(page_5);
        InputCheck->setObjectName(QString::fromUtf8("InputCheck"));
        sizePolicy.setHeightForWidth(InputCheck->sizePolicy().hasHeightForWidth());
        InputCheck->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(InputCheck);

        InputCombo = new QComboBox(page_5);
        InputCombo->setObjectName(QString::fromUtf8("InputCombo"));

        horizontalLayout_8->addWidget(InputCombo);

        FontCheck = new QCheckBox(page_5);
        FontCheck->setObjectName(QString::fromUtf8("FontCheck"));
        sizePolicy.setHeightForWidth(FontCheck->sizePolicy().hasHeightForWidth());
        FontCheck->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(FontCheck);

        FontEncCombo = new QComboBox(page_5);
        FontEncCombo->setObjectName(QString::fromUtf8("FontEncCombo"));

        horizontalLayout_8->addWidget(FontEncCombo);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        BabelPolyglossiaCheckBox = new QCheckBox(page_5);
        BabelPolyglossiaCheckBox->setObjectName(QString::fromUtf8("BabelPolyglossiaCheckBox"));
        sizePolicy.setHeightForWidth(BabelPolyglossiaCheckBox->sizePolicy().hasHeightForWidth());
        BabelPolyglossiaCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(BabelPolyglossiaCheckBox);

        BabelList = new QListWidget(page_5);
        BabelList->setObjectName(QString::fromUtf8("BabelList"));

        horizontalLayout_7->addWidget(BabelList);


        verticalLayout_3->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_4 = new QVBoxLayout(page_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        TamplateTree = new QTreeWidget(page_6);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        TamplateTree->setHeaderItem(__qtreewidgetitem);
        new QTreeWidgetItem(TamplateTree);
        new QTreeWidgetItem(TamplateTree);
        TamplateTree->setObjectName(QString::fromUtf8("TamplateTree"));
        TamplateTree->setColumnCount(2);

        verticalLayout_4->addWidget(TamplateTree);

        stackedWidget->addWidget(page_6);

        verticalLayout_2->addWidget(stackedWidget);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        PackageFilter = new QLineEdit(widget1);
        PackageFilter->setObjectName(QString::fromUtf8("PackageFilter"));

        horizontalLayout_4->addWidget(PackageFilter);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AddButton = new QPushButton(widget1);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/go-next.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddButton->setIcon(icon);

        verticalLayout->addWidget(AddButton);

        RemoveButton = new QPushButton(widget1);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/go-previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveButton->setIcon(icon1);

        verticalLayout->addWidget(RemoveButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        PackageList = new QListView(widget1);
        PackageList->setObjectName(QString::fromUtf8("PackageList"));

        gridLayout->addWidget(PackageList, 1, 0, 1, 1);

        splitter->addWidget(widget1);
        splitter_2->addWidget(splitter);
        PreambleContentWidget = new LatexTextWidget(splitter_2);
        PreambleContentWidget->setObjectName(QString::fromUtf8("PreambleContentWidget"));
        splitter_2->addWidget(PreambleContentWidget);

        gridLayout_2->addWidget(splitter_2, 1, 0, 1, 2);

        PackageDescription = new QLabel(PreambleSettings);
        PackageDescription->setObjectName(QString::fromUtf8("PackageDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PackageDescription->sizePolicy().hasHeightForWidth());
        PackageDescription->setSizePolicy(sizePolicy2);
        PackageDescription->setWordWrap(true);

        gridLayout_2->addWidget(PackageDescription, 2, 0, 1, 1);

        OkButton = new QDialogButtonBox(PreambleSettings);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        sizePolicy.setHeightForWidth(OkButton->sizePolicy().hasHeightForWidth());
        OkButton->setSizePolicy(sizePolicy);
        OkButton->setOrientation(Qt::Horizontal);
        OkButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(OkButton, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PreambleSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_2);

        CodeLine = new QLineEdit(PreambleSettings);
        CodeLine->setObjectName(QString::fromUtf8("CodeLine"));

        horizontalLayout_2->addWidget(CodeLine);

        label = new QLabel(PreambleSettings);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label);

        NameLine = new QLineEdit(PreambleSettings);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));

        horizontalLayout_2->addWidget(NameLine);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 2);


        retranslateUi(PreambleSettings);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreambleSettings);
    } // setupUi

    void retranslateUi(QDialog *PreambleSettings)
    {
        PreambleSettings->setWindowTitle(QCoreApplication::translate("PreambleSettings", "New preamble", nullptr));
        UseTemplate->setText(QCoreApplication::translate("PreambleSettings", "New preamble from template", nullptr));
        PdfLatexButton->setText(QCoreApplication::translate("PreambleSettings", "PdfLaTeX", nullptr));
        XeLatexButton->setText(QCoreApplication::translate("PreambleSettings", "XeLaTeX", nullptr));
        label_5->setText(QCoreApplication::translate("PreambleSettings", "Document class", nullptr));
        ClassCombo->setItemText(0, QCoreApplication::translate("PreambleSettings", "article", nullptr));
        ClassCombo->setItemText(1, QCoreApplication::translate("PreambleSettings", "book", nullptr));
        ClassCombo->setItemText(2, QCoreApplication::translate("PreambleSettings", "report", nullptr));
        ClassCombo->setItemText(3, QCoreApplication::translate("PreambleSettings", "beamer", nullptr));
        ClassCombo->setItemText(4, QCoreApplication::translate("PreambleSettings", "letter", nullptr));

        label_6->setText(QCoreApplication::translate("PreambleSettings", "Font size", nullptr));
        FontSizeCombo->setItemText(0, QCoreApplication::translate("PreambleSettings", "10pt", nullptr));
        FontSizeCombo->setItemText(1, QCoreApplication::translate("PreambleSettings", "11pt", nullptr));
        FontSizeCombo->setItemText(2, QCoreApplication::translate("PreambleSettings", "12pt", nullptr));

        label_7->setText(QCoreApplication::translate("PreambleSettings", "Paper size", nullptr));
        PaperSizeCombo->setItemText(0, QCoreApplication::translate("PreambleSettings", "a4paper", nullptr));
        PaperSizeCombo->setItemText(1, QCoreApplication::translate("PreambleSettings", "a5parer", nullptr));
        PaperSizeCombo->setItemText(2, QCoreApplication::translate("PreambleSettings", "b5paper", nullptr));
        PaperSizeCombo->setItemText(3, QCoreApplication::translate("PreambleSettings", "letterpaper", nullptr));
        PaperSizeCombo->setItemText(4, QCoreApplication::translate("PreambleSettings", "executivepaper", nullptr));
        PaperSizeCombo->setItemText(5, QCoreApplication::translate("PreambleSettings", "legalpaper", nullptr));

        InputCheck->setText(QCoreApplication::translate("PreambleSettings", "Input encoding", nullptr));
        FontCheck->setText(QCoreApplication::translate("PreambleSettings", "Font encoding", nullptr));
        BabelPolyglossiaCheckBox->setText(QCoreApplication::translate("PreambleSettings", "Babel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = TamplateTree->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PreambleSettings", "Template", nullptr));

        const bool __sortingEnabled = TamplateTree->isSortingEnabled();
        TamplateTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = TamplateTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("PreambleSettings", "System", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = TamplateTree->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("PreambleSettings", "Custom", nullptr));
        TamplateTree->setSortingEnabled(__sortingEnabled);

        label_4->setText(QCoreApplication::translate("PreambleSettings", "Packages", nullptr));
        PackageFilter->setPlaceholderText(QCoreApplication::translate("PreambleSettings", "Search package...", nullptr));
        AddButton->setText(QString());
        RemoveButton->setText(QString());
        PackageDescription->setText(QString());
        label_2->setText(QCoreApplication::translate("PreambleSettings", "Primary key", nullptr));
        label->setText(QCoreApplication::translate("PreambleSettings", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreambleSettings: public Ui_PreambleSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREAMBLESETTINGS_H
