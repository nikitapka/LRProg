
#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

map<char, int> CreateMapOnWord(const string& word) {
	map<char, int> result;
	size_t length=word.length();
	for (size_t i = 0; i < length; i++)
	{
		result[word[i]]++;
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{	
		string FirstWord;
		string SecondWord;
		cin >> FirstWord >> SecondWord;
		map<char,int> FirstMap = CreateMapOnWord(FirstWord);
		map<char, int> SecondMap = CreateMapOnWord(SecondWord);
		if (FirstMap==SecondMap)
		{
			cout << "YES"<<endl;
		}
		else
		{
			cout << "NO"<<endl;
		}
	}

	return 0;
}
