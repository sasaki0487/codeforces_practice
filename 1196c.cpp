/*
	sequential scan
	update max and min of x/y coordinate if the robot can't move in certain direction
	the point is available if max > min for both coordinate
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,n,x,y,f1,f2,f3,f4;
	cin >> q;
	for(int k = 0 ; k < q ; k++){
		cin >> n;
		int minx = -100000,miny = -100000,maxx = 100000,maxy = 100000;
		for(int j = 0 ; j < n ; j++){
			cin >> x >> y >> f1 >> f2 >> f3 >> f4;
			if(f1 == 0){
				minx = max(minx,x);
			}
			if(f3 == 0){
				maxx = min(maxx,x);
			}
			if(f4 == 0){
				miny = max(miny,y);
			}		
			if(f2 == 0){
				maxy = min(maxy,y);
			}
		}
		if(minx <= maxx && miny <= maxy){
			cout << 1 << " " << minx << " " << miny << endl;
		}
		else{
			cout << 0 << endl;
		}
	}


	return 0;
}