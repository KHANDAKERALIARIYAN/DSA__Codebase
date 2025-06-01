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
    cout << factor << endl;
    return 0;
}