//============================================================================
// Author      : Red_Phoenix
//============================================================================

#include <bits/stdc++.h>

using namespace std;

map<string, int> mp;

void fillme() {
	int j = 1;
	for (char a = 'a'; a <= 'z'; a++) {
		string str = " ";
		str[0] = a;
		mp[str] = j;
		j++;
	}
	for (char a = 'a'; a <= 'z'; a++) {
		string str = " ";
		str[0] = a;
		for (char b = a + 1; b <= 'z'; b++) {
			str += b;
			mp[str] = j;
			j++;
			str.resize(str.size() - 1);
		}
	}
	for (char a = 'a'; a <= 'z'; a++) {
		string str = " ";
		str[0] = a;
		for (char b = a + 1; b <= 'z'; b++) {
			str += b;
			for (char c = b + 1; c <= 'z'; c++) {
				str += c;
				mp[str] = j;
				j++;
				str.resize(str.size() - 1);
			}
			str.resize(str.size() - 1);
		}
	}
	for (char a = 'a'; a <= 'z'; a++) {
		string str = " ";
		str[0] = a;
		for (char b = a + 1; b <= 'z'; b++) {
			str += b;
			for (char c = b + 1; c <= 'z'; c++) {
				str += c;
				for (char d = c + 1; d <= 'z'; d++) {
					str += d;
					mp[str] = j;
					j++;
					str.resize(str.size() - 1);
				}
				str.resize(str.size() - 1);
			}
			str.resize(str.size() - 1);
		}
	}

	for (char a = 'a'; a <= 'z'; a++) {
		string str = " ";
		str[0] = a;
		for (char b = a + 1; b <= 'z'; b++) {
			str += b;
			for (char c = b + 1; c <= 'z'; c++) {
				str += c;
				for (char d = c + 1; d <= 'z'; d++) {
					str += d;
					for (char e = d + 1; e <= 'z'; e++) {
						str += e;
						mp[str] = j;
						j++;
						str.resize(str.size() - 1);
					}
					str.resize(str.size() - 1);
				}
				str.resize(str.size() - 1);
			}
			str.resize(str.size() - 1);
		}

	}

}

int main() {

fillme();
	string line;
	while( getline(cin,line) ){
		if(mp.find(line)==mp.end())
			cout << "0\n";
		else
			cout << mp[line]<<endl;
	}
	
	return 0;
}
