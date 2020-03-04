#include <iostream>

using namespace std;

int main() {
	double BasePrise, FirstPriseLimit, SecondPriceLimit, FirstDiscountValume, SecondDiscountValume;
	cin >> BasePrise >> FirstPriseLimit >> SecondPriceLimit >> FirstDiscountValume >> SecondDiscountValume;

	if (BasePrise > SecondPriceLimit) {
		cout << BasePrise * (1 - SecondDiscountValume / 100) << endl;
	}
	else if (BasePrise > FirstPriseLimit) {
		cout << BasePrise * (1 - FirstDiscountValume / 100) << endl;
	}
	else {
		cout << BasePrise;
	}

	return 0;
}