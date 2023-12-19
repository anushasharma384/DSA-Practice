#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int t = 0;
    if(n==0) t=1;
    while(n>0){
        t++;
        n /= 10;
    }
    cout<<t;
}