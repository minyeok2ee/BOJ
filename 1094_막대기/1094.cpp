#include <iostream>
using namespace std;

int main()
{
    int x;
    int stick = 64;
    int cnt = 0;
    cin >> x;

    while (x != 0)
    {
        if(stick <= x)
        {
            cnt++;
            x -= stick;
        }
        stick /= 2;
    }
    cout << cnt << '\n';

    return 0;
}