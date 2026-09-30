//find max element of an array

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int max=INT_MIN;
    int maxindex;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
        max=arr[i];
        maxindex=i;
        }
    }
    cout<<"The largest element of an array is:"<<max<<endl;
    cout<<"The index of max elemnt of an array is:"<<maxindex<<endl;
    return 0;

}