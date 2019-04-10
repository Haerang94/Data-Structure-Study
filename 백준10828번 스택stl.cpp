#include <iostream>
#include <string>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> s;
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int k;
			cin >> k;
			s.push(k);
		}
		else if (cmd == "pop") {
			if (s.empty())cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}

		}
		else if (cmd == "size") {
			cout << s.size() << endl;
		}
		else if (cmd == "empty") {
			cout << s.empty() << endl;
		}
		else if (cmd == "top") {
			if (s.empty())cout << -1 << endl;
			else cout << s.top() << endl;
		}


	}


	return 0;
}
