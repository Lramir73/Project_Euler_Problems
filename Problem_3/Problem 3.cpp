#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number)
{
	if(number%2 == 0)
		return false;

	for(int i = 3; i<=(int)sqrt(number); i+=2)
	{
		if(number%i == 0)
			return false;
	}
	return true;
}


int main()
{
	long long int x = 600851475143;
	int answer = 0;

	for(int i = 2; i <= sqrt(x); i++)
	{
		if(x%i == 0)
		{
			if(isPrime(i))
				answer = i;
		}
	}
	cout << answer << endl;
	return 0;
}