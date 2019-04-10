#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	stack<int> s;
	int n;
	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (cmd == "pop") {
			cout << (s.empty() ? -1 : s.top()) << endl;
			if (!s.empty())
				s.pop();
		}
		else if (cmd == "top"){
			cout << (s.empty() ? -1 : s.top()) << endl;

		}
		else if (cmd=="size") {
			cout << s.size() << endl;
		}
		else if (cmd == "empty") {
			cout << s.empty() << endl;
		}
		
	}



	return 0;
}
