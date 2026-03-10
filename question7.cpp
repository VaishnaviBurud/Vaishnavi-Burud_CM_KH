#include <iostream>
using namespace std;

int main() {

    int x = 10, y = 20, z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;   // FIXED: declared pz

    cout << "Before Swap:\n";
    cout << "x=" << *px << ", y=" << *py << ", z=" << *pz << endl;

    cout << "Address stored in pointer:\n";
    cout << "px=" << px << endl;
    cout << "py=" << py << endl;
    cout << "pz=" << pz << endl;

    // Swap using pointers
    int temp = *px;
    *px = *pz;
    *pz = temp;

    cout << "\nAfter Swap:\n";
    cout << "x=" << *px << ", y=" << *py << ", z=" << *pz << endl;

    cout << "Address stored in pointer:\n";
    cout << "px=" << px << endl;
    cout << "py=" << py << endl;
    cout << "pz=" << pz << endl;

    return 0;
}
