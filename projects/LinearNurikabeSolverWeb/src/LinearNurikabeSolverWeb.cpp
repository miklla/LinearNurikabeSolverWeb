// LinearNurikabeSolverWeb.cpp: определяет точку входа для приложения.
//

#include "LinearNurikabeSolverWeb.h"
#include <ctime>

using namespace std;

int main()
{
    long r = time(NULL);
    for (long i = 0; i < 1000000; ++i)
        r += i;
	cout << "Hello CMake. v2 " << r << endl;
	return 0;
}
