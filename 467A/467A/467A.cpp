// 467A.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int rooms, available = 0;
	cin >> rooms;
	int live, max;
	for (int i = 0; i < rooms; i++) {
		cin >> live >> max;
		if ((max - live) >= 2) available++;
	}
	cout << available;
    return 0;
}

