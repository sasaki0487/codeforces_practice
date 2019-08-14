#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<char,int>> v;
	int n;
	char c;
	for(int i = 0 ; i < 3 ; i++){
		cin >> n >> c;
		v.push_back(make_pair(c,n));
	}
	sort(v.begin(),v.end());
	if(v[0].first == v[1].first && v[0].first == v[2].first && v[1].first == v[1].first){
		if(v[0].second == v[1].second && v[0].second == v[2].second && v[1].second == v[1].second){
			cout << 0;
			return 0;
		}
		if(v[0].second+1 == v[1].second && v[0].second+2 == v[2].second){
			cout << 0;
			return 0;
		}
		if(v[0].second+1 == v[1].second || v[1].second+1 == v[2].second){
			cout << 1;
			return 0;
		}
	}
	if(v[0].first == v[1].first){
		if(v[0].second == v[1].second || v[0].second+1 == v[1].second || v[0].second+2 == v[1].second){
			cout << 1;
			return 0;
		}
	}
	if(v[2].first == v[1].first){
		if(v[2].second == v[1].second || v[2].second-1 == v[1].second || v[2].second-2 == v[1].second){
			cout << 1;
			return 0;
		}
	}
	cout << 2;

	return 0;
}