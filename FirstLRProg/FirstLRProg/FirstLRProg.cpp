#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

void NewBus(map<string,vector<string>>& m) {
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

void PrintMap(const map<string,vector<string>>& m){
    for (auto& Felement : m ){
        for(auto& Selement: Felement.second){
            cout<< Felement.first<<" : "<< Selement<<endl;
        }
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

void PrintAllBusForStop(const map<string, vector<string>>& m) {
	string stop;
	cin >> stop;
	map<string, vector<string>> ReverseM = ReverseMap(m);
	if (ReverseM.count(stop)==0)
	{
		cout << "No stop" << endl;
	}
	else {
	    cout<< ReverseM[stop].size();
	    for (auto& elements:ReverseM[stop]){
	        cout<<" "<< elements;
	    }
		
	}
}



void PrintAllStopForBus(const map<string, vector<string>>& m) {
    string bus;
    cin>> bus;
 	map<string, vector<string>> ReverseM = ReverseMap(m);
    if (m.count(bus)==0) {
        cout<< "No bus"<< endl;
    } else {
        for (const auto& Stop: m[bus]){
           if (ReverseM[Stop].size()==1 && ReverseM[Stop][0]==bus){
               cout<< "Stop "<< Stop <<": no interchange"<<endl; 
           } else {
               cout<< "Stop "<< Stop<<":"; 
               for (auto& buses:ReverseM[Stop]){
                   if(buses!=bus){
                       cout<<" "<< buses;
                   }
               }
               cout<<endl;
           }
        }
    }
}

// IN PROGRESS
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
            PrintAllBusForStop(MainMapBuses);
		} else if (Operation=="STOPS_FOR_BUS") {
		    
		}

	}
	return 0;
}
