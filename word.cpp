#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	string s = "";
	int up = 0,low=0;
	cin >> s;
 
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >='A' && s[i] <='Z') {
			up++;
		}
		else{
			low++;
		}
	}
 
	if (up > low) {
		for (int i = 0; i < s.length();++i)
		{
			s[i] = toupper(s[i]);
 
		}
		
	}
	else{
		for (int i = 0; i < s.length(); ++i)
		{
			s[i] = tolower(s[i]);
 
		}
		
	}
 
	cout << s;
 
	return 0;
}