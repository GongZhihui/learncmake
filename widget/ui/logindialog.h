#pragma once

#include <QtWidgets>
#include "userdialog.h"
#include "ui_LoginDialog.h"
#include "predefine.h"

class LoginDialog : public UserDialog
{
public:
    LoginDialog(QWidget *p = nullptr);

private:
    Ui::LoginDialog ui;
    DECLARE_PRIVATE(LoginDialog);
};