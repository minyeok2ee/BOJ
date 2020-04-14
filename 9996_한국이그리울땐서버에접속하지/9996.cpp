#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    string patt, left, right;
    cin >> n >> patt;

    left = patt.substr(0, 0 + patt.find("*"));
    right = patt.substr(patt.find("*") + 1, patt.size());

    while (n--)
    {
        string s;
        cin >> s;
        bool check = false;

        if (patt.size() - 1 > s.size())
        {
            cout << "NE\n";
        }
        else
        {
            for (int i = 0; i < left.size(); i++)
            {
                if (left[i] != s[i])
                {
                    check = true;
                    break;
                }
            }
            if (!check)
            {
                for (int i = 0; i < right.size(); i++)
                {
                    if (right[i] != s[s.size() - right.size() + i])
                    {
                        check = true;
                        break;
                    }
                }
            }
            if (!check)
            {
                cout << "DA\n";
            }
            else
            {
                cout << "NE\n";
            }
        }
    }
    return 0;
}