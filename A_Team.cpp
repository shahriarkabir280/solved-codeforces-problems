#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t,n=0;
     cin>>t;
     while(t--){
         int count=0;
         int arr[3];
         for(int i=0;i<3;i++)
         {
             cin>>arr[i];
             if(arr[i]==1){
                count++;
             }
         }
         if(count>=2){
            ++n;
         }
         
}
cout<<n;
return 0;
}