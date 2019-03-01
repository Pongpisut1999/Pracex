#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	ifstream source("score3.txt");
	string line;
	float a[19];
	int i=0;
    while(getline(source,line)){
		a[i]=atof(line.c_str());
		i++;
	}
	sort(a,20);
	ofstream dest("rank.txt");
	int k=1,m=0;
	dest<<a[0]<<"="<<k<<endl;
    for(int j=1;j<20;j++){
    	if(a[j]!=a[j-1]){
        k=j+1;
		dest<<a[j]<<"="<<k<<endl;
	}
        else if(a[j]==a[j-1]){
         dest<<a[j]<<"="<<k<<endl;	
		}
	}	
	return 0;
}
