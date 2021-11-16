#ifndef A143_H
#define A143_H
#include <iostream>


class Square{
    private:
        double width;
    public:
        Square()
        {
            width = 5;
        };
        void setWidth(double w){
            width = w;
        };
        double getWidth(void) const{
            return width;
        };
        double getArea(void) const{
            return width * width;
        };
        friend class Rectangle;

};

class Rectangle
{
    private:
        double width; 
        double height;
   
    public:
        Rectangle(){
            width = 10;
            height = 20;
        };
        void setWidth(double w){
            width = w;
        };
        void setHeight(double h){
            height = h;
        };
        double getWidth(void) const{
            return width;
        };
        double getHeight(void) const{
            return height;
        };
        double getArea(void) const{
            return height * width;
        };
        Rectangle makeRectanglewithSquare(Square s){
            Rectangle r;
            r.width = s.width;
            r.height = s.width;

            return r;

        };
};



#endif