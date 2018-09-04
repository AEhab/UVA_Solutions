//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main() {
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	while (1) {
		long long n;
		scanf("%lld", &n);
		vector<long long> vec(n);
		if (!n)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%lld", &vec[i]);
		}
		sort(vec.begin(), vec.end());
		for (int i = 0; i < n; i++) {
			if (i != 0)
				printf(" ");
			printf("%lld", vec[i]);
		}
		printf("\n");
	}
	return 0;

}

