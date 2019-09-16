/*
	min: give the team with more cards receivable (k-1) cards first
		then give the another team k-1 cards
		the number of cards left is the minimum of players thrown
	max: give the team with less cards receivable k cards
		and then give the another team
		count the players reach the card limit
	# notice the devide by zero situation
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int tmp,a1,a2,k1,k2,n,mn = 0,mx = 0,n2;
	cin >> a1 >> a2 >> k1 >> k2 >> n;

	if(k1 < k2){
		tmp = a1;
		a1 = a2;
		a2 = tmp;
		tmp = k1;
		k1 = k2;
		k2 = tmp;
	}
	n2 = n;

	if(k1 == 1){
		mn = n;
	}
	else{
		tmp = n / (k1 - 1);
		if(tmp > a1){
			n -= a1 * (k1 - 1);
			if(k2 == 1){
				mn += n;
			}
			else{
				tmp = n / (k2 - 1);
				if(tmp >= a2){
					n -= a2 * (k2 - 1);
					mn += n;
				}
			}
		}
	}
	
	tmp = n2 / k2;
	if(tmp > a2){
		mx += a2;
		n2 -= a2 * k2;
		tmp = n2 / k1;
		mx += tmp;
	}
	else{
		mx += tmp;
	}

	cout << mn << " " << mx << endl;
	return 0;
}