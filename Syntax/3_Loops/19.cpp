#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    int product=1;
    while (n>0)
    {
        product *= n % 10; // Add the last digit to product
        n = n / 10; // Remove the last digit
        count++; // Increment the digit count
    }
    cout << "Number of digits: " << count << endl;
    cout << "Product of digits: " << product << endl; // Output the product of digits
    
    return 0;
}