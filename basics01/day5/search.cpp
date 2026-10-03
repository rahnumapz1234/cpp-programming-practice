//search an element in an array

#include<iostream>
using namespace std;

int search(int arr[],int n, int target) {
        for(int i=0; i<n; i++) {
            if(arr[i]==target)
            return i;
    }
     return -1;
}

int main() {
    int n;
    int target=8;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"the index at element found is:"<< search(arr,n,target)<<endl;

    return 0;

}