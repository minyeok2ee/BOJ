#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, s;
    int gcd_tmp = -1;
    cin >> n >> s;
    while (n--)
    {
        int a;
        cin >> a;
        int distance = (s > a) ? (s - a) : (a - s);
        if (gcd_tmp != -1)
        {
            gcd_tmp = gcd(gcd_tmp, distance);
        }
        else
        {
            gcd_tmp = distance;
        }
    }
    cout << gcd_tmp << '\n';

    return 0;
}