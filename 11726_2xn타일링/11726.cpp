#include <iostream>
using namespace std;
#define MAX 1000

int main()
{
    int rec[MAX + 1];
    int n;
    cin >> n;

    rec[1] = 1;
    rec[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        rec[i] = (rec[i - 1] + rec[i - 2]) % 10007;
    }
    cout << rec[n] << "\n";

    return 0;
}