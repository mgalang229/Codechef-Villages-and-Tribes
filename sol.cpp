#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	string s;
	cin >> s;
	char lt='C';
	int a=0, b=0, dots=0;
	for(char c : s) {
		if(c=='.')
			dots++;
		else {
			if(c=='A')
				a++;
			else if(c=='B')
				b++;
			if(c==lt) {
				if(c=='A')
					a+=dots;
				else if(c=='B')
					b+=dots;
			}
			dots=0;
			lt=c;
		}
	}
	cout << a << " " << b << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
