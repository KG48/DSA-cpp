#include <iostream>
using namespace std;
class AreaCalculator;
class Rectangle{
    private:
    int length;
    int width;
    public:
    Rectangle(int l, int w){
        length = l;
        width = w;
    }
    friend class AreaCalculator;
};
class AreaCalculator{
    public:
void calculateArea(Rectangle &r){
   int Area = r.length*r.width;
cout<<"AREA IS : "<<Area<<endl;
    }
};
int main(){
    Rectangle rect1(7,9);
    AreaCalculator calc;
    calc.calculateArea(rect1);
    return 0;
}