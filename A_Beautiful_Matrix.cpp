#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[j];
            if(arr[j]==1){
                cout<<(fabs(3-(i+1))+fabs(3-(j+1)));
            }
        }

    }
    return 0;
}