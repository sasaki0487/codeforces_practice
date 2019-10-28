/*
	consider case
	1. a == 9 && b == 1
	2. a == b
	3. a + 1 == b 
*/
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a == 9 && b == 1){
		cout << "9 10" << endl;
	}
	else if(a == b){
		cout << a << "0 " << b << "1" << endl; 
	}
	else if(b == a+1){
		cout << a << "9 " << b << "0" << endl;
	}
	else{
		cout << "-1" << endl;
	}



	return 0;
}