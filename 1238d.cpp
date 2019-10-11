#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll n;
	string s;
	cin >> n >> s;
	ll total = n * (n - 1) / 2;
	ll cnt = 1;
	for(int i = 1 ; i < n ; i++){
		if(s[i] != s[i-1]){
			total -= cnt;
			cnt = 1;
		}
		else{
			cnt++;
		}
	}
	cnt = 0;
	for(int i = n - 2 ; i >= 0 ; i--){
		if(s[i] != s[i+1]){
			total -= cnt;
			cnt = 0;
		}
		else{
			cnt++;
		}
	}
	cout << total << endl;

	return 0;
}
