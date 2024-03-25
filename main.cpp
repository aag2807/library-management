#include <QApplication>
#include "components/MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    const auto window = new MainWindow();

    window->Load();
    return QApplication::exec();
}
