//
//  circle.hpp
//  cpp_x
//
//  Created by 缪宇 on 2021/7/15.
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include "point.hpp"

class Circle
{
private:
    Point m_Center;
    int m_R;

public:
    void setCenter(Point &point);
    void setR(int r);
    bool isInCircle(Point &point);
};

#endif /* circle_hpp */
