#include <iostream>
using namespace std;

int main()
{
	int prev = 0, curr = 1, next, total = 0;
	while(curr <= 4000000)
	{
		next = curr + prev;
		prev = curr;
		curr = next;
		if(curr%2 == 0)
			total += curr;
	}
	cout << total << endl;
	return 0;
}