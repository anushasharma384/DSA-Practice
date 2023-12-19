#include<bits/stdc++.h>
using namespace std;

void findPrimeNumbers(int n){
    int arr[n+1];
    memset(arr, 1, sizeof(arr));
    for(int i=2; i*i<n; i++){
        if(arr[i]){
            for(int j=i*i; j<=n+1; j+=i)
                arr[j] = 0;
        }
    }
    for(int i=2; i<=n+1; i++){
        if(arr[i]) cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    findPrimeNumbers(n);
}