#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
    if(n%10>0){
        n--;
    }
    else if(n%10==0){
        n/=10;
    }
    }
    cout<<n;

}