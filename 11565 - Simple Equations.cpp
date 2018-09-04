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
		int a, b, c;
		cin >> a >> b >> c;
		bool f = 1;
		for (long long x= 1; x <= 10000; x++) {
			long long int ii,i,z,y;
			double jj;
			if((a-x)*(a-x) >= 4.0*b/x){
				ii = a-x;
				jj = sqrt((a-x)*(a-x)-(4.0*b/x));
				i = jj;
				if(i==jj&&(ii+i)%2 == 0)
				{
					z = (ii-i)/2;
					y = a-x-z;
					if(x!=y && y!= z&& x!= z && x+y+z == a && x*y*z == b && x*x+y*y+z*z == c)
					{
						vector<long long int> vec {x,y,z};
						sort(vec.begin(),vec.end());
						cout << vec[0] << " " << vec[1] << " " << vec[2]<<endl;

						f=0;
						break;
					}
				}
			}
		}
		if (f)
			cout << "No solution.\n";
	}

	return 0;
}

