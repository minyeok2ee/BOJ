#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> v;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		string tmp;
		for (int j = i; j < s.length(); j++)
		{
			tmp += s[j];
		}
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}