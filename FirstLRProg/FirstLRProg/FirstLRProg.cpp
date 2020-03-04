#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> DEX;
	while (N>=1)
	{	
		DEX.push_back(N % 2);
		N /= 2;
	}
	size_t i=DEX.size();

	for (i; i >= 1; --i)
		{
			cout << DEX[i-1];
		}	
	return 0;
}