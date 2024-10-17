#include <iostream>
#include <cmath>
using namespace std;

double cubeDiagonal(double volume) {
    double side = cbrt(volume);
    double diagonal = sqrt(3 * pow(side, 2));
    return round(diagonal * 100) / 100;
}

int main() {

    double testValues[3] = {8, 343, 1157.625};

    for (double item : testValues)
    {
        cout << "Cube volume: " << item << " , Cube diagonal: " << cubeDiagonal(item) << endl;
    }
    return 0;
}