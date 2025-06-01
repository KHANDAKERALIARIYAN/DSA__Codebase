#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number % 5 == 0 || number % 3 == 0){
        cout<<"Number is divisible by both 5 and 3." << endl;
    }
    else if(number % 5 == 0){
        cout<<"Number is divisible by 5." << endl;
    }
    else if(number % 3 == 0){
        cout<<"Number is divisible by 3." << endl;
    }
    else {
        cout<<"Number is not divisible by either 5 or 3." << endl;
    }
    return 0;
}