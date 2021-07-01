#pragma once
#include <QtWidgets>
#include "ui_UserDialog.h"

#define FromASCII(s) QString::fromLocal8Bit(s)

class ResizeHandler;
class UserDialog : public QDialog 
{
public:
    UserDialog(QWidget *p = nullptr);

    void setContent(QWidget *content);
    void setTitleText(const QString &title);

private:
    Ui::UserDialog ui;
    ResizeHandler* resizeHandler_;
};