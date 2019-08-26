/*
	straight forward
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,x,b,y;
	cin >> n >> a >> x >> b >> y;
	a--;
	x--;
	b--;
	y--;
	while(a != x && b != y){
		if(a == b){
			cout << "YES" << endl; 
			return 0;
		}
		a = (a + 1) % n;
		b = b - 1 < 0 ? b + n - 1 : b - 1;
	}
	if(a == b){
		cout << "YES" << endl; 
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}