#include<iostream>
using namespace std;

int linearSearch(int a[],int size,int element){
    for (int i = 0; i < size; i++){
        if(a[i]==element){
            return i;
        }
    }
    return -1;
}
int main() {

    int a[] = {3,6,4,8,1,9,4,2,4,0};
    int size = sizeof(a)/sizeof(a[0]);
    int element = 8;
    int result = linearSearch(a,size,element);
    cout<<"The element is at index "<<result<<endl;

    return 0;
}