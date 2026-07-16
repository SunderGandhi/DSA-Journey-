#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the N"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;

    }

    cout<<"\n\n\n";
    char ch='A';
    for(int i=1;i<=n;i++){
        ch;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;

    }
    cout<<"\n\n\n";

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;

    }

    //reverse
    cout<<"REVERSE";
    cout<<"\n\n\n";

    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
    
        }
        cout<<endl;
    }
    cout<<"\n\n\n";
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num++<<" ";
    
        }
        cout<<endl;
    }

    char ch1='A';
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            cout<<char(ch1+j)<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}