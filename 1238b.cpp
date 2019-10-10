/*
	remove the duplicate and sort the array
	start from the largest number to check if the number is equal or smaller
	than number of steps * r step by step
	output the steps moved
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int q,n,r,tmp;
	cin >> q;

	while(q--){
		cin >> n >> r;
		set<int> s;
		vector<int> v;
		for(int i = 0 ; i < n ; i++){
			cin >> tmp;
			s.insert(tmp);
		}
		for(auto it:s){
			v.push_back(it);
		}
		int cnt = 0,i = v.size()-1;
		while(i >= 0 && v[i] > cnt * r){
			cnt++;
			i--;
		}
		cout << cnt << endl;
	}


	return 0;
}
