#ifdef EXECUTE_TESTS

#include <iostream>
#include "test/tester.h"

using namespace std;

int main(int argc, char *argv[])
{
	cout << "===========================================================" << endl;
	cout << "\tLists Practice" << endl;
	cout << "===========================================================" << endl << endl;

	Tester::execute();
	return EXIT_SUCCESS;
}

#else

#include "forward_list.hpp"

int main()
{
	my::forward_list<int> items_1;

	return 0;
}

#endif
