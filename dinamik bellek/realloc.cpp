#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void diziYazdir(int* dizi,int elemansayisi);

void diziYazdir(int* dizi, int elemansayisi){
	int i;
	for(i=0;i<elemansayisi;i++){
		cout<<"dizi["<<i<<"]: "<<dizi[i]<<endl;
	}
}


int main(){
	int *sayiDizisi1;
	int sayi;
	cout<<"Eleman sayisini giriniz: ";
	cin>> sayi;
	sayiDizisi1=(int*)calloc(sayi,sizeof(int));     //malloctan farký  sayiDizisi1=(int*)malloc(sayi*sizeof(int));
	
	cout<<"calloc sonucu olusan dizinin elamanlari:"<<endl;
	diziYazdir(sayiDizisi1,sayi);
	
	cout<<"dizi elemanlarina 5 deger atayalim."<<endl;
	int i;
	for(i=0;i<sayi;i++){
		sayiDizisi1[i]=5;
	}
	diziYazdir(sayiDizisi1,sayi);
	sayi=10;
	sayiDizisi1=(int*)realloc(sayiDizisi1,sayi* sizeof(int));
	cout<<"realloc sonucu olusan dizinin elemanlari:"<<endl;
	diziYazdir(sayiDizisi1,sayi);
	
	cout<<"realloc sonucu olusan dizinin elamanlarina deger atanmasi"<<endl;
	memset(sayiDizisi1,0,sayi* sizeof(int));
	sayiDizisi1[5]=4;
	diziYazdir(sayiDizisi1,sayi);
	free(sayiDizisi1);
	return 0;
}

