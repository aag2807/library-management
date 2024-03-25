#include "MainWindow.h"

#include <QLabel>
#include <QStackedLayout>

MainWindow::MainWindow(QWidget *parent)
{
    body = new QWidget{};
    body->setWindowTitle("Shelves");
    body->setMinimumWidth(300);
    body->setMinimumHeight(500);
    body->setAutoFillBackground(true);
    body->setStyleSheet("background-color: #fff;");

    layout = new QVBoxLayout();
    layout->addWidget(new QLabel("Main Window"));
}

void MainWindow::AddPage(Page *page)
{
}

void MainWindow::showLoginPage()
{
}

void MainWindow::Load()
{
    body->setLayout(layout);
    body->show();
}
