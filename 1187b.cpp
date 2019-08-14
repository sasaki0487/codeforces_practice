#include <bits/stdc++.h>

using namespace std;

int main(){
	int l,n;
	string s;
	cin >> l >> s >> n;
	vector< vector<int> > arr(26);
	for(int i = 0 ; i < l ; i++){
		arr[s[i]-'a'].push_back(i);
	}
	for(int i = 0 ; i < n ; i ++){
		int ans = 0;
		cin >> s;
		unordered_map<char,int> m;
		for(int j = 0 ; j < s.length() ; j++){
			m[s[j]]++;
		}
		for(auto it:m){
			ans = max(arr[it.first-'a'][it.second-1],ans);
		}
		cout << ans+1 << "\n";
	}


	return 0;
}