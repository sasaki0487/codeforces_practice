//
//  Output numbers such as 23,233,2333 or 98,998,9998
//
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1){
            cout << "-1\n";
        }
        else{
            string str="";
            for(int i = 0 ; i < n-1 ; i++){
                str+='9';
            }
            str += '8';
            cout << str << endl;
        }
    }
    return 0;
}
