#include<iostream>
using namespace std;
int main() {
    int length;
    int breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if (area > perimeter) {
        cout << "Area is greater than perimeter." << endl;
    } 
    else if (area < perimeter) {
        cout << "Perimeter is greater than area." << endl;
    } 
    else {
        cout << "Area and perimeter are equal." << endl;
    }    
    return 0;
}