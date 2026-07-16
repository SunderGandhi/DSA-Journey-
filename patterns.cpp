#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n\n";

    int n=4;
    char ch;
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch++<<" ";
        }

        cout<<endl;


    }

    cout<<"\n\n\n";

    int num=1;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }

    cout<<"After patter "<<num;
    cout<<"\n\n\n";

     char ch1='A';
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<ch1++<<" ";
        }
        cout<<endl;
    }

    cout<<"After that "<<ch1;
    return 0;
}
