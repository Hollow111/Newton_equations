#ifndef PARTICLE_H
#define PARTICLE_H

#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPainter>

class Particle: public  QGraphicsEllipseItem
{
public:
    Particle();
};

#endif // PARTICLE_H

class Particle: public QGraphicsEllipseItem
{

public:
    Particle(double x, double y);
    void advance(int phase);

private:
    double yspeed = 0, xspeed = 0;
};
