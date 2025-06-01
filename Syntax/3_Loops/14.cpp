#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    cout << "Even numbers from 1 to " << number << " are: ";
    for(int i=1;i<=number;i++){
        if (i%2==0){
            cout << i << " ";
            continue;
        }       
    }
    cout << endl;
    cout << "Odd numbers from 1 to " << number << " are: ";
    for(int i=1;i<=number;i++){
        if (i%2!=0){
            cout << i << " ";
            continue;
        }       
    }
    return 0;
}