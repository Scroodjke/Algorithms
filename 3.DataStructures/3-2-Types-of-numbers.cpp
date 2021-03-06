#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
typedef int Number;
Number randNum() {
	return rand();
}
int main(int argc, char* argv[]) {
	int N = atoi(argv[1]);
	float m1 = 0.0, m2 = 0.0;
	for (int i = 0; i < N; i++) {
		Number x = randNum();
		m1 += ((float)x) / N;
		m2 += ((float)x * x) / N;
	}
	cout << "	Среднее: " << m1 << endl;
	cout << "Ср.-кв.откл.: " << sqrt(m2 - m1 * m1) << endl;
}