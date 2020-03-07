#include <string>
#include <vector>
#include <iostream>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (auto a : source) {
        destination.push_back(a);
    }
    source.clear();
}

vector<int> Reversed(const vector<int>& v) {
    vector<int> numbers = v;
    if (!numbers.empty())
    {
        size_t i = numbers.size();
        do {
            --i;
            numbers.push_back(numbers[i]);
            numbers.erase(numbers.begin() + i);
        } while (i > 0);
    }
    return numbers;
}

void FillVector(vector<int>& v) {
    int i = 0;
    for (auto element : v) {
        cin >> v[i];
        i++;
    }
}

int GetArithmeticMean(const vector<int>& v) {
    int result = 0;
    for (auto element : v)
    {
        result += element;

    }
    return (result / v.size());
}

vector<int> GetTemperaturesAboveAverage(const vector<int>& v) {
    int average = GetArithmeticMean(v);
    int i = 0;
    vector<int> result;
    for (auto element : v) {
        if (element > average) {
            result.push_back(i);
        }
        i++;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> temp_date(n);
    FillVector(temp_date);
    vector<int> TemperaturesAboveAverage = GetTemperaturesAboveAverage(temp_date);
    cout << TemperaturesAboveAverage.size() << endl;
    for (auto element : TemperaturesAboveAverage) {
        cout << element << " ";
    }
    return 0;
}
