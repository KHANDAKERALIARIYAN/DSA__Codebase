//  Calculating Simple Interest
#include<iostream>
using namespace std;
int main(){
    float principle = 1000;
    float rate = 10;
    float time = 5;
    float interest = (principle * rate * time)/100;
    cout<<"The interest is: "<<interest<<endl;
    return 0;
}