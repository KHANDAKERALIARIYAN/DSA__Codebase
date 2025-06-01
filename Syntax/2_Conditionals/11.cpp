#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << "Largest number is: " << a << endl;
    } else if (b > a && b > c) {
        cout << "Largest number is: " << b << endl;
    } else if (c > a && c > b) {
        cout << "Largest number is: " << c << endl;
    } else {
        cout << "There is no unique largest number." << endl;
    }
    return 0;
}