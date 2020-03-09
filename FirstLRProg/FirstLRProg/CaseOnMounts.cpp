#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;


void NextMounth(int& CurrentMounth) {
	if (CurrentMounth < 11) {
		CurrentMounth++;
	}
	else
	{
		CurrentMounth = 0;
	}
}

void RefreshMounth(vector<vector<string>>& v, const int& CurrentMounth) {
	vector<size_t> Mounths = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	size_t NumberDays = Mounths[CurrentMounth];
	//if (v.empty())
	//{
	//	v.resize(NumberDays);
	//}
	/*else
	{*/
		while (v.size() < NumberDays)
		{
			v.resize(NumberDays);
		}

		while (v.size() > NumberDays)
		{
			v[v.size() - 2].insert(end(v[v.size() - 2]),begin(v[v.size() - 1]),end(v[v.size() - 1]));
			v.pop_back();
		}
	//}
}

void ChangeMounth(vector<vector<string>>& v, int& CurrentMounth) {
	NextMounth(CurrentMounth);
	RefreshMounth(v, CurrentMounth);
}

void AddRecord(vector<vector<string>>& v, int NumberDay) {
	string Record;
	cin >> Record;
	v[NumberDay - 1].push_back(Record);
}

int main() {
	int NumberOperations;
	cin >> NumberOperations;
	string Operation;
	int CurrentMounth = 0;
	int NumberDay;
	vector<vector<string>> Mounth;
	RefreshMounth(Mounth, CurrentMounth);
	for  (int i=0;  i< NumberOperations; i++)
	{
		cin >> Operation;
		if (Operation=="ADD")
		{
			cin >> NumberDay;
			AddRecord(Mounth, NumberDay);
		} 
		else if (Operation == "NEXT") {
			ChangeMounth(Mounth, CurrentMounth);
		}
		else if (Operation == "DUMP")
		{
			cin >> NumberDay;
			cout << Mounth[NumberDay - 1].size() << " ";
			for (auto element:Mounth[NumberDay-1])
			{
				cout << element << " ";
			}
			cout << endl;
		}


	}
	return 0;
}
