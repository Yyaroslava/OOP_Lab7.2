#include<iostream>
#include<list>

using namespace std;

void del_after(list<int>& a, int value) {
	bool del_next = false;
	for (list<int>::iterator iter = a.begin(); iter != a.end();) {
		int current_value = *iter;
		if (del_next) {
			iter = a.erase(iter);
		}
		else {
			iter++;
		}
		del_next = (current_value == value);
	}
}

int main() {
	list<int> a = { 7, 10, 1, 10, 8, 45, 10, 10, 10, 27, 3 };
	cout << "list a = { ";
	for (int elem : a) {
		cout << elem << " ";
	}
	cout << "};\n";
	del_after(a, 10);
	cout << "modified list a = { ";
	for (int elem : a) {
		cout << elem << " ";
	}
	cout << "};\n";
	return 0;
}

