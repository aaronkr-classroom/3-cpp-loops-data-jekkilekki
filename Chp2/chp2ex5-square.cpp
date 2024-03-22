// chp2ex5-triangle.cpp
#include <iostream>

// 표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "What size square? ";

	int size;
	cin >> size; // 10

	// 행 출력하기
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {
			cout << "*";
		} 

		cout << endl;
	}

	return 0;
} // main 끝