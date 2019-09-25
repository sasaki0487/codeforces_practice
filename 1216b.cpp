/*
	sort by descending order , record the index by pair
	count the sum and record the index using the formula given by the problem
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,tmp;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		v.push_back({tmp,i});
	}
	sort(v.rbegin(),v.rend());

	int ans = 0;
	vector<int> in;
	for(int i = 0 ; i < n ;i++){
		ans += ((v[i].first * i) + 1);
		in.push_back(v[i].second);
	}
	cout << ans << endl;
	for(int i = 0 ; i < n ; i++){
		cout << in[i] + 1 << " ";
	}

	cout << endl;
	return 0;
}