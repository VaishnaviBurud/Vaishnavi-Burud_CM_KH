#include <iostream>
using namespace std;


void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main() {
    int lo, hi;
    int x = 15, y = 7, z = 22;

    
    findMinMax(x, y, z, lo, hi);
    cout << "Numbers: " << x << ", " << y << ", " << z << endl;
    cout << "Minimum value = " << lo << endl;
    cout << "Maximum value = " << hi << endl;

    
    cout << "\nValues of lo and hi updated after function call." << endl;

    return 0;
}


void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {
    minVal = a;
    maxVal = a;


    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;


    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
}
