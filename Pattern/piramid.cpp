#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number of Row: ";
    cin>>n;
    for(int i=0; i<n; i++){
        // Space
        for(int j = 0; j<n-i-1; j++){
            cout<<"  ";
        }
        // Star
        for(int k = 1; k<=2*i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}