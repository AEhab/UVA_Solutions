//============================================================================
// Author      : Ahmed Ehab
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int c=0,m;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				arr[i] >arr[j] ? c++ : m= c ;
		cout << "Optimal train swapping takes "<<c<<" swaps.\n";
	}
	
	return 0;

}

