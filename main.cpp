#include <QApplication>
#include "Scheduler.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Scheduler app;
    app.show();
    return a.exec();
}
