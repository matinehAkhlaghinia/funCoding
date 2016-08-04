#include <iostream>
#include <string>
#include <stack>

using namespace std;


bool isReverseOf(string str1, string str2) {
	if(str1.length() != str2.length()) return false;

	stack<char> myStack;
	for(int i = 0; i < str2.length(); i++) {
		myStack.push(str2.at(i));
	}

	for(int i = 0; !myStack.empty(); i++) {
		if(str1[i] != myStack.top()) return false;
		else {
			myStack.pop();
		}
	}
	return true;
}

bool isUniqueChars(string str) {
	if(str.length() > 128) return false;

	bool * char_set = new bool [128];
	for(int i = 0; i < str.length(); i++) {	
		int val = str.at(i);
		if(char_set[val]) {
			return false;
		}
		char_set[val] = true;
	}
	return true;
}
int main()
{
	if(isReverseOf("matin","nitam"))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	

}