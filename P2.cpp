/**
*이름 : 박채민
*학번 : 221124105
*프로그램 제목 : 221124105 2주차 과제 프로그램 2
*최초 작성일 : 2022-03-20
**/
#include<iostream>
using namespace std;
int main() {
	int num;
	int cnt = 0;
	int result[8]={};
	cout << "정수를 입력하세요: ";
	cin >> num;
	for (int i = 0; i < 8; i++) {
		if (num != 0) {
			result[i] = num % 2;
			num /= 2;
		}
	}
	cout << "이진수는: ";
	for (int j = 7; j >= 0; j--) {
		cout << result[j];
	}
	cout << endl;
}