#include<iostream>
using namespace std;
int main() {
    int side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "The lengths can form a triangle." << endl;
    } else {
        cout << "The lengths cannot form a triangle." << endl;
    }
    return 0;
}