#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int *arr, int n) {
	for (int i = 0; i < n - 1; ++i) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]), swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	bubble_sort(arr, n);

	for (int i = 0; i < n; ++i)
		cout << arr[i] << ' ';
}