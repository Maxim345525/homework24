#include <cmath>
#include<iostream>
using namespace std;
struct Point {
    float x;
    float y;
};
float distance(Point p1 , Point p2) {
    float dx = p1.x - p1.x;
    float dy = p2.y - p1.y;
    return (dx * dx + dy * dy);
}
int main() {
    Point p1 = { 1, 2 };
    Point p2 = { 5, 7 };
    float dist = distance(p1, p2);
    cout << "Distance p1 and p2 is " << dist << endl;
    return 0;
}