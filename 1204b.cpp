#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,l,r;
	long long ans_m = 0,ans_l = 0,tmp = 1;
	cin >> n >> l >> r;
	for(int i = 0 ; i < l ; i++){
		ans_l += tmp;
		ans_m += tmp;
		tmp <<= 1; 
	}
	for(int i = 0 ; i < r -l ; i++){
		ans_l += tmp;
		tmp <<= 1; 
	}
	tmp >>= 1;
	ans_l += (n - r) * tmp;
	ans_m += (n - l);
	cout << ans_m << " " << ans_l << endl;

	return 0;
}