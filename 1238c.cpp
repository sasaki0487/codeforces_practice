/*
	add a zero to the end of array
	if v[i] == v[i+2] + 1
	then can move to the next platform
	else you need a stone
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int q,h,n;
	cin >> q;
	while(q--){
		cin >> h >> n;
		vector<int> v(n);
		for(int i = 0 ; i < n ; i++){
			cin >> v[i];
		}
		int cnt = 0;
		v.push_back(0);
		for(int i = 1 ; i < n ; i++){
			if(v[i] == (v[i+1] + 1)){
				i++;
			}
			else{
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
