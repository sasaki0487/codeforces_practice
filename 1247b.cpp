/*
	use a sliding window of size d
	hash the char in the window into a char,int map
	update the answer if the map size is smaller
	add one and delete one char when moving the window
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,n,k,d,tmp;
	cin >> t;
	while(t--){
		cin >> n >> k >> d;
		map<int,int> m;
		vector<int> v;
		for(int i = 0 ; i < d ; i++){
			cin >> tmp;
			m[tmp]++;
			v.push_back(tmp);
		}
		int ans = m.size();
		for(int i = d ,pos = 0; i < n ; i++,pos++){
			cin >> tmp;
			v.push_back(tmp);
			m[tmp]++;
			m[v[pos]]--;
			if(m[v[pos]] == 0){
				m.erase(v[pos]);
			}
			ans = min(ans,(int)m.size());
		}
		cout << ans << endl;
	}


	return 0;
}
