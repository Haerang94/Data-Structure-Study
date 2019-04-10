#include <iostream>
#include <stack>
#include <string>
using namespace std;


void test(string in) {
	int c = 0;
	for (int i = 0; i < in.size(); i++) {
		if (in[i] == '(') {
			c++;
		}
		else {
			if (c < 0)cout << "NO" << endl;
			c--;
		}
	}
	if (c != 0)cout << "NO" << endl;
	else cout << "YES" << endl;

}

int main() {
	int t;	
	cin >> t;
	while (t--) {
		string input;
		cin >> input;
		test(input);

	}





	return 0;
}
