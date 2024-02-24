#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
         int a,b,c;
         cin>>a>>b>>c;
         if ((a==(b+c))||(b==(c+a))||(c==(a+b))){
            cout<<"YES"<<"\n";

         }
         else{
            cout<<"NO"<<"\n";
         }
}
return 0;
}