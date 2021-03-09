#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main() {
	double a, sum = 0, count = 0;
	char ch;
	while (true) {
		if (kbhit()) {
			ch = getch();
			if (ch == (char) 27)
				break;
			cin >> a;
			sum += a;
			count++;
		}
	}
	cout << sum / count << endl;
}
