/********************************************************************************
** Form generated from reading UI file 'solutionsdocument.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLUTIONSDOCUMENT_H
#define UI_SOLUTIONSDOCUMENT_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SolutionsDocument
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *ShowDocument;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *QuickSolution;
    QTreeWidget *ExercisesInDocument;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ContentLabel_3;
    QFrame *line_3;
    QPushButton *ShowTex;
    QPushButton *ShowPdf;
    QPushButton *BuildButtonDoc;
    QPushButton *TopToolBar;
    QPushButton *SideToolBar;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_5;
    LatexTextWidget *DocumentContent;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_6;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ContentLabel;
    QFrame *line;
    QPushButton *ShowTexSolution;
    QPushButton *ShowPdfSolution;
    QPushButton *BuildButton;
    QPushButton *TopToolBarSol;
    QPushButton *SideToolBarSol;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    LatexTextWidget *SolutionsDocumentContent;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *SolutionsDocument)
    {
        if (SolutionsDocument->objectName().isEmpty())
            SolutionsDocument->setObjectName(QString::fromUtf8("SolutionsDocument"));
        SolutionsDocument->resize(882, 553);
        gridLayout_3 = new QGridLayout(SolutionsDocument);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter_2 = new QSplitter(SolutionsDocument);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ShowDocument = new QCheckBox(layoutWidget);
        ShowDocument->setObjectName(QString::fromUtf8("ShowDocument"));

        horizontalLayout_4->addWidget(ShowDocument);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        QuickSolution = new QPushButton(layoutWidget);
        QuickSolution->setObjectName(QString::fromUtf8("QuickSolution"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/dialog-ok-apply.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QuickSolution->setIcon(icon);

        horizontalLayout_4->addWidget(QuickSolution);


        verticalLayout->addLayout(horizontalLayout_4);

        ExercisesInDocument = new QTreeWidget(layoutWidget);
        ExercisesInDocument->setObjectName(QString::fromUtf8("ExercisesInDocument"));
        ExercisesInDocument->setSelectionMode(QAbstractItemView::SingleSelection);
        ExercisesInDocument->setSelectionBehavior(QAbstractItemView::SelectRows);
        ExercisesInDocument->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(ExercisesInDocument);

        splitter->addWidget(layoutWidget);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(verticalLayoutWidget);
        splitter_2->addWidget(splitter);
        layoutWidget_2 = new QWidget(splitter_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ContentLabel_3 = new QLabel(layoutWidget_2);
        ContentLabel_3->setObjectName(QString::fromUtf8("ContentLabel_3"));

        horizontalLayout_3->addWidget(ContentLabel_3);

        line_3 = new QFrame(layoutWidget_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        ShowTex = new QPushButton(layoutWidget_2);
        buttonGroup = new QButtonGroup(SolutionsDocument);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(ShowTex);
        ShowTex->setObjectName(QString::fromUtf8("ShowTex"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/latex-config.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowTex->setIcon(icon1);
        ShowTex->setCheckable(true);
        ShowTex->setFlat(true);

        horizontalLayout_3->addWidget(ShowTex);

        ShowPdf = new QPushButton(layoutWidget_2);
        buttonGroup->addButton(ShowPdf);
        ShowPdf->setObjectName(QString::fromUtf8("ShowPdf"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/pdf2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowPdf->setIcon(icon2);
        ShowPdf->setCheckable(true);
        ShowPdf->setFlat(true);

        horizontalLayout_3->addWidget(ShowPdf);

        BuildButtonDoc = new QPushButton(layoutWidget_2);
        BuildButtonDoc->setObjectName(QString::fromUtf8("BuildButtonDoc"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        BuildButtonDoc->setIcon(icon3);
        BuildButtonDoc->setFlat(true);

        horizontalLayout_3->addWidget(BuildButtonDoc);

        TopToolBar = new QPushButton(layoutWidget_2);
        TopToolBar->setObjectName(QString::fromUtf8("TopToolBar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/ToolBar_Icons/topbar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        TopToolBar->setIcon(icon4);
        TopToolBar->setCheckable(true);
        TopToolBar->setFlat(true);

        horizontalLayout_3->addWidget(TopToolBar);

        SideToolBar = new QPushButton(layoutWidget_2);
        SideToolBar->setObjectName(QString::fromUtf8("SideToolBar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/ToolBar_Icons/sidebar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SideToolBar->setIcon(icon5);
        SideToolBar->setCheckable(true);
        SideToolBar->setFlat(true);

        horizontalLayout_3->addWidget(SideToolBar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        stackedWidget_2 = new QStackedWidget(layoutWidget_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_5 = new QVBoxLayout(page_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        DocumentContent = new LatexTextWidget(page_3);
        DocumentContent->setObjectName(QString::fromUtf8("DocumentContent"));

        verticalLayout_5->addWidget(DocumentContent);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_6 = new QVBoxLayout(page_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        stackedWidget_2->addWidget(page_4);

        gridLayout_2->addWidget(stackedWidget_2, 2, 0, 1, 1);

        splitter_2->addWidget(layoutWidget_2);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ContentLabel = new QLabel(layoutWidget1);
        ContentLabel->setObjectName(QString::fromUtf8("ContentLabel"));

        horizontalLayout->addWidget(ContentLabel);

        line = new QFrame(layoutWidget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        ShowTexSolution = new QPushButton(layoutWidget1);
        buttonGroup_2 = new QButtonGroup(SolutionsDocument);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(ShowTexSolution);
        ShowTexSolution->setObjectName(QString::fromUtf8("ShowTexSolution"));
        ShowTexSolution->setIcon(icon1);
        ShowTexSolution->setCheckable(true);
        ShowTexSolution->setFlat(true);

        horizontalLayout->addWidget(ShowTexSolution);

        ShowPdfSolution = new QPushButton(layoutWidget1);
        buttonGroup_2->addButton(ShowPdfSolution);
        ShowPdfSolution->setObjectName(QString::fromUtf8("ShowPdfSolution"));
        ShowPdfSolution->setIcon(icon2);
        ShowPdfSolution->setCheckable(true);
        ShowPdfSolution->setFlat(true);

        horizontalLayout->addWidget(ShowPdfSolution);

        BuildButton = new QPushButton(layoutWidget1);
        BuildButton->setObjectName(QString::fromUtf8("BuildButton"));
        BuildButton->setIcon(icon3);
        BuildButton->setFlat(true);

        horizontalLayout->addWidget(BuildButton);

        TopToolBarSol = new QPushButton(layoutWidget1);
        TopToolBarSol->setObjectName(QString::fromUtf8("TopToolBarSol"));
        TopToolBarSol->setIcon(icon4);
        TopToolBarSol->setCheckable(true);
        TopToolBarSol->setFlat(true);

        horizontalLayout->addWidget(TopToolBarSol);

        SideToolBarSol = new QPushButton(layoutWidget1);
        SideToolBarSol->setObjectName(QString::fromUtf8("SideToolBarSol"));
        SideToolBarSol->setIcon(icon5);
        SideToolBarSol->setCheckable(true);
        SideToolBarSol->setFlat(true);

        horizontalLayout->addWidget(SideToolBarSol);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(layoutWidget1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        SolutionsDocumentContent = new LatexTextWidget(page);
        SolutionsDocumentContent->setObjectName(QString::fromUtf8("SolutionsDocumentContent"));

        verticalLayout_4->addWidget(SolutionsDocumentContent);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        splitter_2->addWidget(layoutWidget1);

        gridLayout_3->addWidget(splitter_2, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SolutionsDocument);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SolutionsDocument);
        QObject::connect(buttonBox, SIGNAL(accepted()), SolutionsDocument, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SolutionsDocument, SLOT(reject()));

        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SolutionsDocument);
    } // setupUi

    void retranslateUi(QDialog *SolutionsDocument)
    {
        SolutionsDocument->setWindowTitle(QCoreApplication::translate("SolutionsDocument", "Document Solution Creator", nullptr));
        ShowDocument->setText(QCoreApplication::translate("SolutionsDocument", "Show Source Document", nullptr));
        QuickSolution->setText(QCoreApplication::translate("SolutionsDocument", "Quick solve", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = ExercisesInDocument->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SolutionsDocument", "Solutions found", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SolutionsDocument", "Exercises", nullptr));
        ContentLabel_3->setText(QString());
        ShowTex->setText(QString());
        ShowPdf->setText(QString());
        BuildButtonDoc->setText(QString());
        TopToolBar->setText(QString());
        SideToolBar->setText(QString());
        ContentLabel->setText(QString());
        ShowTexSolution->setText(QString());
        ShowPdfSolution->setText(QString());
        BuildButton->setText(QString());
        TopToolBarSol->setText(QString());
        SideToolBarSol->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SolutionsDocument: public Ui_SolutionsDocument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLUTIONSDOCUMENT_H
