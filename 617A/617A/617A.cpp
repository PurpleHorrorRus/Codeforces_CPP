#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int position;
	cin >> position;
	if (position % 5 == 0) {
		cout << position / 5;
	}
	else { cout << (position / 5) + 1; }
	return 0;
}
