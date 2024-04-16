/********************************************************************************
** Form generated from reading UI file 'qpdfviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPDFVIEWER_H
#define UI_QPDFVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qpdfview.h>

QT_BEGIN_NAMESPACE

class Ui_QPdfViewer
{
public:
    QAction *actionOpen;
    QAction *actionPdf;
    QAction *actionPrint;
    QAction *actionAbout_Qt;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionPrevious_Page;
    QAction *actionNext_Page;
    QAction *actionContinuous;
    QAction *actionHideTab;
    QAction *actionShowTab;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *bookmarkTab;
    QVBoxLayout *verticalLayout_3;
    QTreeView *bookmarkView;
    QWidget *pagesTab;
    QPdfView *pdfView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QPdfViewer)
    {
        if (QPdfViewer->objectName().isEmpty())
            QPdfViewer->setObjectName(QString::fromUtf8("QPdfViewer"));
        QPdfViewer->setWindowModality(Qt::NonModal);
        QPdfViewer->resize(716, 600);
        QPdfViewer->setUnifiedTitleAndToolBarOnMac(true);
        actionOpen = new QAction(QPdfViewer);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionOpen->setIcon(icon);
        actionPdf = new QAction(QPdfViewer);
        actionPdf->setObjectName(QString::fromUtf8("actionPdf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/pdf.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPdf->setIcon(icon1);
        actionPrint = new QAction(QPdfViewer);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/document-print.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon2);
        actionAbout_Qt = new QAction(QPdfViewer);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionZoom_In = new QAction(QPdfViewer);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("zoom-in");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionZoom_In->setIcon(icon3);
        actionZoom_Out = new QAction(QPdfViewer);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("zoom-out");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionZoom_Out->setIcon(icon4);
        actionPrevious_Page = new QAction(QPdfViewer);
        actionPrevious_Page->setObjectName(QString::fromUtf8("actionPrevious_Page"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("arrow-left");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPrevious_Page->setIcon(icon5);
        actionNext_Page = new QAction(QPdfViewer);
        actionNext_Page->setObjectName(QString::fromUtf8("actionNext_Page"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("arrow-right");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNext_Page->setIcon(icon6);
        actionContinuous = new QAction(QPdfViewer);
        actionContinuous->setObjectName(QString::fromUtf8("actionContinuous"));
        actionContinuous->setCheckable(true);
        actionHideTab = new QAction(QPdfViewer);
        actionHideTab->setObjectName(QString::fromUtf8("actionHideTab"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("hide_table_row");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHideTab->setIcon(icon7);
        actionShowTab = new QAction(QPdfViewer);
        actionShowTab->setObjectName(QString::fromUtf8("actionShowTab"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("show_table_row");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionShowTab->setIcon(icon8);
        centralWidget = new QWidget(QPdfViewer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setDocumentMode(false);
        bookmarkTab = new QWidget();
        bookmarkTab->setObjectName(QString::fromUtf8("bookmarkTab"));
        verticalLayout_3 = new QVBoxLayout(bookmarkTab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        bookmarkView = new QTreeView(bookmarkTab);
        bookmarkView->setObjectName(QString::fromUtf8("bookmarkView"));
        sizePolicy.setHeightForWidth(bookmarkView->sizePolicy().hasHeightForWidth());
        bookmarkView->setSizePolicy(sizePolicy);
        bookmarkView->setHeaderHidden(true);

        verticalLayout_3->addWidget(bookmarkView);

        tabWidget->addTab(bookmarkTab, QString());
        pagesTab = new QWidget();
        pagesTab->setObjectName(QString::fromUtf8("pagesTab"));
        tabWidget->addTab(pagesTab, QString());
        splitter->addWidget(tabWidget);
        pdfView = new QPdfView(splitter);
        pdfView->setObjectName(QString::fromUtf8("pdfView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pdfView->sizePolicy().hasHeightForWidth());
        pdfView->setSizePolicy(sizePolicy1);
        splitter->addWidget(pdfView);

        verticalLayout_2->addWidget(splitter);


        verticalLayout->addWidget(widget);

        QPdfViewer->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QPdfViewer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        QPdfViewer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QPdfViewer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QPdfViewer->setStatusBar(statusBar);

        mainToolBar->addAction(actionPdf);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoom_Out);
        mainToolBar->addAction(actionZoom_In);
        mainToolBar->addSeparator();

        retranslateUi(QPdfViewer);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QPdfViewer);
    } // setupUi

    void retranslateUi(QMainWindow *QPdfViewer)
    {
        QPdfViewer->setWindowTitle(QCoreApplication::translate("QPdfViewer", "PDF Viewer", nullptr));
        actionOpen->setText(QCoreApplication::translate("QPdfViewer", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("QPdfViewer", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPdf->setText(QCoreApplication::translate("QPdfViewer", "Pdf", nullptr));
#if QT_CONFIG(tooltip)
        actionPdf->setToolTip(QCoreApplication::translate("QPdfViewer", "Open pdf", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPdf->setShortcut(QCoreApplication::translate("QPdfViewer", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("QPdfViewer", "Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("QPdfViewer", "Printcurrent document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("QPdfViewer", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Qt->setText(QCoreApplication::translate("QPdfViewer", "About Qt", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("QPdfViewer", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("QPdfViewer", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("QPdfViewer", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("QPdfViewer", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_Page->setText(QCoreApplication::translate("QPdfViewer", "Previous Page", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_Page->setShortcut(QCoreApplication::translate("QPdfViewer", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_Page->setText(QCoreApplication::translate("QPdfViewer", "Next Page", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_Page->setShortcut(QCoreApplication::translate("QPdfViewer", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionContinuous->setText(QCoreApplication::translate("QPdfViewer", "Continuous", nullptr));
        actionHideTab->setText(QCoreApplication::translate("QPdfViewer", "Hide Tab", nullptr));
#if QT_CONFIG(shortcut)
        actionHideTab->setShortcut(QCoreApplication::translate("QPdfViewer", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowTab->setText(QCoreApplication::translate("QPdfViewer", "Show Tab", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(bookmarkTab), QCoreApplication::translate("QPdfViewer", "Bookmarks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pagesTab), QCoreApplication::translate("QPdfViewer", "Pages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPdfViewer: public Ui_QPdfViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPDFVIEWER_H
