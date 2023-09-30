#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter No of Row: ";
    cin>>n;

    for(int i = n; i>= 1; i--){
        for(int k = 1; k<=n-i; k++){
            cout<<"  ";
        }
        for(int k = 1; k<= (2*i)-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}