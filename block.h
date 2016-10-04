#ifndef BLOCK_H
#define BLOCK_H
#include <QPoint>
#include <QColor>
#include <QPainter>
class Block
{
public:
    QColor color;
    QPoint tlp,brp,dragp;
    bool focused;
    bool on(QPoint p);
    void draw(QPaintDevice* d);
    void track(QPoint p);
    Block();
};

#endif // BLOCK_H
