#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int terms=1;
    for(int i=1;i<=n;i++){
        cout<<terms<<" ";       
        terms=terms*2;
    }  
    return 0;
}