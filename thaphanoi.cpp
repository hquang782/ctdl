#include<bits/stdc++.h>
using namespace std;

void backtrack(int n, char a, char b, char c) {
	if (n == 0) return;
	backtrack(n - 1, a, c, b);
	cout << a << " -> " << b << endl;
	backtrack(n - 1, c, b, a);
}
int main() {
	int n; cin >> n;
	backtrack(n, 'A', 'C', 'B');
}
