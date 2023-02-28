#include <iostream>
using namespace std;
struct Rectangle {
    float x;       
    float y;       
    float width;   
    float height; 
};
int main() {
    Rectangle rect = { 0, 0, 10, 20 };
    rect.x = 5;
    rect.y = 5;
    rect.width = 15;
    rect.height = 25;
    cout << "Rectangle: x=" << rect.x << ", y=" << rect.y<< ", width=" << rect.width << ", height=" << rect.height << endl;
    printRectangle(rect);

    return 0;
}

