#include "logindialog.h"

LoginDialog::LoginDialog(QWidget* p)
    : UserDialog{ p }
{
    auto w = new QDialog{this};
    ui.setupUi(w);
    setContent(w);

    setTitleText(FromASCII("����һ��title"));
}