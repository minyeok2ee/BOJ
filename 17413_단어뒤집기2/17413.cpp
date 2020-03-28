#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{
	bool tag = false;
	stack<char> word;
	string s;
	getline(cin, s);

	int sLen = s.length();
	for (int i = 0; i < sLen; i++)
	{
		if (s[i] == '<')
		{
			while (!word.empty())
			{
				cout << word.top();
				word.pop();
			}
			cout << s[i];
			tag = true;
		}
		else if(s[i] == '>')
		{
			
			cout << s[i];
			tag = false;
			if (i == sLen - 1)
			{
				cout << '\n';
			}
		}
		else
		{
			if (tag) {
				cout << s[i];
			}
			else
			{
				if (s[i] == ' ' || i == sLen - 1)
				{
					if (i == sLen - 1)
					{
						cout << s[i];
					}
					while (!word.empty())
					{
						cout << word.top();
						word.pop();
					}
					if (i == sLen - 1)
					{
						cout << '\n';
					}
					else
					{
						cout << ' ';
					}
				}
				else
				{
					word.push(s[i]);
				}
			}
		}
	}
	return 0;
}