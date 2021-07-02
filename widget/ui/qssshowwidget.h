#pragma once

#include <QtWidgets>
#include "ui_QssShowWidget.h"
#include "predefine.h"

class QssShowDialog : public QDialog
{
public:
    QssShowDialog(QWidget *p = nullptr);

private:
    Ui::QssShowWidget ui;
    DECLARE_PRIVATE(QssShowDialog);
};