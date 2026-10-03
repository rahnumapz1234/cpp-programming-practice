//count occurance of an element

#include<iostream>
using namespace std;

int count (int arr[], int n,int element) {
    int c=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==element)
        c++;
    }
    return c;

}
int main() {
    int n,element;
    
    cout<<"Enter the size of an array:";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
     cout<<"Enter the element you want to count its occurance:";
     cin>>element;
    cout<<"The number of times "<<element<<" occurs is:"<< count(arr,n,element)<<endl;

    return 0;

}