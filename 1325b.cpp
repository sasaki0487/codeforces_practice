// since the array is length n and copied n times
// so the answer is the elements in the array excluding the duplicate
// by selecting every distinct element in the array from minimum to the max
// will form the longest increasing subsequent.
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t,n,tmp;
    cin >> t;
    while(t--){
        cin >> n;
        set<int> s;
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            s.insert(tmp);
        }
        cout << s.size() << endl;
    }

    return 0;
}
