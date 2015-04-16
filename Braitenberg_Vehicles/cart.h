#ifndef CART_H
#define CART_H

#include <QMainWindow>
#include <QApplication>
#include <QtWidgets>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QLabel>
#include <QPainter>
#include <vector>
#include <QVector>

class cart
{
public:
    cart();
    ~cart();
private:

    int x;
    int y;
    int rotation;

    double leftMotor;
    double rightMotor;

    QGraphicsRectItem car;
    QGraphicsRectItem lwheel;
    QGraphicsRectItem rwheel;
    QPoint lsens;
    QPoint rsens;
};

#endif // CART_H
