#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>

#include "Page.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);

    void AddPage(Page *page);

    void showLoginPage();

    void Load();

private slots:

private:
    // QStackedLayout *PrepareLayoutBody();
    QVBoxLayout *layout;
    QWidget *body;
};


#endif
