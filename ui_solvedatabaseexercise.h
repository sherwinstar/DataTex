/********************************************************************************
** Form generated from reading UI file 'solvedatabaseexercise.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLVEDATABASEEXERCISE_H
#define UI_SOLVEDATABASEEXERCISE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "latexeditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SolveDatabaseExercise
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_6;
    QDialogButtonBox *CloseButton;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ShowSolved;
    QPushButton *ShowUnsolved;
    QPushButton *EnableSortingFiles;
    QPushButton *ClearFiltersFD;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *ToolBar;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_5;
    LatexTextWidget *SolutionContent;
    QWidget *stackedWidgetPage2;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *NewSolutionButton;
    QPushButton *DeleteCurrentSolution;
    QComboBox *SolutionsCombo;
    QPushButton *SolutionReady;
    QPushButton *SolutionNotReady;
    QPushButton *ShowDescription;
    QFrame *line_3;
    QPushButton *SplitTexPdf;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *SolveDatabaseExercise)
    {
        if (SolveDatabaseExercise->objectName().isEmpty())
            SolveDatabaseExercise->setObjectName(QString::fromUtf8("SolveDatabaseExercise"));
        SolveDatabaseExercise->resize(1235, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SolveDatabaseExercise->sizePolicy().hasHeightForWidth());
        SolveDatabaseExercise->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(SolveDatabaseExercise);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        CloseButton = new QDialogButtonBox(SolveDatabaseExercise);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CloseButton->sizePolicy().hasHeightForWidth());
        CloseButton->setSizePolicy(sizePolicy1);
        CloseButton->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_6->addWidget(CloseButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_6, 2, 0, 1, 1);

        splitter_2 = new QSplitter(SolveDatabaseExercise);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        gridLayoutWidget = new QWidget(splitter_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ShowSolved = new QPushButton(gridLayoutWidget);
        ShowSolved->setObjectName(QString::fromUtf8("ShowSolved"));
        sizePolicy1.setHeightForWidth(ShowSolved->sizePolicy().hasHeightForWidth());
        ShowSolved->setSizePolicy(sizePolicy1);
        ShowSolved->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ok.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowSolved->setIcon(icon);
        ShowSolved->setCheckable(true);
        ShowSolved->setFlat(true);

        horizontalLayout_2->addWidget(ShowSolved);

        ShowUnsolved = new QPushButton(gridLayoutWidget);
        ShowUnsolved->setObjectName(QString::fromUtf8("ShowUnsolved"));
        sizePolicy1.setHeightForWidth(ShowUnsolved->sizePolicy().hasHeightForWidth());
        ShowUnsolved->setSizePolicy(sizePolicy1);
        ShowUnsolved->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/not.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowUnsolved->setIcon(icon1);
        ShowUnsolved->setCheckable(true);
        ShowUnsolved->setFlat(true);

        horizontalLayout_2->addWidget(ShowUnsolved);

        EnableSortingFiles = new QPushButton(gridLayoutWidget);
        EnableSortingFiles->setObjectName(QString::fromUtf8("EnableSortingFiles"));
        sizePolicy1.setHeightForWidth(EnableSortingFiles->sizePolicy().hasHeightForWidth());
        EnableSortingFiles->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/sort-presence.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EnableSortingFiles->setIcon(icon2);
        EnableSortingFiles->setCheckable(true);
        EnableSortingFiles->setFlat(true);

        horizontalLayout_2->addWidget(EnableSortingFiles);

        ClearFiltersFD = new QPushButton(gridLayoutWidget);
        ClearFiltersFD->setObjectName(QString::fromUtf8("ClearFiltersFD"));
        sizePolicy1.setHeightForWidth(ClearFiltersFD->sizePolicy().hasHeightForWidth());
        ClearFiltersFD->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/kt-remove-filters.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ClearFiltersFD->setIcon(icon3);
        ClearFiltersFD->setFlat(true);

        horizontalLayout_2->addWidget(ClearFiltersFD);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        splitter_2->addWidget(gridLayoutWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        font.setBold(true);
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget_2 = new QStackedWidget(verticalLayoutWidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        stackedWidget_2->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget_2);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ToolBar = new QWidget(verticalLayoutWidget_2);
        ToolBar->setObjectName(QString::fromUtf8("ToolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ToolBar->sizePolicy().hasHeightForWidth());
        ToolBar->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(ToolBar);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(ToolBar);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);

        line_2 = new QFrame(ToolBar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(ToolBar);

        stackedWidget = new QStackedWidget(verticalLayoutWidget_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        gridLayout_5 = new QGridLayout(stackedWidgetPage1);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 1);
        SolutionContent = new LatexTextWidget(stackedWidgetPage1);
        SolutionContent->setObjectName(QString::fromUtf8("SolutionContent"));

        gridLayout_5->addWidget(SolutionContent, 0, 0, 2, 1);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        gridLayout_10 = new QGridLayout(stackedWidgetPage2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        stackedWidget->addWidget(stackedWidgetPage2);

        verticalLayout_2->addWidget(stackedWidget);

        splitter->addWidget(verticalLayoutWidget_2);
        splitter_2->addWidget(splitter);

        gridLayout_2->addWidget(splitter_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        NewSolutionButton = new QPushButton(SolveDatabaseExercise);
        NewSolutionButton->setObjectName(QString::fromUtf8("NewSolutionButton"));
        sizePolicy1.setHeightForWidth(NewSolutionButton->sizePolicy().hasHeightForWidth());
        NewSolutionButton->setSizePolicy(sizePolicy1);
        NewSolutionButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        NewSolutionButton->setIcon(icon4);
        NewSolutionButton->setFlat(true);

        horizontalLayout_3->addWidget(NewSolutionButton);

        DeleteCurrentSolution = new QPushButton(SolveDatabaseExercise);
        DeleteCurrentSolution->setObjectName(QString::fromUtf8("DeleteCurrentSolution"));
        sizePolicy1.setHeightForWidth(DeleteCurrentSolution->sizePolicy().hasHeightForWidth());
        DeleteCurrentSolution->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteCurrentSolution->setIcon(icon5);
        DeleteCurrentSolution->setFlat(true);

        horizontalLayout_3->addWidget(DeleteCurrentSolution);

        SolutionsCombo = new QComboBox(SolveDatabaseExercise);
        SolutionsCombo->setObjectName(QString::fromUtf8("SolutionsCombo"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SolutionsCombo->sizePolicy().hasHeightForWidth());
        SolutionsCombo->setSizePolicy(sizePolicy3);
        SolutionsCombo->setMinimumSize(QSize(180, 0));
        SolutionsCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(SolutionsCombo);

        SolutionReady = new QPushButton(SolveDatabaseExercise);
        buttonGroup_2 = new QButtonGroup(SolveDatabaseExercise);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(SolutionReady);
        SolutionReady->setObjectName(QString::fromUtf8("SolutionReady"));
        sizePolicy1.setHeightForWidth(SolutionReady->sizePolicy().hasHeightForWidth());
        SolutionReady->setSizePolicy(sizePolicy1);
        SolutionReady->setStyleSheet(QString::fromUtf8(""));
        SolutionReady->setIcon(icon);
        SolutionReady->setIconSize(QSize(20, 20));
        SolutionReady->setCheckable(true);
        SolutionReady->setFlat(true);

        horizontalLayout_3->addWidget(SolutionReady);

        SolutionNotReady = new QPushButton(SolveDatabaseExercise);
        buttonGroup_2->addButton(SolutionNotReady);
        SolutionNotReady->setObjectName(QString::fromUtf8("SolutionNotReady"));
        sizePolicy1.setHeightForWidth(SolutionNotReady->sizePolicy().hasHeightForWidth());
        SolutionNotReady->setSizePolicy(sizePolicy1);
        SolutionNotReady->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/notready.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SolutionNotReady->setIcon(icon6);
        SolutionNotReady->setIconSize(QSize(20, 20));
        SolutionNotReady->setCheckable(true);
        SolutionNotReady->setFlat(true);

        horizontalLayout_3->addWidget(SolutionNotReady);

        ShowDescription = new QPushButton(SolveDatabaseExercise);
        ShowDescription->setObjectName(QString::fromUtf8("ShowDescription"));
        sizePolicy1.setHeightForWidth(ShowDescription->sizePolicy().hasHeightForWidth());
        ShowDescription->setSizePolicy(sizePolicy1);
        ShowDescription->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/help-about.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ShowDescription->setIcon(icon7);
        ShowDescription->setIconSize(QSize(20, 20));
        ShowDescription->setFlat(true);

        horizontalLayout_3->addWidget(ShowDescription);

        line_3 = new QFrame(SolveDatabaseExercise);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        SplitTexPdf = new QPushButton(SolveDatabaseExercise);
        SplitTexPdf->setObjectName(QString::fromUtf8("SplitTexPdf"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/swap-panels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SplitTexPdf->setIcon(icon8);
        SplitTexPdf->setCheckable(true);
        SplitTexPdf->setFlat(true);

        horizontalLayout_3->addWidget(SplitTexPdf);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        retranslateUi(SolveDatabaseExercise);

        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SolveDatabaseExercise);
    } // setupUi

    void retranslateUi(QDialog *SolveDatabaseExercise)
    {
        SolveDatabaseExercise->setWindowTitle(QCoreApplication::translate("SolveDatabaseExercise", "Solution creator", nullptr));
        label_3->setText(QCoreApplication::translate("SolveDatabaseExercise", "Exercises - Subjects", nullptr));
#if QT_CONFIG(tooltip)
        ShowSolved->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Show solved files", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowSolved->setText(QString());
#if QT_CONFIG(tooltip)
        ShowUnsolved->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Show unsolved files", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowUnsolved->setText(QString());
        EnableSortingFiles->setText(QString());
        ClearFiltersFD->setText(QString());
        label_5->setText(QCoreApplication::translate("SolveDatabaseExercise", "Exercise", nullptr));
        label_6->setText(QCoreApplication::translate("SolveDatabaseExercise", "Solution", nullptr));
#if QT_CONFIG(tooltip)
        NewSolutionButton->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Create new solution for this exercise", nullptr));
#endif // QT_CONFIG(tooltip)
        NewSolutionButton->setText(QCoreApplication::translate("SolveDatabaseExercise", "New Solution", nullptr));
#if QT_CONFIG(tooltip)
        DeleteCurrentSolution->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Delete current solution", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteCurrentSolution->setText(QCoreApplication::translate("SolveDatabaseExercise", "Delete current solution", nullptr));
#if QT_CONFIG(tooltip)
        SolutionReady->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Mark solution as finished/unfinished", nullptr));
#endif // QT_CONFIG(tooltip)
        SolutionReady->setText(QString());
#if QT_CONFIG(tooltip)
        SolutionNotReady->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Mark solution as finished/unfinished", nullptr));
#endif // QT_CONFIG(tooltip)
        SolutionNotReady->setText(QString());
#if QT_CONFIG(tooltip)
        ShowDescription->setToolTip(QCoreApplication::translate("SolveDatabaseExercise", "Mark solution as finished/unfinished", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowDescription->setText(QString());
        SplitTexPdf->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SolveDatabaseExercise: public Ui_SolveDatabaseExercise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLVEDATABASEEXERCISE_H
