#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char**argv){
	int *ptr;
	ptr=(int*)malloc(sizeof(int));
	
	if(ptr==0){
		cout<<"Hata,bellekten yer ayrilmadi!"<<endl;
		return 1;
	}
	*ptr=225;
	cout<< *ptr;
	free(ptr);
	return 0;
}
