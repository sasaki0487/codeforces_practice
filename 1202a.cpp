#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string a,b;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a >> b;
		auto x = b.length() - b.rfind('1');
		auto y = a.length() - a.substr(0,a.length()-x+1).rfind('1');
		/*reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		int x = 0 , y;
		while(b[x]!='1'){
			x++;
		}
		y = x;
		while(a[y]!='1' && y < a.length()){
			y++;
		}*/
		cout << y - x << endl;
	}

	return 0;
}