#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three numbers: ";    
    cin >> a >> b >> c;
    if(a<b && a<c) {
        cout << "Smallest number is: " << a << endl;
    } else if(b<a && b<c) {
        cout << "Smallest number is: " << b << endl;
    } else if(c<a && c<b) {
        cout << "Smallest number is: " << c << endl;
    } else {
        cout << "There is no unique smallest number." << endl;
    }
    return 0;
}