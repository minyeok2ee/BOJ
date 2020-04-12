#include <iostream> 
using namespace std;
#define MAX 10000

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	int arr[MAX + 1]{ 0, };
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}

	for (int i = 1; i <= MAX; i++) {
		while (arr[i] != 0) {
			cout << i << "\n";
			arr[i] -= 1;
		}
	}

	return 0;
}