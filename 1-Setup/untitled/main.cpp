#include <QApplication>
#include "my_wizard.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    my_wizard wizard;
    wizard.exec();
    return app.exec();
}
