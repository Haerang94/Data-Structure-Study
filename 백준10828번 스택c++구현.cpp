#include <iostream>
#include<string>
using namespace std;

typedef struct Stack{
	int data[10000];
	int size;
	Stack() {
		size = 0;
	}
	bool empty() {
		return (size == 0);
	}
	void push(int item){
		data[++size] = item;
	}
	void pop() {
		if (empty())cout << -1 << endl;
		else {
			cout << data[size] << endl;
			size--;
		}
	}


	void top() {
		if (empty())cout << -1 << endl;
		cout << data[size] << endl;
	}


}Stack;

int main() {
	int n;
	string cmd;
	Stack s;
	cin >> n;
	while (n--) {
		cin >> cmd;
		if (cmd == "push") {
			int n;
			cin >> n;
			s.push(n);
		}
		else if (cmd == "pop") {
			s.pop();
		}
		else if (cmd == "top") {
			s.top();
		}
		else if (cmd == "size") {
			cout << s.size << endl;
		}
		else if (cmd == "empty") {
			cout << s.empty() << endl;
		}
	}

}
