#include "square.h"

#include <QTextStream>

void Square::draw(QPainter &painter)
{
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(pos.x(), pos.y(), sideLength, sideLength);
}

bool Square::isPointInside(const QPoint &point) const
{
    if (point.x() >= pos.x() && point.x() <= pos.x() + sideLength
            && point.y() >= pos.y() && point.y() <= pos.y() + sideLength)
        return true;
    return false;
}

void Square::print()
{
    QTextStream out(stdout);

    out << "Point1: (" << pos.x() << "; " << pos.y() << ")\n"
        << "Point2: (" << pos.x() + sideLength << "; " << pos.y() << ")\n"
        << "Point3: (" << pos.x() + sideLength << "; " << pos.y() - sideLength << ")\n"
        << "Point4: (" << pos.x() << "; " << pos.y() - sideLength << ")\n\n";
}
