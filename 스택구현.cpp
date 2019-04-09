#include <iostream>
#include <string>
#include <stack>
using namespace std;
// ������ �迭�� �����ϵ� ����ü ��ü �ȿ�
//�Լ��� ��� �����ؼ� ���� ����̴� 

struct Stack {
	int data[10000];
	int size;
	Stack() {
		size = 0;
	}
	void push(int item) {
		data[size++] = item;
	}
	bool empty() {
		if (size == 0)return true;
		else return false;
	}
	int pop() {
		if (empty())return -1;
		else return data[--size];
	}

	int top() {
		if (empty())return -1;
		else return data[size-1];//size-1���� 
	}


};


int main() {
	int n;
	cin >> n;
	Stack s;
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "top") {
			cout << s.top() << endl;
		}
		else if (cmd == "empty") {
			cout << s.empty() << endl;
		}
		else if (cmd == "pop") {
			cout << s.pop() << endl;
		}
		else if (cmd == "size") {
			cout << s.size << endl;
		}


	}



	return 0;
}