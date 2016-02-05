#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int count, available = 0;
	cin >> count;
	int P, V, T;
	for (int i = 0; i < count; i++) {
		cin >> P >> V >> T;
		if ((P + V + T) >= 2) available++;
	}
	cout << available;
    return 0;
}