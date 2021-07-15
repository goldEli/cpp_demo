//
//  circle.cpp
//  cpp_x
//
//  Created by 缪宇 on 2021/7/15.
//
#include <math.h>
#include "circle.hpp"
#include "point.hpp"

void Circle::setCenter(Point &point)
{
    m_Center = point;
}
void Circle::setR(int r)
{
    m_R = r;
}
bool Circle::isInCircle(Point &point)
{
    int distance2 = pow((point.m_X - m_Center.m_X), 2) + pow((point.m_Y - m_Center.m_Y), 2);
    if (distance2 <= pow(m_R, 2))
    {
        return true;
    }
    return false;
}
