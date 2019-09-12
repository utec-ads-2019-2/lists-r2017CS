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

/*
 __________________
/\                 \  
\_|                |  
  |   To-do list   |  
  |                |  
  |  ______________|_ 
  \_/_______________/

* Change iterator names.
* Compile and execute the tests.

*/

#include "forward_list.hpp"

int main()
{
	my::forward_list<int> items_1;

	items_1.push_back(12);
	items_1.push_front(13);

	items_1.print();
	items_1.reverse();
	items_1.print();

	return 0;
}

#endif
