#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	
	vector<int> arr(n + 1);
	stack<int> st;
	vector<int> nge(n + 1, -1);

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		while (!st.empty() && arr[st.top()] < arr[i])
		{
			nge[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);
	}

	for (int i = 1; i <= n; i++)
	{
		cout << nge[i] << ' ';
	}
	cout << '\n';
}