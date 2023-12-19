#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n) {
    if(n==0 || n==1) cout<<"false";
    else if(n==2 || n==3) cout<<"true";
    else if(n%2==0 || n%3==0) cout<<"false";
    else {
        for(int i=5; i*i<=n; i=i+6){
            if(n%i==0 || n%(i+2)==0){
                cout<<"false";
            }
        }
        cout<<"true";
    }
}

int main(){
    int n;
    cin>>n;
    checkPrime(n);
}