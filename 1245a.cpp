/*
	Math problem
	it's infinite if gcd of a and b is not 1
	and either a and b are not 1
*/


#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		if(__gcd(a,b) == 1 || a == 1 || b == 1){
			cout << "Finite" << endl;
		}
		else{
			cout << "Infinite" << endl;
		}
	}


	return 0;
}
