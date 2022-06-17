#ifndef __Rectangle_H__
#define __Rectangle_H__

#include "Point.h"

class Rectangle{
    private:
        Point upLeft;
        Point lowRight;
    
    public:
        bool InitMembers(const Point &ul, const Point &lr);
        void ShowRecInfo() const;

};

#endif
