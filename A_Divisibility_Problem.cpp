#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(0);
     int t;
     cin>>t;
     while(t--){
         int a,b,c;cin>>a>>b;
         if(b>=a){
            cout<<b-a<<"\n";
         }
         else{
            c=(a+b-1)/b;
            cout<<(c*b)-a<<"\n";
         }
        
}
return 0;
}