#include <QtWidgets/QApplication>
#include "ui/logindialog.h"
#include <string>

int main(int argc, char **argv)
{
    QApplication app{argc, argv};

    LoginDialog dialog;
    dialog.show();
    return app.exec();
}