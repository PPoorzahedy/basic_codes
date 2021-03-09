#include <bits/stdc++.h>
using namespace std;

const int maxAns = 1000;
int res[maxAns];

void primeFactor(int a) {
	int x = 2, i = 0;
	while (a != 1) {
		if (a % x == 0) {
			res[i] = x;
			a /= x;
			i++;
		}
		else
			x++;
	}
}

void print() {
	for (int i = 0; res[i]; i++)
		cout << res[i] << '\t';
}

int main() {
	int a;
	cin >> a;
	primeFactor(a);
	print();
}
