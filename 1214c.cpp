/*
	straight forward using stack
	if the final stack is empty or )( then it's available
	odd string len is always "No"
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n ;
	string str;
	cin >> n >> str;
	stack<char> s;
 	if(n % 2 != 0){
		cout << "No" << endl;
		return 0;
	}
	for(int i = 0 ; i < n ; i++){
		if(str[i] == '(')
			s.push('(');
		else if(!s.empty())
			if(s.top() == '(')
				s.pop();
			else
				s.push(')');
		else
			s.push(')');
	}
	str = "";
	while(!s.empty()){
		str += s.top();
		s.pop();
	}
	if(str == "" || str == "()"){
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;

	return 0;
}

