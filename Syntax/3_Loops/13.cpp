#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    int factor=1;
    for (int i = 1; i < number; i++){
        if(number%i==0) 
        {
            factor=i;
        }
    }
    if (factor == 1) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }
    
    return 0;
}