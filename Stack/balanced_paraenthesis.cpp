#include <bits/stdc++.h>
using namespace std;

bool matching(char a, char b) {
	return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
bool inbalanced(string &str) {
	stack<char> s;
	for (auto i : str) {
		if (i == '(' || i == '{' || i == '[')
			s.push(i);
		else {
			if (s.empty() == true)
				return false;
			if (matching(s.top(), i) == false)
				return false;
			else
				s.pop();
		}
	}
	return (s.empty() == true);
}
int main() {

	// checking for balanced paranthesis
	int t ;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		if (inbalanced(str))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}