/*
	two solution
	1. brute force y from 0 to w - 1 and calculate x if meets the demand
	2. use extended euclidean to get the minimum answer
*/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll n , p , w , d;
	cin >> n >> p >> w >> d;

	for(ll i = 0 ; i < w - 1 ; i++){
		ll tmp = (p - (d * i));
		if(tmp < 0) break;
		if(tmp % w == 0 && i + tmp / w <= n){
			ll x = (p - (d * i)) / w ;
			cout << x << " " << i << " " << n-x-i << endl;
			return 0;
		}
	}
	
	cout << "-1" << endl;
	return 0;
}