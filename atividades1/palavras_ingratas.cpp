#include <iostream>
using namespace std;

int main(){
	
	int count = 0;
	while(count < 3){
		string palavra;
		cin >> palavra;
		bool achou_vogal = false;
		for (int i = 0; i < palavra.length(); i++)
		{
			if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
				achou_vogal = true;
			}
		}
		if(!achou_vogal){
			count++;
			cout << palavra << endl;	
		}
	}
	

	return 0;
}