#include<bits/stdc++.h>
using namespace std;
    int main(){
            int k,n,w,s;cin>>k>>n>>w;
            s=(w*(k+k*w))/2;
            cout<<max((s-n),0);
    return 0;
}