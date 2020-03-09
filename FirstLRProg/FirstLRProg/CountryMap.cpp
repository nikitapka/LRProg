
#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;
int status = 0;

void ChangeCapitalCountry(map<string,string>& m){
	string country;
	string capital;
	cin >> country >> capital;
	if (m.count(country)==0)
	{
		m[country] = capital;
		cout << "Introduce new country " << country << " with capital " << capital << endl;
	}
	else if (m[country]==capital)
	{
		cout << "Country " << country << " hasn't changed its capital" << endl;
	}
	else
	{
		cout << "Country " << country << " has changed its capital from " << m[country] << " to " << capital << endl;
		m[country] = capital;
	}
}

void RenameCountry(map<string, string>& m) {
	string OldNameCountry;
	string NewNameCountry;
	cin >> OldNameCountry >> NewNameCountry;
	if (m.count(OldNameCountry)==0 || m.count(NewNameCountry)!=0 || OldNameCountry==NewNameCountry )
	{
		cout << "Incorrect rename, skip" << endl;
	}
	else
	{
		m[NewNameCountry] = m[OldNameCountry];
		m.erase(OldNameCountry);
		cout << "Country " << OldNameCountry << " with capital " << m[NewNameCountry] << " has been renamed to " << NewNameCountry << endl;
	}

}

void Dump(const map<string, string>& m) {
	if (m.empty())
	{
		cout << "There are no countries in the world" << endl;
	}
	else
	{
		bool firstiteration = true;
		for (const auto& element : m) {
			if (firstiteration)
			{
				cout << element.first << "/" << element.second;
				firstiteration = false;
			}
			else {
				cout <<" "<<element.first << "/" << element.second;
			}
			cout << endl;
		}
	}	
}

void About(map<string, string>& m) {
	string Country;
	cin >> Country;
	if (m.count(Country) == 0) {
		cout<< "Country "<<Country<<" doesn't exist"<<endl;
	}
	else
	{
		cout << "Country " << Country << " has capital " << m[Country] <<endl;
	}
}

int main() {
	int n;
	cin >> n;
	map<string, string> MainMap;
	for (int i = 0; i < n; i++){
		string request;
		cin >> request;
		if (request == "CHANGE_CAPITAL") {
			ChangeCapitalCountry(MainMap);
		}
		else if (request=="RENAME") {
			RenameCountry(MainMap);
		}
		else if(request == "DUMP") {
			Dump(MainMap);
		}
		else if (request == "ABOUT") {
			About(MainMap);
		}
	}

	return 0;
}
