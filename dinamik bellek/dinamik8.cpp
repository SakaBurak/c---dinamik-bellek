#include<iostream>

using namespace std;

int main(int argc, char** argv){
	int** array= new int*[10];
	for(int count=0; count<10;++count){
		array[count]=new int[5];
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<5;j++){
			array[i][j]=i*j;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<5;j++){
			cout<< array[i][j];
		}
		cout<<endl;
	}
	for(int count=0;count<10;++count)
	delete [] array[count];
	delete [] array;
	
	return 0;
}
