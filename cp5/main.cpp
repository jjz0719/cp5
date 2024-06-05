#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name; 
	string pwd; 
	while (1) {
		system("cls"); 
		cout << "ÇëÊäÈëÕËºÅ£º"; 
		cin >> name; 
		cout << "ÇëÊäÈëÃÜÂë£º"; 
		cin >> pwd;
		if (name == "54hk" && pwd == "123456") {
			break;
		} else {
		system("pause"); cout << "ÓÃ»§Ãû»òÃÜÂë´íÎó!" << endl;
		}
	}
	system("cls"); 
	cout << "1.ÍøÕ¾ 404 ¹¥»÷" << endl; 
	cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl; 
	cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl; 
	cout << "4.DNS ¹¥»÷" << endl; 
	cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << endl; 
	system("pause");
	return 0;
}