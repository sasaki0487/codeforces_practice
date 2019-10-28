#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int n,p;
	cin >> n >> p;
	if(n <= p){
		cout << "-1" << endl;
		return 0;
	}
	int cnt = 0;
	while(n > 0 && (__builtin_popcount(n) > cnt || cnt > n)){
		n -= p;
		cnt++;
	}
	if(n < 0 || cnt == 0){
		cout << "-1" << endl;
	}
	else{
		cout << cnt << endl;
	}
	return 0;
}
