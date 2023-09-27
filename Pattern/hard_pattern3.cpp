#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter No of Row : ";
    cin>>n;
/*
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n ; j++){                           *
            if(j<=n-i)                                      * * 
                cout<<"  ";                               * * *
            else                                        * * * *
                cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n ; j++){                     
            if(j<=n-i)                                   
                cout<<"  ";                             
            else                                        
                cout<<i<<" ";
        }
        cout<<endl;
    }




    for(int i = 1; i<=n; i++){
        // Space print
        for(int j =1; j<=n-i; j++){
            cout<<"  ";
        }
        // Number Print
        for(int j = 1; j<= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
*/

    for(int i = 1; i<=n; i++){
        // Space print
        for(int j =1; j<=n-i; j++){
            cout<<"  ";
        }
        // Number Print
        for(int j = i; j>= 1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}