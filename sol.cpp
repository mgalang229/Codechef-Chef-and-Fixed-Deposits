#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}		
		sort(a.rbegin(), a.rend()); // sort the sequence in non-increasing order
		int sum = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (sum < x) { // calculate sum until it is greater than or equal to x or i == N - 1
				sum += a[i];
				cnt++;
			}
		}
		// check the calculated sum if it's greater than or equal to x
		cout << (sum >= x ? cnt : -1) << '\n';
	}
	return 0;
}
