/*
	check two char at the same time
	if they are the same, change one of them into another char 
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ans = 0;
	string s;
	cin >> n >> s;
	for(int i = 0 ; i < n ; i += 2){
		if(s[i] == s[i + 1]){
			ans++;
			if(s[i] == 'a')
				s[i] = 'b';
			else
				s[i] = 'a';
		}
	}
	cout << ans << endl << s << endl;
	return 0;
}