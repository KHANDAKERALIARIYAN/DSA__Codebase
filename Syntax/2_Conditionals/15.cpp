#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter ages: ";
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            cout << "The oldest age is: " << a << endl;
        } else {
            cout << "The oldest age is: " << c << endl;
        }
    } else {
        if (b > c) {
            cout << "The oldest age is: " << b << endl;
        } else {
            cout << "The oldest age is: " << c << endl;
        }
    }
    return 0;
}