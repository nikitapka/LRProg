#include <string>
#include <vector>
#include <iostream>

using namespace std;


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

int main() {
    int NumberOperation;
    string Operation;
    int argument;
    cin >> NumberOperation;
    vector<string> AvailableOperations = { "WORRY" }
    for (int i; i < NumberOperation; i++)
    {
        cin >> Operation;
        
    }
    return 0;
}
