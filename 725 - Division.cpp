//============================================================================
// Author      : Ahmed Ehab
//============================================================================

#include <bits/stdc++.h>

using namespace std;

bool valid(int n, int m) {
	set<int> st, st2, st3;
	if (n > 99999 || n < 1000 || m > 99999 || m < 1000)
		return false;
	if (n < 10000 || m < 10000)
		st3.insert(0);
	while (n) {
		st.insert(n % 10);
		st3.insert(n % 10);
		n = n / 10;
	}
	while (m) {
		st2.insert(m % 10);
		st3.insert(m % 10);
		m = m / 10;
	}
	if (st3.size() == 10
			&& ((st.size() == 4 && st2.size() == 5)
					|| (st.size() == 5 && st2.size() == 4)
					|| (st.size() == 5 && st2.size() == 5)))
		return true;
	else
		return false;
}
int main() {
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	int n;
	bool f = 0;
	cin >> n;
	while (n) {
		if (f)
			cout << "\n";
		f = 1;
		bool fg = 1;
		//cout << valid(13485,2*13485);
		for (int i = 1234; i <= 98765; i++) {
			if (valid(i, n * i)) {
				if (i * n < 10000)
					cout << "0";
				cout << i * n << " / ";
				if (i < 10000)
					cout << "0";
				cout << i << " = " << n << "\n";
				fg = 0;
			}
		}
		if (fg)
			cout << "There are no solutions for " << n << "." << endl;
		cin >> n;
	}

	return 0;
}

