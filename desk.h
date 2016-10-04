#ifndef DESK_H
#define DESK_H

#include <QWidget>

namespace Ui {
class Desk;
}

class Desk : public QWidget
{
    Q_OBJECT

public:
    explicit Desk(QWidget *parent = 0);
    ~Desk();

private:
    Ui::Desk *ui;
};

#endif // DESK_H
