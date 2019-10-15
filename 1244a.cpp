/*
	calculate ceil of a/c and b/d
	if sum of the two numbers is larger than k
	then output -1
	else output the two numbers
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,a,b,c,d,k;
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d >> k;
		int x = ceil(double(a)/c);
		int y = ceil(double(b)/d);
		if(x + y > k){
			cout << "-1" << endl;
		}
		else{
			cout << x << " " << y << endl;
		}
	}

	return 0;
}
