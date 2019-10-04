#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	string s;
	int q,t,l,r;
	char c;
	cin >> s >> q;
	vector<set<int>> v(26);
	for(int i = 0 ; i < s.size() ; i++){
		v[s[i]-'a'].insert(i+1);
	}
	while(q--){
		cin >> t;
		if(t == 1){
			cin >> l >> c;
			if(s[l-1] == c)
				continue;
			int tmp = s[l-1] - 'a';
			s[l-1] = c;
			v[c-'a'].insert(l);
			v[tmp].erase(l);
		}
		else{
			cin >> l >> r;
			int cnt = 0;
			for(int i = 0 ; i < 26 ; i++){
				auto it = v[i].lower_bound(l);
				if(it != v[i].end() && *it <= r){
					cnt++;
				}
			}
			cout << cnt << endl;
		}
	}


	return 0;
}
