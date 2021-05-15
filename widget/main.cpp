#include <QtWidgets/QApplication>
#include "ui/logindialog.h"


int main(int argc, char **argv)
{
    QApplication app{argc, argv};

    LoginDialog dialog;
    dialog.show();
    return app.exec();
}