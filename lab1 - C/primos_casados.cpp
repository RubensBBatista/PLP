#include <iostream>
#include <vector>
using namespace std;

bool ePrimo(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}


int main(){
	
	int numero;
	cin >> numero;
	
	vector<int> primos;
	primos.push_back(1);
	
	for(int i = 3; i <= numero; i++){
		if(ePrimo(i)){
			primos.push_back(i);
		}
	}
	
	for(int i = 0; i <= numero; i++){
		if ((primos[i] + 2) == primos[i+1]){
			cout << primos[i];
			cout << " " << primos[i+1] << endl;
		}
		
	}
}