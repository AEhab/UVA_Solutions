//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

int main() {
	//freopen("in.in", "r", stdin);
	//freopen("out.out", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
	  int n;
	  cin >> n;
	  int vec[n],c=0;
	  for(int i=0;i<n;i++)
		  cin >> vec[i];

	  for (int i=1;i<n;i++){
		  for(int j=0;j<i;j++)
		  {
			 if(vec[j]<=vec[i])
				c++;
		  }
	  }

	  cout <<c<< "\n";

	}
	return 0;
}

