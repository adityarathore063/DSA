#include <bits/stdc++.h>
using namespace std;

double infixToPrefix(string s)
{
	stack<double> st;
	for (int j = s.length() - 1; j >= 0; j--)
	{
		if (s[j] == ' ')
		{
			continue;
		}
		if (isdigit(s[j]))
		{
			// there may be more than one digits number
			int i = j;
			double num = 0;
			while (j < s.length() && isdigit(s[j]))
				j--;
			j++;

			// a number exist between j and i
			for (int k = j; k <= i; k++)
			{
				num = num * 10 + (s[k] - '0');
			}
			st.push(num);
		}
		else
		{
			double op1 = st.top();
			st.pop();
			double op2 = st.top();
			st.pop();
			switch (s[j])
			{
			case '+':
				st.push(op1 + op2);
				break;
			case '-':
				st.push(op1 - op2);
				break;
			case '*':
				st.push(op1 * op2);
				break;
			case '/':
				st.push(op1 / op2);
				break;
			case '^':
				st.push(pow(op1, op2));
				break;
			}
		}
	}
	return st.top();
}
int main()
{

	// Prefix Evaluation
	string s;
	getline(cin, s);
	cout << infixToPrefix(s) << "\n";
	return 0;
}