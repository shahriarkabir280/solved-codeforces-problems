#include <bits/stdc++.h>
using namespace std;
int cntDistinct(string str)
{
	unordered_set<char> s;
	for (int i = 0; i < str.size(); i++) {
		s.insert(str[i]);
	}
	return s.size();
}

int main()
{
    int c;
	string str;
    cin>>str;
	c=cntDistinct(str);
    if(c%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

	return 0;
}
