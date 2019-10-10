/*
	if x - y <= 1 then the answer is no
	otherwise it's yes
*/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t;
	cin >> t;
	ll x,y;
	while(t--){
		cin >> x >> y;
		if(x-y > 1){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}


	return 0;
}
