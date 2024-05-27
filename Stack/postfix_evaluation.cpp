#include <bits/stdc++.h>
using namespace std;

double infixToPostfix(string s)
{
	stack<double> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			continue;
		}
		if (isdigit(s[i]))
		{
			double num = 0;
			while (isdigit(s[i]))
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}
			i--;
			st.push(num);
		}
		else
		{
			double op1 = st.top();
			st.pop();
			double op2 = st.top();
			st.pop();
			switch (s[i])
			{
			case '+':
				st.push(op2 + op1);
				break;
			case '-':
				st.push(op2 - op1);
				break;
			case '*':
				st.push(op2 * op1);
				break;
			case '/':
				st.push(op2 / op1);
				break;
			case '^':
				st.push(pow(op2, op1));
				break;
			}
		}
	}
	return st.top();
}
int main()
{

	// Postfix Evaluation
	string s;
	getline(cin, s);
	cout << infixToPostfix(s) << "\n";
	return 0;
}