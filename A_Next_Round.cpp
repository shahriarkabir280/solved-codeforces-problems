#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,count=0;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
         if((arr[i]!=0)&&(arr[i]>=arr[k-1])){
            count ++;
         }
    }
    cout<<count;
    return 0;
}