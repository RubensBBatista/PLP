#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	string books[num];

	for (int i = 0; i < num; i++)
	{
		string livro;
		getLine(cin,livro);
		books[i] = livro;
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - 1 - i; j++)
		{
			if(books[j] < books[j-1]){
				string aux = books[j];
				books[j] = books[j-1];
				books[j-1] = aux;
			}
		}
	}

	for (int i = 0; i < num; ++i)
	{
		cout << books[i] << endl;
	}

	return 0;
}