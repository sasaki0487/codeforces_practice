/*
	sort the array
	let the two longest plank be the base
	others be the steps
	the smaller one between the shorter length -1 and amount of steps is the answer

*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,tmp;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> v;
		for(int i = 0 ; i < n ; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		cout << max(0,min(v[n-2]-1,n-2)) << endl;
	}


	return 0;
}