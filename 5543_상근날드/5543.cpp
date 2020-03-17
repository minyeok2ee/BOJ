#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    int min(10000);
    for(int i=0; i<3; i++)
    {
        for(int j=3; j<5; j++)
        {
            if(min > arr[i]+arr[j])
            {
                min = arr[i] + arr[j];
            }
        }
    }

    cout << min - 50 << '\n';

    return 0;
}