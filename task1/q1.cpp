#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int);
bool iscprime(int);
int rotate(int,int);
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
int rotate(int n, int l){//one single rotation
    int fdig=n/l; //first digit
    int rot=(n%l)*10+fdig;
    return rot;
}
bool iscprime(int n){
    int nodig=log10(n);//casting to integer will give number of digits-1
    int p=pow(10,nodig);
    for(int i=0;i<nodig;i++){
        if(!isprime(n))
            return false;
        n=rotate(n,p);
    }
    return true;
}
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){//square root has less iterations than half of the number
        if(n%i==0)
            return false;
    }
    return true;
}
