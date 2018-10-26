#include<iostream>
#include<string>

using namespace std;

int main() {
	int length;

	cin >> length;

	string answer;
	answer.reserve(length);

	cin >> answer;
	int level = 0;
	int valleys = 0;

	for (int i = 0; i < answer.size(); ++i) {

		if (level == 0 && answer[i] == 'D') {
			valleys++;
		}

		switch (answer[i]) {
		case 'D':
			level--;
			break;

		case 'U':
			level++;
			break;
		}
	}
	cout << valleys;

	return 0;
}