// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

//Comment
//Comment
//Comment
//Comment
//Comment
//Comment
//Comment

#include <iostream>
using namespace std;

class Rectangle {
    private:
        double width;
        double height;

    public:
        Rectangle();
        Rectangle(double w, double h);
        double get_perimeter();
        double get_area();
        void resize(double factor);
};

Rectangle::Rectangle(){
    width = 0;
    height = 0;
}

Rectangle::Rectangle(double w, double h){
    width = w;
    height = h;
}

double Rectangle::get_perimeter(){
    int perimeter = (2 * height) + (2 * width);
    return perimeter;
}

double Rectangle::get_area(){
    double area = width * height;
    return area;
}

void Rectangle::resize(double factor){
    height *= factor;
    width *= factor;
}

int main(){

    return 0;
}