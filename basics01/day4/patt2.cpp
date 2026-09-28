#include<iostream>
using namespace std;

int main() {
     int r,c;
    cout<<"Enter number of rows:";
    cin>>r;
    cout<<"Enter number of coloums:";
    cin>>c;
    cout<<"The desired pattern is:"<<endl;
    for(int i=1; i<=r; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<" "<<endl; 
    }
    return 0;
}
