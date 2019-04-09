#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	stack<int> c;
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			c.push(i);
		}
		else {
			if (c.top()+1==i) {
				c.pop();// 먼저 삭제해야 남은 것들의 개수 구한다
				cnt += c.size();
			}
			else {
				c.pop();
				cnt += 1;
				
			}
		}
	}

	cout << cnt << endl;

	return 0;
}