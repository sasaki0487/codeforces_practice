/*
	do sequential scan
	if even char is same as odd char,
	remove the odd char and check again
	remove the last character if the string length is odd 
*/

#include <bits/stdc++.h>

using namespace std

int main(){
	int n;
	string str;
	cin >> n >> str;
	for(int i = 0 ; i < str.size() - 1 ; i++){
		if(i % 2 == 0 && str[i] == str[i+1]){
			str.erase(i+1,1);
			i--;
		}
	}
	if(str.size() % 2 != 0){
		str.erase(str.size()-1,1);
	}
	cout << n - str.size()  << endl << str << endl;


	return 0;
}