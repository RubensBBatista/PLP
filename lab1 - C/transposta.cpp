#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n;
	cin >> n;

	int matriz[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matriz[i][j];
		}
	}

	for(int i = 0; i <= n-1; i++){
		for (int j = 0; j <= n-1; j++){
			cout << matriz[j][i];
			if(j < n-1){ 
				cout << " ";
			}
		}
		cout << "\n";
	}



	return 0;
}