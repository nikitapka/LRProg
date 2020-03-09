#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

void NewBus(map<string,vector<string>> m) {
	string bus;
	int CounterStops;
	cin >> bus >> CounterStops;
	for  (int i = 0; i < CounterStops; i++)
	{
		string stop;
		cin >> stop;
		m[bus].push_back(stop);
	}
}

map<string, vector<string>> ReverseMap(const map<string, vector<string>>& source) {
	map<string, vector<string>> result;
	bool findresult;
	for (auto& firstElements : source) {
		for (auto& secondElements : firstElements.second) {
			findresult = false;
			for (auto& Telements : result[secondElements]) {
				if (Telements==firstElements.first) {
					findresult = true;
				}
			}
			if (!findresult)
			{
				result[secondElements].push_back(firstElements.first);
			}
		}
	}
	return result;
}

void PrintAllBusForStop(map<string, vector<string>> m) {
	string stop;
	cin >> stop;
	map<string, vector<string>> ReverseM = ReverseMap(m);
	if (ReverseM.count(stop)==0)
	{
		cout << "No stop" << endl;
	}
	else {
		
	}
}

//void PrintAllStopForBus(map<string, vector<string>> m) {
//
//}
//
//void PrintAllBus(map<string, vector<string>> m) {
//
//}

int main() {
	int n;
	cin >> n;
	map<string, vector<string>> MainMapBuses;
	string Operation;
	for (int i = 0; i < n; i++)
	{
		cin >> Operation;
		if (Operation=="NEW_BUS")
		{
			NewBus(MainMapBuses);
		}
		else if (Operation=="BUSES_FOR_STOP") {

		}

	}
	return 0;
}
