#include<bits/stdc++.h>
using namespace std;

int computingPower(int n, int p){
    if(p==0)
    return 1;
    if(p%2==0){
        int t = computingPower(n,p/2);
        return t*t;
    } else {
        return n*computingPower(n,p-1);
    }
}

int main(){
    int n, p;
    cin>>n>>p;
    cout<<computingPower(n,p);
}