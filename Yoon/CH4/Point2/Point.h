#ifndef __Point_H__
#define __Point_H__

class Point{
    private:
        int x;
        int y;
    public:
        Point(const int &xpos, const int &ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool Sety(int ypos);
};
#endif