// create the modified string for every case
// compare using the default compare operand of std::string
// update the answer number and string if the created string is smaller
// O(n)? reversing the string is linear so maybe O(n^2)
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        string ori = s;
        int ans = 1;
        for(int i = 1 ; i < n ; i++){ 
            string tmp;
            if((n-i) % 2 == 0){
                tmp = ori.substr(i,n) + ori.substr(0,i);
            }
            else{
                string rvtmp = ori;
                reverse(rvtmp.begin(),rvtmp.begin()+i);
                tmp = ori.substr(i,n) + rvtmp.substr(0,i);
            }
            if( tmp < s ){
                ans = i;
                s = tmp;
            }
        }
        if(ans != 1){
            ans++;
        }
        cout << s << endl << ans << endl;
    }


    return 0;
}
