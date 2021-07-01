#pragma once
#include <QtWidgets>
#include "predefine.h"

class ResizeHandler : public QObject
{
public:
    ResizeHandler(QWidget *w);

protected:
    bool eventFilter(QObject *obj, QEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);

private:
    DECLARE_PRIVATE(ResizeHandler);
};