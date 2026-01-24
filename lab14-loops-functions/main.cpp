#include <iostream>
#include <string>
using namespace std;

string getString(string prompt) {
	string text;

	cout << prompt << endl;
	getline(cin, text);

	while (text == "") {
		cout << "Error, empty string received." << endl;
		cout << endl;
		cout << prompt << endl;
		getline(cin, text);
	}

	return text;


}

bool isCommaOrSpace(char c) {
	if (c == ',' || c == ' ')
		return true;
	else
		return false;
}

int main() {
	string line;
	unsigned int count = 0;
	unsigned int i = 0;


	line = getString("Please enter a line of text.");

	while (line[i] != '\0') {
		if (isCommaOrSpace(line[i])) {
			count++;
		}
		i++;
	}

	cout << "The entered text contains " << count
	     << " commas and space characters." << endl;

	return 0;


}
