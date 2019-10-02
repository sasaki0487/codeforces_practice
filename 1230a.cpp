/*
	check if bag 1,2,3,4,1+2,1+3,1+4 equals to half of the total amount
	if yes then output yes
	otherwise output no
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v(4);
	int sum = 0;
	for(int i = 0 ; i < 4 ; i++){
		cin >> v[i];
		sum += v[i];
	}
	if(sum % 2 != 0){
		cout << "NO" << endl;
		return 0;
	}
	sum /= 2;
	for(int i = 0 ; i < 4 ; i++){
		if(v[i] == sum){
			cout << "YES" << endl;
			return 0;
		}
	}
	if((v[0] + v[1]) == sum)
		cout << "YES" << endl;
	else if((v[0] + v[2]) == sum)
		cout << "YES" << endl;
	else if((v[0] + v[3]) == sum)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}