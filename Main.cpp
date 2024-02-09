#include <iostream>
using namespace std;
int main() {
	string Summertime[4] = { "Friend by Jeff and Casey Williams,","Summer by Calvin Harris,","Fall to Light by lazlo,",};


	Summertime[3] = "Kokiri Forest by Koji Kondo";

	for (int i = 0; i < 4; i++) {
		cout << Summertime[i] << " ";
	}
	cout << endl;

	cout << Summertime[2] << endl;

	for (int i = 0; i < 3; i++) {
		if (Summertime[2] == "Summer by Calvin Harris")
			cout << "True" << endl;
		else;
			cout << "False" << endl;
	}
}
