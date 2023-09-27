#include<iostream>
using namespace std;

int main(){
    // for(int row = 1; row<=5; row++){
    //     for(int col = 1; col<=5; col++){
    //         cout<<col*col<<" ";
    //     }
    //     cout<<endl;
    // }

    // char ans = 'a';
    // for(char i = 'a'; i<='e'; i++){
    //     for(int j = 1; j<=5; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1; row<=5; row++){
        for(int col = 1; col<=5; col++){
            cout<<(row-1)*5+col<<" ";
        }
        cout<<endl;
    }

    return 0;
}