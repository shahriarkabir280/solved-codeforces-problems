#include<bits/stdc++.h>
#include<iostream>
using namespace std;
     int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
         int n,max,m;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         max=*max_element(arr,arr+n);
         m=find(arr, arr+n, max) - arr;
         sort(arr,arr+n);
         cout<<m+1<<" "<<arr[n-2];

return 0;
}