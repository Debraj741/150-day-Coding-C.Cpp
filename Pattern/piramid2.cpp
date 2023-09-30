#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Number of Row: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        // Print Space :
        for(int j = 0; j<n-i; j++){
            cout<<"  ";
        }
        // Print Num:
        int temp = 1;
        for(int k = 1; k<=(2*i)-1;k++){
            if(k>=i){
                cout<<temp--<<" ";  
            }
            else 
                cout<<temp++<<" ";
        }
        cout<<endl;
    }

    return 0;
}