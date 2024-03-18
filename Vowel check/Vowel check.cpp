#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char vowel;

	cout << "Enter a character: ";
	cin >> vowel;
	if (isalpha(vowel)) {
		if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' ||
			vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U') {
			cout << vowel << " is a vowel." << endl;
		}
		else {
			cout << vowel << " is a consonant." << endl;
		}
	}
	else {
		cout << "Invalid input. Please enter an alphabet." << endl;
	}

	return 0;
}
