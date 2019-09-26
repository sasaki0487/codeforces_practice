/*
	find the max number
	find the GCD of (max num - every other number)
	the GCD is z then you can obtain y
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,tmp;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if(n == 2){
		if(v[0] == v[1]){
			cout << "0 0" << endl;
		}
		else{
			cout << "1 " << abs(v[0]-v[1]) << endl;
		}
		return 0;
	}
	sort(v.rbegin(),v.rend());
	int g = __gcd(v[0]-v[1],v[0]-v[2]);
	for(int i = 3 ; i < n ; i++){
		g = __gcd(g,v[0]-v[i]);
	}
	long long y = 0;
	for(int i = 1; i < n ; i++){
		y += (v[0] - v[i])/g;
	}
	cout << y << " " << g << endl;
	return 0;
}