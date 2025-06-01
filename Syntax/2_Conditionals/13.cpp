#include<iostream>
using namespace std;
int main() {
    int number ;
    cout << "Enter a number: ";
    cin >> number;
    if(number %5 ==0 || number % 3 == 0) {
        if (number % 15 != 0){
            cout<< "Number is divisible by either 5 or 3 but not by 15." << endl;
        }  
    } else {
        cout << "Number is not divisible by either 5 or 3 but not by 15." << endl;
    }
    return 0;
}