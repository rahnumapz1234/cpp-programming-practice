#include<iostream>
using namespace std;

int main() {
     int r,c;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<"Enter number of coloums:";
    cin>>c;
    cout<<"The desired pattern is:"<<endl;
    for(int i=r; i>=1; i--) {
        for (int j=1; j<=c; j++) {
            if(i<=j)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<" "<<endl; 
    }
    return 0;
}
