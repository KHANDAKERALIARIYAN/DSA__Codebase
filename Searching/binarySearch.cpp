#include<iostream>
using namespace std;

int binarySearch(int a[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==element){
            return mid;
        }
        if(a[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main() {

    int arr[]={1,3,4,6,8,9,11,34,56,77,88,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element =56;
    int result = binarySearch(arr,size,element);
    cout<<"The element is at index "<<result<<endl;

    return 0;
}