#include <iostream>
#include <cmath>
using namespace std;

double cubeDiagonal(int volume) {
    double side = cbrt(volume);
    cout << side;
    return side;
}

int main() {
    cubeDiagonal(8);
    return 0;
}