#include "resizehandler.h"

struct ResizeHandler::ResizeHandlerPrivate 
{
    QWidget* w{ nullptr };
    bool ispressed{ false };
    QPoint offset;
};

ResizeHandler::ResizeHandler(QWidget* w)
    : QObject{ w }
    , p_{ new ResizeHandlerPrivate }
{
    p_->w = w;
    w->installEventFilter(this);
}

bool ResizeHandler::eventFilter(QObject* obj, QEvent* ev)
{
    if (obj == p_->w) 
    {
        if (ev->type() == QEvent::MouseButtonPress) 
        {
            auto mouseEvent = static_cast<QMouseEvent*>(ev);
            p_->offset = mouseEvent->globalPos() - p_->w->pos();
            p_->ispressed = true;
        }
        else if(ev->type() == QEvent::MouseButtonRelease)
        {
            p_->ispressed = false;
        }
        else if(ev->type() == QEvent::MouseMove)
        {
            auto mouseEvent = static_cast<QMouseEvent*>(ev);
            mouseMoveEvent(mouseEvent);
        }
        return false;
    }
    else 
    {
        return QObject::eventFilter(obj, ev);
    }
    return false;
}

void ResizeHandler::mouseMoveEvent(QMouseEvent* ev)
{
    if (p_->ispressed && (ev->buttons() && Qt::LeftButton))
    {
        p_->w->move(ev->globalPos() - p_->offset);
        ev->accept();
    }
}
