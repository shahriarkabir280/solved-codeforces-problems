#include <bits/stdc++.h>
using namespace std;

int countFreq(int arr[], int n)
{
    int max=1;
	vector<bool> visited(n, false);

	
	for (int i = 0; i < n; i++) {

		
		if (visited[i] == true)
			continue;

		
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		if(count>max)
          max=count;
          count=0;
	}
    return max;
}

int main()
{   int t;cin>>t;while(t--){
    int n,res;
    cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }if(n==1){
        cout<<"YES"<<"\n";
    }else{
	res=countFreq(arr, n);
    if(res>1){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
}
}
	return 0;
    }