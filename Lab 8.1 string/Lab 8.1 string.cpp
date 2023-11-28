#include <iostream>
#include <string>
using namespace std;
int Count(const std::string s)
{
	const char charsToCount[] = { '+', '-', '=' };

	int k = 0;
	for (char c : charsToCount) {
		size_t pos = 0;
		while ((pos = s.find(c, pos)) != -1) {
			pos++;
			k++;
		}
	}

	return k;
}string Change(string& s)
{
	const char charsToReplace[] = { '+', '-', '=' };

	for (char c : charsToReplace) {
		size_t pos = 0;
		while ((pos = s.find(c, pos)) != -1)
		{
			s.replace(pos, 1, "**");
			pos += 2;
		}
	}

	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Number of char - or + or =:    " << Count(str) << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}