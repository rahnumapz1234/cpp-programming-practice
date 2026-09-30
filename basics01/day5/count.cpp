//count even number element and odd number element in an array

#include<iostream>
using namespace std;

void count(int arr[],int n,int &oddcount,int &evencount) {
    evencount=0,oddcount=0;
    for(int i=0; i<n; i++) {
        if(arr[i]%2==0)
        evencount++;
        else
        oddcount++;
    }
}

int main() {
    int n;
    int oddcount,evencount;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    count(arr,n,oddcount,evencount);
    cout<<"The number of even elements in an array is:"<<evencount<<endl;
    cout<<"The number of odd element in an array is:"<<oddcount<<endl;
    return 0;

}