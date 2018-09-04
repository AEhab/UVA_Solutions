//============================================================================
// Author      : Red_Phoenix
//============================================================================

// first solution
#include <bits/stdc++.h>

using namespace std;
int arr[50];
deque <int> now, best;
int be, n, l;

void summe(int i, int s) {

	if (s > 0 && s <= n && s >= be) {

		if (s == be && now.size() < best.size()) {

		} else
			best = now;
		be = s;
	}
	if (i >= l)
		return ;

	now.push_back(arr[i]);
	summe(i + 1, s + arr[i]);
	now.pop_back();
	summe(i + 1, s);

}
int main() {
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);

	while (scanf("%d", &n) != EOF) {

		cin >> l;
		be = 0;
		for (int i = 0; i < l; i++)
			cin >> arr[i];
        summe(0,0);
		while (!best.empty()) {
			cout << best.front() << " ";
			best.pop_front();
		}
		cout << "sum:"<< be<<"\n";
	}
	return 0;
}

// Bit mask solution
//int main() {
//	//freopen("in", "r", stdin);
//	//freopen("out", "w", stdout);
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		int l;
//		cin >> l;
//		int arr[l];
//		for (int i = 0; i < l; i++) {
//			cin >> arr[i];
//		}
//		long long c = 0, ans = 0;
//		for (long long i = 1; i < (1 << l); i++) {
//			long long ii = i, j = 0, s = 0;
//			while (ii) {
//				if (ii & 1)
//					s += arr[j];
//				j++;
//				ii >>= 1;
//			}
//			if (s <= n && s>=c) {
//				if(s == c && __builtin_popcount(i) < __builtin_popcount(ans))
//					continue;
//
//				c = max(c, s);
//				ans = i;
//			}
//		}
//		for(int j = 0 ; j < l ;j++){
//			if(ans&1)
//				cout << arr[j]<< " ";
//			ans >>=1;
//		}
//		cout << "sum:"<<c << endl;
//	}
//	return 0;
//}

