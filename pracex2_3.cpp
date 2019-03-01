#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.

void randomAlphabet(){
	char A[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int r;
	for(int i = 0; i < 8; i++){
	for(int j = 0; j < 8; j++){
		    r=rand()%26;
			alphabet[i][j] =A[r];
			
		}
	}
}