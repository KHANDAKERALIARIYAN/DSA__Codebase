#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    int sum=0;
    while (n>0)
    {
        sum += n % 10; // Add the last digit to sum
        n = n / 10; // Remove the last digit
        count++; // Increment the digit count
    }
    cout << "Number of digits: " << count << endl;
    cout << "Sum of digits: " << sum << endl; // Output the sum of digits
    
    return 0;
}