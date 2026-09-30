//find sum of elements of an array

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++) {
       sum+=arr[i];
    }
    cout<<"The sum of elements of an array is:"<<sum<<endl;
    return 0;

}