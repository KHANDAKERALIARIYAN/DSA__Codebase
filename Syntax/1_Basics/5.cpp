#include<iostream>
using namespace std;
int main(){
    cout<<"Assignment Operator in C++"<<endl;
    int x = 10; // Assignment
    cout<<"The value of x is: "<<x<<endl;
    x += 5; // Add and assign
    cout<<"The value of x after x += 5 is: "<<x<<endl;
    x -= 3; // Subtract and assign
    cout<<"The value of x after x -= 3 is: "<<x<<endl;
    x *= 2; // Multiply and assign
    cout<<"The value of x after x *= 2 is: "<<x<<endl;
    x /= 4; // Divide and assign
    cout<<"The value of x after x /= 4 is: "<<x<<endl;
    x %= 3; // Modulus and assign
    cout<<"The value of x after x %= 3 is: "<<x<<endl;
    return 0;
}