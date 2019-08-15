#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int h , l;
	cin >> h >> l; 
	cout << setprecision(13) << (long double)(l * l - h * h) / (2 * h) << endl;

	return 0 ;
}