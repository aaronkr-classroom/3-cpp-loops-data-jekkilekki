// chp2ex5-triangle.cpp
#include <iostream>

// ǥ�� ���̺귯������ �����ͼ� ����� �̸��� ���
using std::cin;		
using std::cout;	
using std::endl;

int main() {
	cout << "What size triangle? ";

	int size;
	cin >> size; // 10

	// �� ����ϱ�
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
} // main ��