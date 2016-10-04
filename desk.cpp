#include "desk.h"
#include "ui_desk.h"

Desk::Desk(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Desk)
{
    ui->setupUi(this);
}
void Desk::mousePressEvent(QMouseEvent *e)
{
//    clink=new Link();
//    clink->startp=clink->endp=e->pos();
//    links.push_back(clink);
    QPoint p=e->pos();
    for(unsigned int i=0;i<blocks.size();i++)
    {
        Block* block=blocks[i];
        if(block->on(p))
        {
            cblock=block;
            return ;
        }
    }
    cblock=new Block();
    cblock->tlp=cblock->brp=p;
    blocks.push_back(cblock);
}
void Desk::mouseMoveEvent(QMouseEvent *e)
{
    QPoint p=e->pos();
//    clink->endp=p;
    if(p.x()>cblock->tlp.x()&&p.y()>cblock->tlp.y())
    {
        if(cblock->focused)
            cblock->track(p);
        else
            cblock->brp=p;
    }
}
void Desk::mouseReleaseEvent(QMouseEvent *e)
{
    QPoint p=e->pos();
    if(p.x()<cblock->tlp.x()||p.y()<cblock->tlp.y())
    {
        blocks.pop_back();
        delete cblock;
        cblock=nullptr;
    }
}

void Desk::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    for(unsigned int i=0;i<links.size();i++)
    {
        painter.setPen(links[i]->color);
        painter.drawLine(links[i]->startp,links[i]->endp);
    }
    for(unsigned int i=0;i<blocks.size();i++)
    {
        Block* block=blocks[i];
        block->draw(this);
    }
    update();
}

Desk::~Desk()
{
    delete ui;
}
