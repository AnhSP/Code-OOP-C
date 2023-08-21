#include<iostream>
#include<cmath>
using namespace std;
typedef struct {
	int tu;
	int mau;
} PhanSo;

istream & operator >>(istream &inp, PhanSo &phanso ){
	cout<< "Nhap tu so: ";
	inp>> phanso.tu;
	cout<< "Nhap mau so: ";
	inp>> phanso.mau;
	return inp;
}

ostream & operator <<(ostream &out, PhanSo phanso){
	out<< "Phan so: "<< phanso.tu<< " / "<< phanso.mau<< endl;
	return out;
}

PhanSo operator +(PhanSo p1, PhanSo p2){
	PhanSo phanso;
	phanso.tu= p1.tu*p2.mau+p2.tu*p1.mau;
	phanso.mau= p1.mau*p2.mau;
	return phanso;
}

PhanSo operator -(PhanSo p1, PhanSo p2){
	PhanSo phanso;
	phanso.tu= p1.tu*p2.mau- p2.tu*p1.mau;
	phanso.mau= p1.mau*p2.mau;
	return phanso;
}

PhanSo operator *(PhanSo p1, PhanSo p2){
	PhanSo phanso;
	phanso.tu= p1.tu*p2.tu;
	phanso.mau= p1.mau*p2.mau;
	return phanso;
}

PhanSo operator /(PhanSo p1, PhanSo p2){
	PhanSo phanso;
	phanso.tu= p1.tu*p2.mau;
	phanso.mau= p1.mau*p2.tu;
	return phanso;
}

int ucln(int tu, int mau){
	int t;
	tu= abs(tu);
	mau= abs(mau);
	while(tu && mau){
		if(tu>mau) tu%= mau;
		else mau%= tu;
	}
	
	if(tu==0) t= mau;
	else if(mau==0) t= tu;
	
	return t; 
}

PhanSo operator !(PhanSo p1){
	int uc= ucln(p1.tu, p1.mau);
	p1.tu= p1.tu /uc;
	p1.mau= p1.mau /uc;
	return p1;
}

int main(){
	cout<< "Nhap 2 phan so tuy y: "<< endl;
	PhanSo p1, p2;
	cin>> p1;
	cin>> p2;
	PhanSo p3= p1+p2;
	p3= !(p3);
	cout<< p3;
}
