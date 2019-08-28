/*
	built a prime number table
	start with n = 1
	if the index is prime then set the index = n , n++
	if the index is not prime then set then value equal to the
	value of it's smallest factor
*/


#include <bits/stdc++.h>

using namespace std;

int arr[100002] = {0};
void cal(){
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2 ; i < 100001 ; i++){
		if(arr[i] == 0){
			arr[i] = 0;
			for(int j = i * 2 ; j < 100001 ; j+= i){
				arr[j] = 1;
			} 
		}
	}
}

int main(){
	cal();
	int n;
	cin >> n;
	vector<int> v(n+1,0);
	int cnt = 1;
	for(int i = 2 ; i <= n ; i++){
		if(arr[i] == 0){
			v[i] = cnt;
			cnt++;
		}
		else{
			int j = 2;
			while(arr[j] == 1 || i % j != 0){
				j++;
			}
			v[i] = v[j];
		}
	}
	for(int i = 2 ; i <= n; i++){
		cout << v[i] << " " ;
	}
	cout << endl;
	return 0;
}