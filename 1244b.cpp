/*
	Two cases
	1. all num is zero -> return len(str)
	2. max(len(str),max(rightmost ladder * 2,len(str) - leftmost ladder)*2)
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,n;
	string s;
	cin >> t;
	while(t--){
		cin >> n >> s;
		if(s[0] == '1' || s[n-1] == '1'){
			cout << n*2 << endl;
			continue;
		}
		int r = -1,l = n;
		for(int i = 0 ; i < n ; i++){
			if(s[i] == '1'){
				r = i;
				break;
			}
		}
		for(int i = n - 1 ; i >= 0 ; i--){
			if(s[i] == '1'){
				l = i;
				break;
			}
		}
		if(r == -1){
			cout << n << endl;
		}
		else{
			cout << max(n+1,max((l+1)*2,(n-r)*2)) << endl;
		}
	}


	return 0;
}
