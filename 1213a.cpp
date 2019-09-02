/*
	because +-2 is free so you can move all odd / even num to same spot free
	all you need to do is move odd and even number together
	so count odd and even number
	output the smaller one
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,tmp,odd = 0 ,eve = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		if(tmp % 2 == 0)
			eve++;
		else
			odd++;
	}
	cout << min(eve,odd) << endl;

	return 0;
}