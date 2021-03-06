#include <iostream>
using namespace std;

struct Stack {
	int size;
	int data[10000];
	Stack() {
		size = 0;
	}

	void push(int x) {
		data[size++] = x;
	}
	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return data[size - 1];
		}
	}
	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			return data[--size];
		}
	}
};

int main() {
	int n;
	cin >> n;
	Stack s;

	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (str == "top") {
			cout << s.top() << '\n';
		}
		else if (str == "size") {
			cout << s.size << '\n';
		}
		else if (str == "empty") {
			cout << (s.empty() ? 1 : 0) << '\n';
		}
		else if (str == "pop") {
			cout << s.pop() << '\n';
		}
		else {
			return -1;
		}
	}
	return 0;
}
