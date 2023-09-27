#include<iostream>
using namespace std;

int main(){

    // for(int row = 1; row<=5; row++){
    //     for(int col = 1; col<=row; col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int row = 1; row<=5; row++){
    //     for(int col = row; col>=1; col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int row = 1; row<=5; row++){
    //     for(int col = 1; col<=row; col++){
    //         char name = 'a' + (row-1);
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int row = 1; row<=5; row++){
    //     for(int col = 1; col<=5-(row-1); col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    for(int row = 5; row>=1; row--){
        for(int col = 5; col>=row; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}