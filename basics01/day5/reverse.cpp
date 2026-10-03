//reverse the element of an array

#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start=0,end=n-1;
    while(start<end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main() {
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    reverse(arr,n);

      cout<<"The reversed elements of array are:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i];
        cout<<" ";
    }
    return 0;

}