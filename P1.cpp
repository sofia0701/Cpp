/**
*�̸� : ��ä��
*�й� : 221124105
*���α׷� ���� : 221124105 2���� ���� ���α׷� 1
*���� �ۼ��� : 2022-03-20
**/
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "������ �Է��ϼ���: ";
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