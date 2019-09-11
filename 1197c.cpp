/*
	calculate the difference between every adjacent number
	n numbers means that there are n - 1 difference s
	making k sub arrays means that you can ignore k - 1 differences
	so sort the difference and add (n - 1) - (k - 1) smallest difference
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n , k , tmp , cur;
	long long ans = 0;
	cin >> n >> k;
	cin >> tmp;
	for(int i = 0 ; i < n - 1 ; i++){
		cin >> cur;
		v.push_back(cur - tmp);
		tmp = cur;
	}
	sort(v.begin(),v.end());
	for(int i = 0 ; i < n - k ; i++){
		ans += v[i];
	}
	cout << ans << endl;

	return 0;
}