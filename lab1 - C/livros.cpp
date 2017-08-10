#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int num;
	cin >> num;

	vector<string> livros;

	for (int i = 0; i <= num; i++)
	{
		string livro;
		getline(cin,livro);
		livros.push_back(livro);
	}

	sort(livros.begin(), livros.end());

	for (int i = 0; i <= num; i++)
	{
		cout << livros[i] << endl;
	}

	return 0;
}