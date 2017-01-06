#ifndef PARTICLE_H
#define PARTICLE_H

#include <QtGui>
#include <QtCore>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>

class Particle: public QGraphicsEllipseItem
{
public:
    Particle(double x0, double y0);
    void advance(int phase);

private:
    double y_speed = 0, x_speed = 0, x, y;
};

#endif // PARTICLE_H
