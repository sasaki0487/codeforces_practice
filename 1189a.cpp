#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,one = 0 ,zero = 0;
	string str;
	cin >> a >> str;

	for(int i = 0 ; i < a ; i++){
		if(str[i] == '1')
			one++;
		else
			zero++;
	}
	if(one != zero){
		cout << "1" << "\n" << str;
	}
	else{
		cout << "2" << "\n" << str[0] << " " << str.substr(1);
	}

	return 0;
}