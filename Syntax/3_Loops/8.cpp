#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int terms=2*i-1;
        cout<<terms<<" ";       
    }  
    return 0;
}