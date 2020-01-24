/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
            Gui->setObjectName(QStringLiteral("Gui"));
        Gui->resize(851, 900);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Gui->sizePolicy().hasHeightForWidth());
        Gui->setSizePolicy(sizePolicy);
        actionStartStop = new QAction(Gui);
        actionStartStop->setObjectName(QStringLiteral("actionStartStop"));
        actionStartStop->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/start.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStartStop->setIcon(icon);
        actionStartStop->setIconVisibleInMenu(false);
        actionOpen = new QAction(Gui);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionOpen->setIconVisibleInMenu(false);
        actionReload = new QAction(Gui);
        actionReload->setObjectName(QStringLiteral("actionReload"));
        actionReload->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/reload.png"), QSize(), QIcon::Normal, QIcon::On);
        actionReload->setIcon(icon2);
        actionReload->setIconVisibleInMenu(false);
        actionStep = new QAction(Gui);
        actionStep->setObjectName(QStringLiteral("actionStep"));
        actionStep->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/step.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStep->setIcon(icon3);
        actionStep->setIconVisibleInMenu(false);
        actionHelp = new QAction(Gui);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(Gui);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionScreenshot = new QAction(Gui);
        actionScreenshot->setObjectName(QStringLiteral("actionScreenshot"));
        actionScreenshot->setEnabled(false);
        actionMoreCells = new QAction(Gui);
        actionMoreCells->setObjectName(QStringLiteral("actionMoreCells"));
        actionZoom_In = new QAction(Gui);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        actionZoom_In->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/zoom_in.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_In->setIcon(icon4);
        actionZoom_In->setIconVisibleInMenu(false);
        actionZoom_Out = new QAction(Gui);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        actionZoom_Out->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/zoom_out.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_Out->setIcon(icon5);
        actionZoom_Out->setIconVisibleInMenu(false);
        actionReset_Zoom = new QAction(Gui);
        actionReset_Zoom->setObjectName(QStringLiteral("actionReset_Zoom"));
        actionDump = new QAction(Gui);
        actionDump->setObjectName(QStringLiteral("actionDump"));
        centralWidget = new QWidget(Gui);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Gui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Gui);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 851, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName(QStringLiteral("menuSimulation"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        Gui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Gui);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setAcceptDrops(false);
        Gui->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Gui);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        Gui->setWindowTitle(QApplication::translate("Gui", "gro : the cell programming language", Q_NULLPTR));
        actionStartStop->setText(QApplication::translate("Gui", "Start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStartStop->setToolTip(QApplication::translate("Gui", "Start or stop gro ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionStartStop->setShortcut(QApplication::translate("Gui", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("Gui", "Open...", Q_NULLPTR));
        actionOpen->setIconText(QApplication::translate("Gui", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Gui", "Open a .gro file.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("Gui", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionReload->setText(QApplication::translate("Gui", "Reload", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReload->setToolTip(QApplication::translate("Gui", "Reload current .gro file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionReload->setShortcut(QApplication::translate("Gui", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionStep->setText(QApplication::translate("Gui", "Step", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStep->setToolTip(QApplication::translate("Gui", "Simulate for one timestep", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionStep->setShortcut(QApplication::translate("Gui", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionHelp->setText(QApplication::translate("Gui", "Online Documentation", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionHelp->setShortcut(QApplication::translate("Gui", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("Gui", "About", Q_NULLPTR));
        actionScreenshot->setText(QApplication::translate("Gui", "Save Screenshot...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionScreenshot->setShortcut(QApplication::translate("Gui", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionMoreCells->setText(QApplication::translate("Gui", "Increase Population Limit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionMoreCells->setShortcut(QApplication::translate("Gui", "Ctrl+M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionZoom_In->setText(QApplication::translate("Gui", "Zoom In", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionZoom_In->setShortcut(QApplication::translate("Gui", "Ctrl+Shift+=", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionZoom_Out->setText(QApplication::translate("Gui", "Zoom Out", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionZoom_Out->setShortcut(QApplication::translate("Gui", "Ctrl+-", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionReset_Zoom->setText(QApplication::translate("Gui", "Reset Zoom", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionReset_Zoom->setShortcut(QApplication::translate("Gui", "Ctrl+0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDump->setText(QApplication::translate("Gui", "Save Colony Information...", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("Gui", "File", Q_NULLPTR));
        menuSimulation->setTitle(QApplication::translate("Gui", "Simulation", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("Gui", "Help", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("Gui", "View", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Gui: public Ui_Gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
