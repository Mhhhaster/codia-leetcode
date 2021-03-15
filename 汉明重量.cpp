#include<string>
#include<iostream>
using namespace std;
int main()
{
	string input;
	cin >> input;
	int count = 0;
	for (int i = input.length() - 1; i >= 0; i--)
		if (input[i] == '1')
			count++;
	cout << count;
}