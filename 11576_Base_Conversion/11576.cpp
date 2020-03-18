#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    int a_num, b_num, m;
    cin >> a_num >> b_num >> m;

    int dec(0);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        if (m == 1 && n == 0)
        {
            cout << "0\n";
            return 0;
        }
        dec += (n * (int)pow(a_num, m - i - 1));
    }

    stack<int> result;
    while (dec != 0)
    {
        result.push(dec % b_num);
        dec /= b_num;
    }

    while (!result.empty())
    {
        cout << result.top() << ' ';
        result.pop();
    }
    cout << '\n';

    return 0;
}