

#include <iostream>
#include <string>
using namespace std;

const char keypad[][10] = {
	" ","abc", "def",
	"ghi", "jkl", "mno",
	"pqrs", "tuvw", "xyz"
};

//helper method
int myPossibleCodes(char str[], int be, char code[], int i) {
static int count = 0;
	if (str[be] == '\0') {
		code[i] = '\0';
		
		cout << code <<" ";
		return count;
	}
	int idx = str[be] - '0';
	const char* keypadCode = keypad[idx];
	// const char& keypadCode = keypad[idx];

	//for every char in keypad code, I have to do something
	for (int k = 0; keypadCode[k] != '\0'; ++k) {
		code[i] = keypadCode[k];
		myPossibleCodes(str, be + 1, code, i + 1);
		count++;
	}

}


int possibleCodes(char str[]) {
	char code[10] = {} ;
	return myPossibleCodes(str, 0, code, 0);
}


int main() {
	char inp[10];
	cin >> inp;

	int ans = possibleCodes(inp);
	cout<<ans;
}