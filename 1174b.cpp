/*
	sort if array contains both odd and even number.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , tmp ,f1 = 0,f2 = 0;
	cin >> n;
	vector<int> v(n,0);
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		if(tmp % 2 != 0)
			f1 = 1;
		else
			f2 = 1;
		v[i] = tmp;
	}
	if(f1&&f2){
		sort(v.begin(),v.end());
	}
	for(int i = 0 ; i < v.size() ; i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}