#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool cp(int s,int m,map<int,int> &a,map<int,int> &b){
	for(auto it = a.begin() ; it != a.end() ; it++){
		if(it->second != b[(it->first+s)%m]){
			return false;
		}
	}
	return true;
}

int main(){
	int m,n;
	cin >> n >> m;
	int tmp;
	map<int,int> a,b;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		a[tmp]++;
	}
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		b[tmp]++;
	}
	auto itb = b.lower_bound(a.begin()->first);
	int cnt = itb->first;
	while(1){
		int f = 1;
		cnt = itb->first-a.begin()->first;
		if(cnt < 0) cnt += m;
 		for(auto it = a.begin() ; it != a.end() ; it++){
			if(b.count((cnt+it->first)%m) == 0 || it->second != b[(it->first+cnt)%m]){
				f = 0;
				break;
			}
		}
		if(f == 1){
			break;
		}
		itb++;
		if(itb == b.end()){
			itb = b.begin();
		}
	}
	cout << cnt << endl;
	return 0;
}


/*
0 0 1 2
0 1 1 2

0 1 2

2 1 1
1 2 1

*/