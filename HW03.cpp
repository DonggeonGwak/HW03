#include "simplevector.h"
#include <iostream>

using namespace std;

int main()
{
	SimpleVector<int> sv;
	
	sv.push_back(10);
	sv.push_back(20);
	sv.push_back(30);

	cout << "push_back: " << sv.Size() << endl;
	cout << "CrrentCapacity: " << sv.capacity() << endl;

	sv.pop_back();

	cout << "After pop_back: " << sv.Size() << endl;

	sv.clean();


	SimpleVector<int> sv2(4);

	sv2.push_back(10);
	sv2.push_back(20);
	sv2.push_back(30);

	cout << "push_back: " << sv2.Size() << endl;
	cout << "CrrentCapacity: " << sv2.capacity() << endl;

	sv2.pop_back();

	cout << "After pop_back: " << sv2.Size() << endl;

	sv2.clean();

	return 0;
}