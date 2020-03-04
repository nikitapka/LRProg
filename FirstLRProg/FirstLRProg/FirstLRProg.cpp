#include <iostream>
#include <cmath>

using namespace std;
// Ax2+Bx+c=0
int main() {
	double A, B, C;
	cin >> A >> B >> C;
	
	double D = B * B - 4 * A * C;
	if (A == 0 && !B==0 ) { 
		cout << (-C/B) << endl;
	}
	else if (D == 0 && (!B==0 && !A==0)) {
		cout << -B / (2 * A) << endl;
	}
	else if (D > 0) {
		cout << ((-B + sqrt(D)) / (2 * A)) << endl;
		cout << ((-B - sqrt(D)) / ( 2 * A)) << endl;
	}
	return 0;
}