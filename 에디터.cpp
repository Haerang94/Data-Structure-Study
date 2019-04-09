#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main() {
	stack<char> left,right;
	string a;
	cin >> a;

	for (int i = 0; i < a.size(); i++)
		left.push(a[i]);


	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char x;
		char cmd;
		cin >> cmd;
		if (cmd == 'P') {
			cin >> x;
			left.push(x);
		}
		else if (cmd == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B') {
			if(!left.empty())
			left.pop();
		}



	}

	while(!left.empty()) {//pop되면서 left.size()는 점점 줄어들기 때문에 size함수는 사용불가
		right.push(left.top());
		left.pop();
	}

	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	

	return 0;
}