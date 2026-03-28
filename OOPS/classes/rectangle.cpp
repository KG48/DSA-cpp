#include <bits/stdc++.h>
using namespace std;

class CalculateArea;
class Rectangle{
    private:
    int length;
    int width;

    public:

    Rectangle(int l, int w){
         length = l;
         width = w;
    }
    friend class CalculateArea;
};

class CalculateArea{
    public:

    void area(Rectangle &r) {
        int area = r.length*r.width;
        cout << "Area is " << area << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Rectangle R1(10,20);
    CalculateArea Area;
    Area.area(R1);

    
    return 0;
}