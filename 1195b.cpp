/*
	just do a binary search by checking 
	if candies eaten and thrown matches the given number.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	long long l = -1,r = n+1,m = (l + r)/2;
	long long sum = m * (m+1) / 2; 
	while(k + n - m != sum){
		if(sum > k + n - m){
			r = m;
			m = (l + r)/2;
			sum = m * (m+1) / 2;
		}
		else{
			l = m + 1;
			m = (l + r)/2;
			sum = m * (m+1) / 2;
		}
	}
	cout << n - m << endl;
	return 0;
}