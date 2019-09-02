/*
	find the sequence of the last digit
	count how many rounds of the sequence happens
	add them up
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	for(int i = 0 ; i < q ; i++){
		long long n , m , cnt ,ans = 0;
		cin >> n >> m;
		cnt = n / m;
		m %= 10;
		
		vector<int> v;
		int cur = m;
		int sum = m;
		v.push_back(m);
		while(1){
			cur += m;
			cur %= 10;
			if(cur == v[0]) break;
			sum += cur;
			v.push_back(cur);
		}
		int rem = cnt % v.size();

		for(int j = 0 ; j < rem ; j++)
			ans += v[j];
		ans += sum * (cnt / v.size());
		cout << ans << endl;
	}


	return 0;
}