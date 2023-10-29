#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void matrisYazdir(int ** , int, int);
void transpozYazdir(int **, int, int);

int main(int argc, char** argv){
	int **matris;//iþaretçinin iþaretçisi
	int satirSayisi , sutunSayisi;
	
	cout<<"Olusturacaginiz matrisin satir sayisini giriniz: ";
	cin>>satirSayisi;
	
	cout<<"Olusturacaginiz matrisin sutun sayisini giriniz: ";
	cin>>sutunSayisi;
	
	matris=(int **)malloc(sizeof(int*) * satirSayisi);//iþaretçinin iþaretçisinin imzasý
	
	int i,j;
	for(i=0;i<satirSayisi;i++){
		matris[i]=(int *)malloc(sizeof(int)* sutunSayisi);
	}
	cout<<"Matris elemanlarini giriniz: "<<endl;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			cout<<"matris["<<i<<"]["<<j<<"]";
			cin>>matris[i][j];
		}
	}
	cout<<"Girdiginiz matris:"<<endl;
	matrisYazdir(matris,satirSayisi,sutunSayisi);
	
	cout<<"Girdiginiz matrisin transpozu:"<<endl;
	transpozYazdir(matris,satirSayisi,sutunSayisi);
	
	for(i=0;i<satirSayisi;i++)
	free(matris[i]);
	free(matris);
}
void matrisYazdir(int **matris,int satir,int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			cout<<matris[i][j];
		}
		cout<<endl;
	}
}
void transpozYazdir(int **matris,int satir,int sutun){
	int i,j;
	for(i=0;i<sutun;i++){
		for(j=0;j<satir;j++){
			cout<<matris[j][i];
		}
		cout<<endl;
	}
}
