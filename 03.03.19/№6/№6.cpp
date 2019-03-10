#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Brackets(char opening, char closing)
{
	if (opening == '(' && closing == ')') return true;
	else if (opening == '[' && closing == ']') return true;
	else if (opening == '{' && closing == '}') return true;
	return false;
}

bool F(string b)
{
	stack <char> A;
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == '(' || b[i] == '{' || b[i] == '[')
			A.push(b[i]);
		else if (b[i] == ')' || b[i] == '}' || b[i] == ']')
		{
			if (A.empty() || !Brackets(A.top(), b[i]))
				return false;
			else
				A.pop();
		};
	};
	return A.empty();
}

int main()
{
	string gumanitary;
	cin >> gumanitary;
	if (F(gumanitary)) {cout << "It's OK" << endl;}
	else {cout << "Well, there is mistake" << endl;};
	return 0;
}
