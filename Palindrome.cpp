#include <iostream>
using namespace std;
int main () 
{
	string S;
	cin >> S;
	int i = 0, j = S.size() - 1;
	while (i < j) {
		if (S[i] != S[j])
			break;
		++i, --j;
	}
	cout<<(j - i > 1 ? "Not palindrome"	: "Palindrome\n");
	return 0;
}
