#include<bits/stdc++.h>
using namespace std;

int countTrailingZeroes(int n){
    int t = 0;
    for(int i=5; i<=n; i*=5){
        t += n/i;
    }
    return t;
}

int main() {
    int n;
    cin>>n;
    cout<<countTrailingZeroes(n);
}