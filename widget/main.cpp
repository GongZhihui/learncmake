#include <QtWidgets/QApplication>
#include "ui/logindialog.h"
#include "ui/userdialog.h"
#include <string>


int main(int argc, char **argv)
{
    QApplication app{argc, argv};
    //int n = COUNT(1, 2, 2);
    LoginDialog dialog;
    dialog.show();
    return app.exec();
}