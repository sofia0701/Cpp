/**
*이름 : 박채민
*학번 : 221124105
*프로그램 제목 : 221124105 2주차 과제 프로그램 1
*최초 작성일 : 2022-03-20
**/
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "정수를 입력하세요: ";
	cin >> num;
	for (int i = 0; i < 5; i++) {
		for (int j = num; j >= i; j--) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "" << endl;
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << " ";
		}
		for (int j = num; j >= i; j--) {
			cout << "*";
		}
		for (int j = num; j > i; j--) {
			cout << "*";
		}
		cout << "" << endl;
	}
}