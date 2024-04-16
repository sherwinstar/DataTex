/********************************************************************************
** Form generated from reading UI file 'graphicsbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSBUILDER_H
#define UI_GRAPHICSBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"
#include "minisplitter.h"
#include "switch.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicsBuilder
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *TikzButton;
    QPushButton *PstricksButton;
    QPushButton *AsymptoteButton;
    QPushButton *MetapostButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *CompileButton;
    QPushButton *AddUserCommandButton;
    QPushButton *SettingsButton;
    MiniSplitter *splitter;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QTreeWidget *TikzTree;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *PstTree;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *AsymptotTree;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *MetapostTree;
    MiniSplitter *splitter_2;
    LatexTextWidget *FigureSourceCode;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpinBox *spinBox;
    Switch *AutoCompile;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QDialogButtonBox *OkButton;
    QButtonGroup *GraphicsButtonGroup;

    void setupUi(QDialog *GraphicsBuilder)
    {
        if (GraphicsBuilder->objectName().isEmpty())
            GraphicsBuilder->setObjectName(QString::fromUtf8("GraphicsBuilder"));
        GraphicsBuilder->resize(1031, 563);
        gridLayout = new QGridLayout(GraphicsBuilder);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        TikzButton = new QPushButton(GraphicsBuilder);
        GraphicsButtonGroup = new QButtonGroup(GraphicsBuilder);
        GraphicsButtonGroup->setObjectName(QString::fromUtf8("GraphicsButtonGroup"));
        GraphicsButtonGroup->addButton(TikzButton);
        TikzButton->setObjectName(QString::fromUtf8("TikzButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TikzButton->sizePolicy().hasHeightForWidth());
        TikzButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Tikz_Icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TikzButton->setIcon(icon);
        TikzButton->setCheckable(true);
        TikzButton->setFlat(true);

        horizontalLayout->addWidget(TikzButton);

        PstricksButton = new QPushButton(GraphicsBuilder);
        GraphicsButtonGroup->addButton(PstricksButton);
        PstricksButton->setObjectName(QString::fromUtf8("PstricksButton"));
        sizePolicy.setHeightForWidth(PstricksButton->sizePolicy().hasHeightForWidth());
        PstricksButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Pstricks_Icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        PstricksButton->setIcon(icon1);
        PstricksButton->setCheckable(true);
        PstricksButton->setFlat(true);

        horizontalLayout->addWidget(PstricksButton);

        AsymptoteButton = new QPushButton(GraphicsBuilder);
        GraphicsButtonGroup->addButton(AsymptoteButton);
        AsymptoteButton->setObjectName(QString::fromUtf8("AsymptoteButton"));
        sizePolicy.setHeightForWidth(AsymptoteButton->sizePolicy().hasHeightForWidth());
        AsymptoteButton->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Asymptote_Icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AsymptoteButton->setIcon(icon2);
        AsymptoteButton->setCheckable(true);
        AsymptoteButton->setFlat(true);

        horizontalLayout->addWidget(AsymptoteButton);

        MetapostButton = new QPushButton(GraphicsBuilder);
        GraphicsButtonGroup->addButton(MetapostButton);
        MetapostButton->setObjectName(QString::fromUtf8("MetapostButton"));
        sizePolicy.setHeightForWidth(MetapostButton->sizePolicy().hasHeightForWidth());
        MetapostButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Metapost_Icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MetapostButton->setIcon(icon3);
        MetapostButton->setCheckable(true);
        MetapostButton->setFlat(true);

        horizontalLayout->addWidget(MetapostButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CompileButton = new QPushButton(GraphicsBuilder);
        CompileButton->setObjectName(QString::fromUtf8("CompileButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CompileButton->setIcon(icon4);
        CompileButton->setFlat(true);

        horizontalLayout->addWidget(CompileButton);

        AddUserCommandButton = new QPushButton(GraphicsBuilder);
        AddUserCommandButton->setObjectName(QString::fromUtf8("AddUserCommandButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddUserCommandButton->setIcon(icon5);
        AddUserCommandButton->setCheckable(true);
        AddUserCommandButton->setFlat(true);

        horizontalLayout->addWidget(AddUserCommandButton);

        SettingsButton = new QPushButton(GraphicsBuilder);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsButton->setIcon(icon6);
        SettingsButton->setCheckable(true);
        SettingsButton->setFlat(true);

        horizontalLayout->addWidget(SettingsButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        splitter = new MiniSplitter(GraphicsBuilder);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TikzTree = new QTreeWidget(page);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Tikz Commands"));
        TikzTree->setHeaderItem(__qtreewidgetitem);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        new QTreeWidgetItem(TikzTree);
        TikzTree->setObjectName(QString::fromUtf8("TikzTree"));

        verticalLayout->addWidget(TikzTree);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        PstTree = new QTreeWidget(page_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(PstTree);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(PstTree);
        new QTreeWidgetItem(PstTree);
        new QTreeWidgetItem(PstTree);
        new QTreeWidgetItem(PstTree);
        PstTree->setObjectName(QString::fromUtf8("PstTree"));

        verticalLayout_2->addWidget(PstTree);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        AsymptotTree = new QTreeWidget(page_3);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("Asymptote Commands"));
        AsymptotTree->setHeaderItem(__qtreewidgetitem2);
        new QTreeWidgetItem(AsymptotTree);
        new QTreeWidgetItem(AsymptotTree);
        new QTreeWidgetItem(AsymptotTree);
        AsymptotTree->setObjectName(QString::fromUtf8("AsymptotTree"));

        verticalLayout_3->addWidget(AsymptotTree);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        MetapostTree = new QTreeWidget(page_4);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setText(0, QString::fromUtf8("Metapost Commands"));
        MetapostTree->setHeaderItem(__qtreewidgetitem3);
        MetapostTree->setObjectName(QString::fromUtf8("MetapostTree"));

        verticalLayout_4->addWidget(MetapostTree);

        stackedWidget->addWidget(page_4);
        splitter->addWidget(stackedWidget);
        splitter_2 = new MiniSplitter(splitter);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        FigureSourceCode = new LatexTextWidget(splitter_2);
        FigureSourceCode->setObjectName(QString::fromUtf8("FigureSourceCode"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FigureSourceCode->sizePolicy().hasHeightForWidth());
        FigureSourceCode->setSizePolicy(sizePolicy2);
        splitter_2->addWidget(FigureSourceCode);
        scrollArea = new QScrollArea(splitter_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 502, 68));
        spinBox = new QSpinBox(scrollAreaWidgetContents);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(90, 40, 71, 26));
        spinBox->setMinimum(100);
        spinBox->setMaximum(1000);
        spinBox->setSingleStep(10);
        spinBox->setValue(500);
        AutoCompile = new Switch(scrollAreaWidgetContents);
        AutoCompile->setObjectName(QString::fromUtf8("AutoCompile"));
        AutoCompile->setGeometry(QRect(10, 10, 201, 23));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 71, 17));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 54, 17));
        comboBox = new QComboBox(scrollAreaWidgetContents);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 80, 141, 25));
        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter_2->addWidget(scrollArea);
        splitter->addWidget(splitter_2);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        OkButton = new QDialogButtonBox(GraphicsBuilder);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));
        OkButton->setOrientation(Qt::Horizontal);
        OkButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(OkButton, 2, 0, 1, 1);


        retranslateUi(GraphicsBuilder);
        QObject::connect(OkButton, SIGNAL(accepted()), GraphicsBuilder, SLOT(accept()));
        QObject::connect(OkButton, SIGNAL(rejected()), GraphicsBuilder, SLOT(reject()));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(GraphicsBuilder);
    } // setupUi

    void retranslateUi(QDialog *GraphicsBuilder)
    {
        GraphicsBuilder->setWindowTitle(QCoreApplication::translate("GraphicsBuilder", "Dialog", nullptr));
        TikzButton->setText(QString());
        PstricksButton->setText(QString());
        AsymptoteButton->setText(QString());
        MetapostButton->setText(QString());
        CompileButton->setText(QString());
        AddUserCommandButton->setText(QString());
        SettingsButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = TikzTree->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GraphicsBuilder", "Description", nullptr));

        const bool __sortingEnabled = TikzTree->isSortingEnabled();
        TikzTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = TikzTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("GraphicsBuilder", "Basic", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = TikzTree->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("GraphicsBuilder", "Lines", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = TikzTree->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("GraphicsBuilder", "Arrows", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = TikzTree->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("GraphicsBuilder", "Shapes", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = TikzTree->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("GraphicsBuilder", "Styles", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = TikzTree->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("GraphicsBuilder", "PgfPlots", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = TikzTree->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("GraphicsBuilder", "Libraries", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = TikzTree->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("GraphicsBuilder", "User", nullptr));
        TikzTree->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem9 = PstTree->headerItem();
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("GraphicsBuilder", "Description", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("GraphicsBuilder", "PsTricks Commands", nullptr));

        const bool __sortingEnabled1 = PstTree->isSortingEnabled();
        PstTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem10 = PstTree->topLevelItem(0);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("GraphicsBuilder", "Basic", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("GraphicsBuilder", "General", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem10->child(1);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("GraphicsBuilder", "Lines - Polygons", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem10->child(2);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("GraphicsBuilder", "Arrows", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem10->child(3);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("GraphicsBuilder", "Arcs - Circles - Curves", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem10->child(4);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("GraphicsBuilder", "Colors - Fills", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = PstTree->topLevelItem(1);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("GraphicsBuilder", "Plot2D", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = PstTree->topLevelItem(2);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("GraphicsBuilder", "Plot3D", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = PstTree->topLevelItem(3);
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("GraphicsBuilder", "Pst - Packages", nullptr));
        QTreeWidgetItem *___qtreewidgetitem19 = PstTree->topLevelItem(4);
        ___qtreewidgetitem19->setText(0, QCoreApplication::translate("GraphicsBuilder", "User", nullptr));
        PstTree->setSortingEnabled(__sortingEnabled1);

        QTreeWidgetItem *___qtreewidgetitem20 = AsymptotTree->headerItem();
        ___qtreewidgetitem20->setText(1, QCoreApplication::translate("GraphicsBuilder", "Description", nullptr));

        const bool __sortingEnabled2 = AsymptotTree->isSortingEnabled();
        AsymptotTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem21 = AsymptotTree->topLevelItem(0);
        ___qtreewidgetitem21->setText(0, QCoreApplication::translate("GraphicsBuilder", "Basic", nullptr));
        QTreeWidgetItem *___qtreewidgetitem22 = AsymptotTree->topLevelItem(1);
        ___qtreewidgetitem22->setText(0, QCoreApplication::translate("GraphicsBuilder", "Plot2D", nullptr));
        QTreeWidgetItem *___qtreewidgetitem23 = AsymptotTree->topLevelItem(2);
        ___qtreewidgetitem23->setText(0, QCoreApplication::translate("GraphicsBuilder", "Plot3D", nullptr));
        AsymptotTree->setSortingEnabled(__sortingEnabled2);

        QTreeWidgetItem *___qtreewidgetitem24 = MetapostTree->headerItem();
        ___qtreewidgetitem24->setText(1, QCoreApplication::translate("GraphicsBuilder", "Description", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("GraphicsBuilder", "ms", nullptr));
        AutoCompile->setText(QCoreApplication::translate("GraphicsBuilder", "Auto Compile / Preview", nullptr));
        label->setText(QCoreApplication::translate("GraphicsBuilder", "Delay time", nullptr));
        label_2->setText(QCoreApplication::translate("GraphicsBuilder", "Compiler", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("GraphicsBuilder", "PdfLaTeX (Tikz)", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("GraphicsBuilder", "Ps chain", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("GraphicsBuilder", "Asymptote", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("GraphicsBuilder", "Metapost", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GraphicsBuilder: public Ui_GraphicsBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSBUILDER_H
