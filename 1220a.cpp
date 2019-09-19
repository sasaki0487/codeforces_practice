/*
	make a char -> char count map
	find min count of ('o','n','e') to know how many 1 can we get
	substract the amount of 1 we can get from the map
	then find the zeros we can get
	output the 1s and 0s
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int dic[5] = {0};
	int l;
	string s;
	cin >> l >> s;
	for(char c : s){
		if(c == 'z') dic[0]++;
		else if(c == 'e') dic[1]++;
		else if(c == 'r') dic[2]++;
		else if(c == 'o') dic[3]++;
		else if(c == 'n') dic[4]++;
	}
	int o = INT_MAX,z = INT_MAX;
	o = min(o,dic[1]);
	o = min(o,dic[3]);
	o = min(o,dic[4]);

	dic[1] -= o;
	dic[3] -= o;
	dic[4] -= o;

	z = min(z,dic[0]);
	z = min(z,dic[1]);
	z = min(z,dic[2]);
	z = min(z,dic[3]);

	for(int i = 0 ; i < o ; i++){
		cout << "1 ";
	}
	for(int i = 0 ; i < z ; i++){
		cout << "0 ";
	}
	cout << endl;
	return 0;
}