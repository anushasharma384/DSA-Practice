#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(int n){
    int rev = 0;
    int org = n;
    while(n>0){
        rev = rev*10 + n%10;
        n /= 10;
    }
    rev==org ? cout<<"true" : cout<<"false";
}

int main(){
    int n;
    cin>>n;
    checkPalindrome(n);
}