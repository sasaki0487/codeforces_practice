/*
	simple brute force finding smallest remainder
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d,e;
	cin >> n >> d >> e;
	e *= 5;
	int cnt = n / e;
	int num = cnt * e;
	int ans = n - num;
	while(cnt >= 0){
		while(num + d <= n)
			num += d;
		if(ans > n - num){
			ans = n - num;
		}
		num -= e;
		cnt--;
	}
	cout << ans << endl;


	return 0;
}