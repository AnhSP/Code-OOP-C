#include<iostream>
#include<cmath>
using namespace std;

typedef struct {
	string name;
	int diemThi;
}ThiSinh;

istream & operator >>(istream &inp, ThiSinh &thiSinh){
	cout<< "Nhap ten thi Sinh: ";
	inp>> thiSinh.name;
	cout<<"Nhap diem thi sinh: ";
	inp>> thiSinh.diemThi;
	return inp;
}

ostream & operator <<(ostream &out, const ThiSinh &thiSinh){
	out<<"Thi sinh "<< thiSinh.name<<" co so diem: "<< thiSinh.diemThi;
	return out;
}

bool operator <(const ThiSinh &t1, const ThiSinh &t2){
	if(t1.diemThi< t2.diemThi) return true;
	else return false;
}

