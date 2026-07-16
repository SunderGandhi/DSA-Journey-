#include <iostream>
using namespace std;

int sum(int n){
    int num=0;
    for(int i=1;i<=n;i++){
        num=num+i;

    }

    return num;
    
}
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


int sum_num(int n){
    int num=0;
    for(int i=0;i<sizeof(n);i++){
        int k=n%10;
        n=n/10;
        num=num+k;
    }
    return num;
}

int binomail(int a,int b){
    int n=factorial(a);
    int r=factorial(b);
    int t=factorial(a-b);
    int result=n/(r*t);
    return result;
}
int permutation(int a,int b){
    int n=factorial(a);
    int r=factorial(b);
    int result=n/r;
    return result;
}
int main(){
    
    cout<<"Sum of the number \t"<<sum(5)<<endl;
    cout<<"Factorial\t\t"<<factorial(6)<<endl;
    cout<<"Sum fo the digit\t"<<sum_num(7777)<<endl;
    cout<<"Binomailof numbers\t"<<binomail(6,3)<<endl;
    cout<<"Permutation of numbers\t"<<permutation(6,3)<<endl;


    return 0;
}
