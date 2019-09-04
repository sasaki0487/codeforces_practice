#include <bits/stdc++.h>

using namespace std;

int main(){
	int b,g,n,ans = 0;
	cin >> b >> g >> n;
	if(n > b){
		ans += n - b;
	}
	if(n > g){
		ans += n - g;
	}
	cout << n - ans + 1 << endl;

	return 0;
}