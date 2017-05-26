#include <iostream>
using namespace std;

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}


int main()
{
	int num;
	cin >> num;
	

}