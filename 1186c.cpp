#include <bits/stdc++.h>

using namespace std;



int main(){
	string a,b;
	cin >> a >> b;
	int l = b.length();
	int tmp = 0;
	int ans = a.length() - l + 1; 
	for(int i = 0 ; i < l ; i++){
		tmp ^= a[i] ^ b[i];
	}
	ans -= tmp;
	for(int i = l ; i < a.length() ; i++){
		tmp ^= a[i-l] ^ a[i];
		ans -= tmp;
	}
	cout << ans << "\n";
	return 0;
}