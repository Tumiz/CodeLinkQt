#ifndef DESK_H
#define DESK_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <vector>
#include <link.h>
#include <block.h>
namespace Ui {
class Desk;
}
using namespace std;
class Desk : public QWidget
{
    Q_OBJECT

public:
    vector<Link*> links;
    vector<Block*> blocks;
    Link* clink;//current link
    Block* cblock;//current block
    QPoint* cpoint;//current press point
    void mousePressEvent(QMouseEvent* e);
    void mouseMoveEvent(QMouseEvent* e);
    void mouseReleaseEvent(QMouseEvent* e);
    void paintEvent(QPaintEvent *e);
    explicit Desk(QWidget *parent = 0);
    ~Desk();

private:
    Ui::Desk *ui;
};

#endif // DESK_H
