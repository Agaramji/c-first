// ch3c++chamzoza.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int change_val(int* p) {
	*p = 3;

	return 0;

}
int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
	std::cout << number << std::endl;

	int a = 3;
	int& another_a = a;

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	return 0;

}
