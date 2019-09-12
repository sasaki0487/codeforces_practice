/*
	the number is at least 25
	and should have a factor which sqrt(number) >= factor >= 25  
	you can compose the word by adding "aeiou" continuously
	but you have to shift "aeiou" by 1 index per row if there is 5 or 5's multiple
	to ensure the answer is available.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string vowel = "aeiou";
	int n;
	cin >> n;
	if(n < 25){
		cout << "-1" << endl;
		return 0;
	}
	int i = 5;
	while(i <= sqrt(n)){
		if(n % i == 0)
			break;
		++i;
	}
	if(n % i != 0){
		cout << "-1" << endl;
		return 0;
	}
	string ans="";
	if(n % 5 == 0){
		for(i = 0 ; i < n / 5 ; i++){
			for(int j = 0 ; j < 5 ; j++){
				ans += vowel[(i+j)%5];
			}
		}
		cout << ans << endl;
		return 0;
	}
	for(i = 0 ; i < n ; i++){
		ans += vowel[i%5];
	}
	cout << ans << endl;
	return 0;
}