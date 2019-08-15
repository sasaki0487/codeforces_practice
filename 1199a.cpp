#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,y,tmp;
	cin >> n >> x >> y;
	vector<int> v;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	int i ;
	for(i = 0 ; i < n ; i++){
		int flag = 0;
		for(int j = 1 ; j <= x  && i - j > 0; j++){
			if(v[i-j]<v[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			continue;
		for(int j = 1 ; j <= y  && i + j < n; j++){
			if(v[i+j]<v[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << i << endl;
	return 0 ;
}