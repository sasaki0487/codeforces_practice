#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ans = 0;
	vector<int> v;
	set<int> l;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int in;
		cin >> in;
		v.push_back(in);
	}
	sort(v.rbegin(),v.rend());
	int mx = v[0] + 2;
	for(int i = 0 ; i < n ; i++){
		int cur = -1;
		for(int ad = 1 ; ad >= -1 ; ad--){
			if(v[i] + ad > 0 && v[i] + ad < mx){
				cur = v[i] + ad;
				break;
			}
		}
		if(cur == -1)
			continue;
		ans++;
		mx = cur;

	}
	cout << ans << endl;
	return 0;
}