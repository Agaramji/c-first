// mainc++.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int main() {

	int user_input;
	cout << "내정보" << endl;
	cout << "1.이름" << endl;
	cout << "2.나이" << endl;
	cout << "3.성별" << endl;
	cin >> user_input;

	switch (user_input) {

	case 1:
		cout << "이지환" << endl;
		break;

	case 2:
		cout << "26" << endl;
		break;

	case 3:
		cout << "남" << endl;
		break;

	default:
		cout << "끝" << endl;
		break;

	}

	return 0;
	
	
}

