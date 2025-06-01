#include<iostream>
using namespace std;
int main() {
    int cost;
    int sellingPrice;
    cout << "Enter the cost price: ";   
    cin >> cost;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;
    if (cost<sellingPrice){
        cout<<"Profit: "<<sellingPrice-cost<<endl;
    }
    else if (cost>sellingPrice){
        cout<<"Loss: "<<cost-sellingPrice<<endl;
    }
    else {
        cout<<"No profit, no loss."<<endl;
    }
    
    
    return 0;
}