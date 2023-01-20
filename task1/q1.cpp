#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int);
bool iscprime(int);
int reverse(int);
bool iscoprime(int , int);
int main(){
    cout<<"enter a number"<<endl;
    int n,m; 
    cin>>n;
    if(isprime(n))
        cout<<n<<" is a prime number"<<endl;
    else
        cout<<n<<" is not a prime number"<<endl;
    if(iscprime(n))
        cout<<n<<" is circulur prime"<<endl;
    else
        cout<<n<<" is not a circulur prime"<<endl;
    cout<<"enter another number"<<endl;
    cin>>m;
    if(iscoprime(n,m))
        cout<<n<<" and "<<m<<" are coprime"<<endl;
    else
        cout<<n<<" and "<<m<<" are not coprime"<<endl;
    
}
bool iscoprime(int n, int m){
    for(int i=2;i<=n && i<=m;i++){
        if(n%i==0 && m%i==0){
            return false;
        }
    }
    return true;
}
int reverse(int n){
    int x=0; 
    while(n>0){
        x=x*10+n%10;
        n=n/10;
    }
    return x;
}

bool iscprime(int n){
    if(isprime(n) && isprime(reverse(n)))
        return true;
    else
        return false; 
}
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){//square root has less iterations than half of the number
        if(n%i==0)
            return false;
    }
    return true;
}