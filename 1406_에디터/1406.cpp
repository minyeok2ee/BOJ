#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() 
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	stack<char> left, right;
	string init;
	int n;
	cin >> init >> n;

	int len = init.length();
	char* it = &init[0];
	char* it_end = &init[len];
	for (; it != it_end; it++)
	{
		left.push(*it);
	}

	while (n--)
	{
		char cmd;
		cin >> cmd;
		if (cmd == 'L')
		{
			if (!left.empty())
			{
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D')
		{
			if (!right.empty())
			{
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B')
		{
			if (!left.empty())
			{
				left.pop();
			}
		}
		else
		{
			char c;
			cin >> c;
			left.push(c);
		}
	}
	string result;
	while (!left.empty())
	{
		result += left.top();
		left.pop();
	}
	reverse(result.begin(), result.end());

	cout << result;

	while (!right.empty())
	{
		cout << right.top();
		right.pop();
	}
	cout << "\n";

	return 0;
}