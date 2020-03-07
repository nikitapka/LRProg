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

void RefreshMounth(vector<string>& v, const int& CurrentMounth) {
	vector<int> Mounths = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int NumberDays = Mounths[CurrentMounth];
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
		//	v[v.size - 2] += " ";
			v[v.size() - 2] += v[v.size() - 1];
			v.pop_back();
		}
	//}
}

void ChangeMounth(vector<string>& v, int& CurrentMounth) {
	NextMounth(CurrentMounth);
	RefreshMounth(v, CurrentMounth);
}

void AddRecord(vector<string>& v, int NumberDay) {
	string Record;
	cin << Record;
	v[NumberDay - 1] += (Record + " ");
}

int main() {
	int NumberOperations;
	cin >> NumberOperations >> endl;
	string Operation;
	int CurrentMounth = 0;
	int NumberDay;
	vector<string> Mounth();
	RefreshMounth(Mounth, CurrentMounth);
	for  (int i=0;  i< NumberOperations; i++)
	{
		cin >> Operation;
		if (Operation="ADD")
		{
			cin >> NumberDay;
			AddRecord(Mounth, NumberDay);
		} 
		else if (Operation = "NEXT") {
			ChangeMounth(Mounth, CurrentMounth);
		}
		else if (Operation = "DUMP")
		{
			cout
		}


	}
	return 0;
}
