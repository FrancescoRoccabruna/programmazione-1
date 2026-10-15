#include <iostream>
#include <cmath>

using namespace std;



class Point {
    public:
        float x;
        float y;


        Point(int x_val, int y_val){
            x = x_val;
            y = y_val;
        }


        static float distance(Point a, Point b){
            float x_dist = a.x - b.x;

            float y_dist = a.y - b.y;

            return sqrt(x_dist*x_dist + y_dist*y_dist);
        }
};


int main(){

    int x0, x1, y0, y1;

    cin >> x0;
    cin >> y0;
    cin >> x1;
    cin >> y1;


    Point a(x0, y0);
    Point b(x1, y1);

    cout << Point::distance(a, b);

    return 0;
}