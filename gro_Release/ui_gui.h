/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gui
{
public:
    QAction *actionStartStop;
    QAction *actionOpen;
    QAction *actionReload;
    QAction *actionStep;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionScreenshot;
    QAction *actionMoreCells;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionReset_Zoom;
    QAction *actionDump;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSimulation;
    QMenu *menuHelp;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Gui)
    {
        if (Gui->objectName().isEmpty())
            Gui->setObjectName(QString::fromUtf8("Gui"));
        Gui->resize(851, 900);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Gui->sizePolicy().hasHeightForWidth());
        Gui->setSizePolicy(sizePolicy);
        actionStartStop = new QAction(Gui);
        actionStartStop->setObjectName(QString::fromUtf8("actionStartStop"));
        actionStartStop->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/start.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStartStop->setIcon(icon);
        actionStartStop->setIconVisibleInMenu(false);
        actionOpen = new QAction(Gui);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionOpen->setIconVisibleInMenu(false);
        actionReload = new QAction(Gui);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        actionReload->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/reload.png"), QSize(), QIcon::Normal, QIcon::On);
        actionReload->setIcon(icon2);
        actionReload->setIconVisibleInMenu(false);
        actionStep = new QAction(Gui);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        actionStep->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/step.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStep->setIcon(icon3);
        actionStep->setIconVisibleInMenu(false);
        actionHelp = new QAction(Gui);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(Gui);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionScreenshot = new QAction(Gui);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        actionScreenshot->setEnabled(false);
        actionMoreCells = new QAction(Gui);
        actionMoreCells->setObjectName(QString::fromUtf8("actionMoreCells"));
        actionZoom_In = new QAction(Gui);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_In->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/zoom_in.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_In->setIcon(icon4);
        actionZoom_In->setIconVisibleInMenu(false);
        actionZoom_Out = new QAction(Gui);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        actionZoom_Out->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/zoom_out.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_Out->setIcon(icon5);
        actionZoom_Out->setIconVisibleInMenu(false);
        actionReset_Zoom = new QAction(Gui);
        actionReset_Zoom->setObjectName(QString::fromUtf8("actionReset_Zoom"));
        actionDump = new QAction(Gui);
        actionDump->setObjectName(QString::fromUtf8("actionDump"));
        centralWidget = new QWidget(Gui);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Gui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Gui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 851, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        Gui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Gui);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setAcceptDrops(false);
        Gui->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Gui);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Gui->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSimulation->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionReload);
        menuFile->addAction(actionScreenshot);
        menuFile->addAction(actionDump);
        menuSimulation->addAction(actionStartStop);
        menuSimulation->addAction(actionStep);
        menuSimulation->addAction(actionMoreCells);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionReset_Zoom);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionReload);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionStartStop);
        mainToolBar->addAction(actionStep);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoom_In);
        mainToolBar->addAction(actionZoom_Out);

        retranslateUi(Gui);
        QObject::connect(actionStartStop, SIGNAL(triggered()), Gui, SLOT(startStop()));
        QObject::connect(actionOpen, SIGNAL(triggered()), Gui, SLOT(open()));
        QObject::connect(actionReload, SIGNAL(triggered()), Gui, SLOT(reload()));
        QObject::connect(actionStep, SIGNAL(triggered()), Gui, SLOT(step()));
        QObject::connect(actionHelp, SIGNAL(triggered()), Gui, SLOT(help()));
        QObject::connect(actionAbout, SIGNAL(triggered()), Gui, SLOT(about()));
        QObject::connect(actionScreenshot, SIGNAL(triggered()), Gui, SLOT(snapshot()));
        QObject::connect(actionMoreCells, SIGNAL(triggered()), Gui, SLOT(moreCells()));
        QObject::connect(actionZoom_In, SIGNAL(triggered()), Gui, SLOT(zoom_in()));
        QObject::connect(actionZoom_Out, SIGNAL(triggered()), Gui, SLOT(zoom_out()));
        QObject::connect(actionReset_Zoom, SIGNAL(triggered()), Gui, SLOT(reset_zoom()));
        QObject::connect(actionDump, SIGNAL(triggered()), Gui, SLOT(dump()));

        QMetaObject::connectSlotsByName(Gui);
    } // setupUi

    void retranslateUi(QMainWindow *Gui)
    {
        Gui->setWindowTitle(QApplication::translate("Gui", "gro : the cell programming language", nullptr));
        actionStartStop->setText(QApplication::translate("Gui", "Start", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStartStop->setToolTip(QApplication::translate("Gui", "Start or stop gro ", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionStartStop->setShortcut(QApplication::translate("Gui", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("Gui", "Open...", nullptr));
        actionOpen->setIconText(QApplication::translate("Gui", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Gui", "Open a .gro file.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("Gui", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionReload->setText(QApplication::translate("Gui", "Reload", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReload->setToolTip(QApplication::translate("Gui", "Reload current .gro file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionReload->setShortcut(QApplication::translate("Gui", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionStep->setText(QApplication::translate("Gui", "Step", nullptr));
#ifndef QT_NO_TOOLTIP
        actionStep->setToolTip(QApplication::translate("Gui", "Simulate for one timestep", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionStep->setShortcut(QApplication::translate("Gui", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionHelp->setText(QApplication::translate("Gui", "Online Documentation", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHelp->setShortcut(QApplication::translate("Gui", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("Gui", "About", nullptr));
        actionScreenshot->setText(QApplication::translate("Gui", "Save Screenshot...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionScreenshot->setShortcut(QApplication::translate("Gui", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionMoreCells->setText(QApplication::translate("Gui", "Increase Population Limit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMoreCells->setShortcut(QApplication::translate("Gui", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoom_In->setText(QApplication::translate("Gui", "Zoom In", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoom_In->setShortcut(QApplication::translate("Gui", "Ctrl+Shift+=", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoom_Out->setText(QApplication::translate("Gui", "Zoom Out", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoom_Out->setShortcut(QApplication::translate("Gui", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        actionReset_Zoom->setText(QApplication::translate("Gui", "Reset Zoom", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReset_Zoom->setShortcut(QApplication::translate("Gui", "Ctrl+0", nullptr));
#endif // QT_NO_SHORTCUT
        actionDump->setText(QApplication::translate("Gui", "Save Colony Information...", nullptr));
        menuFile->setTitle(QApplication::translate("Gui", "File", nullptr));
        menuSimulation->setTitle(QApplication::translate("Gui", "Simulation", nullptr));
        menuHelp->setTitle(QApplication::translate("Gui", "Help", nullptr));
        menuView->setTitle(QApplication::translate("Gui", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gui: public Ui_Gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
