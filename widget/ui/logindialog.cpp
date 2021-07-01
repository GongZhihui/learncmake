#include "logindialog.h"

struct LoginDialog::LoginDialogPrivate 
{
};

LoginDialog::LoginDialog(QWidget* p)
    : UserDialog{ p }
    , p_ {new LoginDialogPrivate}
{
    auto w = new QDialog{this};
    ui.setupUi(w);
    setContent(w);

    setTitleText(FromASCII("这是一个title"));
}