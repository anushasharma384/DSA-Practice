#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n){
    if(n==0 || n==1) return;
    else if(n==2 || n==3) cout<<n;
    if(n%2==0){
        while(n%2==0){
            cout<<"2 ";
            n/=2;
        }
    } 
    if(n%3==0){
        while(n%3==0){
            cout<<"3 ";
            n/=3;
        }
    } 
    for(int i=5; i*i<=n; i=i+6){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2)==0){
            cout<<(i+2)<<" ";
            n/=(i+2);
        }        
    }    
    if(n>3) cout<<n;
}

int main() {
    int n;
    cin>>n;
    printPrimeFactors(n);
}