#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter No of Row: ";
    cin>>n;

    int space = 0;
    for(int half=1; half<=n; half++){
        int i = 1;
        for(; i<= n-half+1; i++){
            cout<<"* ";
        }
        for(int j = 1; j<=space; j++){
            cout<<"  ";
            i++;
        }
        space+=2;
        for(; i<=2*n; i++){
            cout<<"* ";
        }

        cout<<endl;
    }


    for(int half=1; half<=n; half++){
        int i = 1;
        for(; i<= half; i++){
            cout<<"* ";
        }
        space-=2;
        for(int j = 1; j<=space; j++){
            cout<<"  ";
        }
        for(int j = 1; j<i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

        




    return 0;
}