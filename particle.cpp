#include "particle.h"

Particle::Particle(double x0, double y0): QGraphicsEllipseItem(0)
{
    x = x0;
    y = y0;
    QColor color = QColor(100, 100, 100);
    setBrush(color);
    setRect(0, 0, 2, 2);
    setPos(x0 - 1, y0 - 1);
}

void Particle::advance(int phase)
{

}
