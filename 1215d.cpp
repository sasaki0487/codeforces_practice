/*
	count the amount of ? and sum of numbers on both side
	if the amount of ? is same on left and right part
	Bicarp can win only if the sum of number is same on both side
	else
	if the amount of ? on left side is more than right side
	then Bicarp can win only if the number sum of right side - sum of left side
	equals (the amount of ? on left side - right side / 2) * 9
	same if right ? is more then left
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int i,n,cnt1 = 0,cnt2 = 0,sum1 = 0 ,sum2 = 0;
	string s;
	cin >> n >> s;
	for(i = 0 ; i < n / 2 ; i++){
		if(s[i] == '?')
			cnt1++;
		else
			sum1 += s[i]-'0';
	}
	for(;i < n ; i++){
		if(s[i] == '?')
			cnt2++;
		else
			sum2 += s[i]-'0';
	}
	if(cnt1 == cnt2){
		if(sum1 == sum2)
			cout << "Bicarp" << endl;
		else
			cout << "Monocarp" << endl;
		return 0;
	}
	if((cnt1 - cnt2) / 2 * 9 == (sum2 - sum1))
		cout << "Bicarp" << endl;
	else
		cout << "Monocarp" << endl;
	return 0;
}