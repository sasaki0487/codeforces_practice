/*
	table[0][1] = num 1 * num 2
	table[0][2] = num 1 * num 3
	table[1][2] = num 2 * num 3

	(num 1) ^ 2 = table[0][1] * table[0][2] / table[1][2]
	after obtaining num1 you can get the rest number by dividing the first column using num1
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,tmp;
	cin >> n;
	vector<vector<long long>> v(n,vector<long long>(n));
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n; j++){
			cin >> tmp;
			v[i][j] = tmp;
		}
	}
	
	tmp = sqrt(v[0][1] * v[0][2] / v[1][2]);
	cout << tmp << " ";
	for(int i = 1 ; i < n ; i++){
		cout << v[0][i] / tmp << " ";
	}
	cout << endl;
	return 0;
}