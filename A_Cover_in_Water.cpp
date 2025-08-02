#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
   
    cin>>t;
    while(t--){
        string s;
        long long n;
        cin>>n;
        cin>>s;
         bool three= false;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'&& i+1<n && s[i+1]=='.'&& i+2<n && s[i+2]=='.'){
                three=true;
                break;
            }
            if(s[i]=='.'){
                    count++;
                }
            
        }
        if(three){
            cout<<2<<endl;
        }
        else{
            cout<<count<<endl;
        }


    }
}