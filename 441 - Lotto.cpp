//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main() {
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	int k;
	bool f=0;
	while (1) {
		cin >> k;
		if (!k)
			break;
		if(f)
			cout << endl;
		f=1;
		int arr[k];

		for (int i = 0; i < k; i++)
			cin >> arr[i];
		for (int i = 0; i < k; i++) {
			for (int j = i+1; j < k; j++) {
				for (int ii = j+1; ii < k; ii++) {
					for (int jj = ii+1; jj < k; jj++) {
						for (int iii = jj+1; iii < k; iii++) {
							for (int jjj = iii+1; jjj < k; jjj++) {
								cout << arr[i]<< " "<< arr[j] <<" ";
								cout  << arr[ii]<< " "<< arr[jj] <<" ";
								cout  << arr[iii]<< " "<< arr[jjj] <<"\n";
							}
						}

					}
				}

			}
		}
	}

	return 0;
}

