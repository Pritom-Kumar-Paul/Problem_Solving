#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1,sum=0;
    for(int i=0;i<n;i++){
        
       
        sum+=a;
        
        int c=a+b;
        a=b;
         b=c;

    }
    cout<<sum;
}