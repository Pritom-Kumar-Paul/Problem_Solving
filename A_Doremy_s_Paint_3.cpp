#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool x=false;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            if(n==2){
                x=true;
            }
            else if(a[i]+a[i+1]==a[i+1]+a[i+2] && i<n-1){
                x=true;
            }
            else{
                x=false;
            }

        }
        if(x==true){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}