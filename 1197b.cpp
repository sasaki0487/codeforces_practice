/*
	check if the array is ascending till the max num 
	and then become descending
	if yes then it can meet the requirement
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,tmp,i;
	vector<int> v;
	cin >> n;
	for(i = 0 ; i < n ; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	for(i = 0 ; v[i] != n ; i++){
		if(i + 1 < n && v[i] > v[i+1]){
			cout << "NO" << endl;
			return 0;
		}
	}
	for(; i + 1 < n ; i++){
		if(v[i] < v[i+1]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}