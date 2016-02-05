#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	string code;
	cin >> code;
	if (code.find("H") != -1 || code.find("Q") != -1
		|| code.find("9") != -1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}