#include<iostream>
using namespace std;
int reverse(int);
int main(){
    int n; 
    cin>>n;
    if(n>=0)
        cout<<reverse(n);
    else{
        n=-1*n;
        n=reverse(n);
        n=-1*n;
        cout<<n;
    }
}
int reverse(int n){
    int x=0; 
    while(n>0){
        x=x*10+n%10;
        n=n/10;
    }
    return x;
}