/**
*�̸� : ��ä��
*�й� : 221124105
*���α׷� ���� : 221124105 2���� ���� ���α׷� 2
*���� �ۼ��� : 2022-03-20
**/
#include<iostream>
using namespace std;
int main() {
	int num;
	int cnt = 0;
	int result[8]={};
	cout << "������ �Է��ϼ���: ";
	cin >> num;
	for (int i = 0; i < 8; i++) {
		if (num != 0) {
			result[i] = num % 2;
			num /= 2;
		}
	}
	cout << "��������: ";
	for (int j = 7; j >= 0; j--) {
		cout << result[j];
	}
	cout << endl;
}