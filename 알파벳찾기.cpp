#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int c = 0;
	for (int i = 'a'; i <= 'z'; i++) {
		auto it = find(s.begin(), s.end(), i);
		if (it == s.end()) {//�Է¹����� �� �ּ��̹Ƿ� ���̴� 
			cout << -1 << ' ';
		}
		else {
			cout << (it - s.begin()) << ' ';
		}
	}


	return 0;
}