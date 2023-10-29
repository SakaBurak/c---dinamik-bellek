#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(int argc, char** argv){
	int sayi;
	int toplam=0;
	cout << "Kac adet sayi gireceksiniz: ";
	cin >> sayi;
	int *sayidizisi=(int*)malloc(sizeof(int)*sayi);
	int i;
	for(i=0;i<sayi;i++){
		cout<< i+1 << ". elemani giriniz:";
		cin>>sayidizisi[i];
	}
	for(i=0;i<sayi;i++){
		toplam+=sayidizisi[i];
	}
	float ortalama=float(toplam)/float(sayi);
	cout<<"Girdiginiz "<< sayi <<" adet sayinin ortalamasi:" << ortalama;
	free(sayidizisi);
	return 0;
}
