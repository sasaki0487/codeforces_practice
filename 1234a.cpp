/*
	sum up and output ceil(ave)
*/


#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
	double q,n;
	ll tmp;
	cin >> q;
	for(int i = 0 ; i < q; ++i){
		cin >> n;
		ll sum = 0;
		for(int j = 0 ; j < n ; ++j){
			cin >> tmp;
			sum += tmp;
		}
		cout << ll(ceil(sum/n)) << endl;
	}

	return 0;
}