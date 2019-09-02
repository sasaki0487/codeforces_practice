/*
	scan from behind
	check if current is larger than smallest number so far
	if larger than cnt++
	else update the smallest num
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,tmp;
	cin >> t;
	for(int i = 0 ; i < t ; i++){
		cin >> n;
		vector<int> v;
		for(int j = 0 ; j < n ; j++){
			cin >> tmp;
			v.push_back(tmp);
		}
		int cnt = 0;
		int mini = v[n - 1];
		for(auto cur = v.rbegin() + 1 ; cur != v.rend() ; cur++){
			if(*cur > mini){
				cnt++;
			}
			else{
				mini = *cur;
			}
		}
		cout << cnt << endl; 
	}


	return 0;
}