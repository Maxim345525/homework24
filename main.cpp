#include<iostream>
#include <iostream>
using namespace std;
struct drib {
    int chiselnuk;
    int znamenuk;
    drib(int num, int den) {
        chiselnuk = num;
        znamenuk = den;
    }
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    void reduce() {
        int common = gcd(chiselnuk, znamenuk);
        chiselnuk /= common;
        znamenuk /= common;
    }
    void add(drib other) {
        chiselnuk = chiselnuk * other.znamenuk + other.chiselnuk * znamenuk;
        znamenuk = znamenuk * other.znamenuk;
        reduce();
    }
    void subtract(drib other) {
        chiselnuk = chiselnuk * other.znamenuk - other.chiselnuk * znamenuk;
        znamenuk = znamenuk * other.znamenuk;
        reduce();
    }
};
int main() {
    drib a(1, 4);
    drib b(1, 3);

    cout << "drib a: " << a.chiselnuk << "/" << a.znamenuk << endl;
    cout << "drib b: " << b.chiselnuk << "/" << b.znamenuk << endl;

    a.add(b);
    cout << "add drib a and b: " << a.chiselnuk << "/" << a.znamenuk << endl;

    drib c(3, 4);
    drib d(1, 2);

    cout << "drib c: " << c.chiselnuk << "/" << c.znamenuk << endl;
    cout << "drib d: " << d.chiselnuk << "/" << d.znamenuk << endl;

    c.subtract(d);
    cout << "subtract drib c and d: " << c.chiselnuk << "/" << c.znamenuk << endl;

    return 0;
}