#include "userdialog.h"
#include "resizehandler.h"

UserDialog::UserDialog(QWidget* p)
    : QDialog(p, Qt::FramelessWindowHint)
    , resizeHandler_{ new ResizeHandler{ this } }
{
    ui.setupUi(this);
}


void UserDialog::setContent(QWidget* content)
{
    ui.layout_center->addWidget(content);
}

void UserDialog::setTitleText(const QString& title)
{
    ui.label_title->setText(title);
}
