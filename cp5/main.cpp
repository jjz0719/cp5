#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name; 
	string pwd; 
	while (1) {
		system("cls"); 
		cout << "�������˺ţ�"; 
		cin >> name; 
		cout << "���������룺"; 
		cin >> pwd;
		if (name == "54hk" && pwd == "123456") {
			break;
		} else {
		system("pause"); cout << "�û������������!" << endl;
		}
	}
	system("cls"); 
	cout << "1.��վ 404 ����" << endl; 
	cout << "2.��վ�۸Ĺ���" << endl; 
	cout << "3.��վ������¼" << endl; 
	cout << "4.DNS ����" << endl; 
	cout << "5.��������������" << endl; 
	system("pause");
	return 0;
}