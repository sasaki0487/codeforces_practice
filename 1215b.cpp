/*
	count the amount of positive product by
	sequential scan through the array
	keep record of amount of pos / neg product before every number (cnt1 cnt2)
	and amount of neg numbers including current number
	if there is even neg numbers from start to current number
	it means that the amount of subarray ends at current number which product is positive
	is same as the amount of the previous number's pos product amount
	otherwise, the amount is same as the previous number's neg product amount

	calculate the amount of neg product by substracting pos count with the total amount of subarray
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,tmp,cnt1=0,cnt2=0,cur=0,po = 0;
	vector<int> v;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		if(tmp > 0)
			v.push_back(1);
		else
			v.push_back(-1);
	}

	for(int i = 0 ; i < n ; i++){
		if(cur % 2 == 0) cnt1++;
		else cnt2++;

		if(v[i] == -1) cur++;

		if(cur % 2 == 0) po+= cnt1;
		else po+= cnt2;
	}
	cout << n * (n + 1) / 2 - po << ' ' << po << endl;
	return 0;
}