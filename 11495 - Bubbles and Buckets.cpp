//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int merge(int arr[], int s, int m, int e) {
	int a[e - s + 1], ii = 0, st = s, mi = m + 1, c = 0;

	while (st <= m && mi <= e) {
		if (arr[st] <= arr[mi]) {
			a[ii++] = arr[st++];
		} else {
			a[ii++] = arr[mi++];
			c += (m + 1 - st);
		}
	}
	while (st <= m)
		a[ii++] = arr[st++];
	while (mi <= e)
		a[ii++] = arr[mi++];
	for (int i = 0; i < ii; i++)
		arr[s++] = a[i];

	return c;
}

int mergesort(int arr[], int start, int end) {
	int curr = 0;
	if (start < end) {
		int mid = (start + end) / 2;
		curr = mergesort(arr, start, mid);
		curr += mergesort(arr, mid + 1, end);

		curr += merge(arr, start, mid, end);
	}
	return curr;
}

int main() {
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);

	while (1) {
		int n;
		cin >> n;
		if (!n)
			break;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (mergesort(arr, 0, n - 1) & 1)
			cout << "Marcelo\n";
		else
			cout << "Carlos\n";

	}

	return 0;

}

