#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 100; ++i) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "FooBaa" << " " << endl;
		}
		else if (i % 3 == 0) {
			cout << "foo" << " " << endl;
		}
		else if (i % 5 == 0) {
			cout << "baa" << " " << endl;
		}
		else {
			cout << i << " " << endl;
		}
	}

	return 0;
}
