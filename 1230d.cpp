/*
	group everyone who has same skill
	then merge group that has strictly less skill
*/


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int n;
	unordered_map<ll,int> m;
	set<int> s;
	ll ans = 0;
	cin >> n;
	vector<ll> a(n),b(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
	}
	for(auto it:m){
		if(it.second <= 1){
			continue;
		}
		for(int i = 0 ; i < n ; i++){
			if((it.first | a[i]) == it.first){
				s.insert(i);
			}
		}
	}
	for(auto it:s){
		ans += b[it];
	}
	cout << ans << endl;
	return 0;
}