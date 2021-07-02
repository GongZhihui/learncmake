#include <QtWidgets/QApplication>
#include "ui/logindialog.h"
#include "ui/userdialog.h"
#include "qssshowwidget.h"
#include <string>
#include <QFile>


int main(int argc, char **argv)
{
    QApplication app{argc, argv};
    QFile file{ ":/theme.qss" };
    bool n = file.open(QFile::ReadOnly);
    app.setStyleSheet(file.readAll());
    //int n = COUNT(1, 2, 2);
    QssShowDialog dialog;
    dialog.show();
    return app.exec();
}