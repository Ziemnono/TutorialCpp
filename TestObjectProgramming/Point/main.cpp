#include <iostream>
#include <cmath>
class Point2d{
private:
    double x_m;
    double y_m;
public:
    Point2d(double x =0.0, double y = 0.0) : x_m{x}, y_m{y}{
    }
    void print() const{
        std::cout<<"Point2d("<<x_m<<","<<y_m<<")\n";
    }
    friend double distanceFrom(const Point2d &x, const Point2d &y);
};
double distanceFrom(const Point2d &x, const Point2d &y){
        return sqrt((x.x_m-y.x_m)*(x.x_m-y.x_m)+(x.y_m-y.y_m)*(x.y_m-y.y_m));
}
int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first,second) << '\n';

    return 0;
}
