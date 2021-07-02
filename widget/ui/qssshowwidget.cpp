#include "qssshowwidget.h"

struct QssShowDialog::QssShowDialogPrivate
{
};

QssShowDialog::QssShowDialog(QWidget* p)
    : QDialog{ p }
    , p_ {new QssShowDialogPrivate}
{
    ui.setupUi(this);
    setWindowTitle(u8"这是一个title");
}