#include "block.h"

Block::Block()
{
    color=Qt::green;
    focused=false;
}
bool Block::on(QPoint p)
{
    if(p.x()>tlp.x()&&p.x()<brp.x()&&p.y()>tlp.y()&&p.y()<brp.y())
    {
        focused=true;
        dragp=p;
        return true;
    }
    return false;
}
void Block::draw(QPaintDevice *d)
{
    QPainter painter(d);
    if(focused)
    {
        painter.setPen(color);
        painter.setBrush(QBrush(color,Qt::SolidPattern));
    }
    else
    {
        painter.setPen(Qt::black);
        painter.setBrush(QBrush(Qt::NoBrush));
    }
    painter.drawRect(QRect(tlp,brp));
}
void Block::track(QPoint p)
{
    QPoint v=p-dragp;
    tlp=v+tlp;
    brp=v+brp;
}
