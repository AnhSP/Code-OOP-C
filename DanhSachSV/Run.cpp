#include"DanhSachThiSinh.cpp"
class DanhSach{
	private: ThiSinh thiSinh[100];
			int soLuong;
	
	public:
		DanhSach(){
			
		}
		void nhap(){
			cout<< "Nhap so luong: ";
			cin>> soLuong;
			for(int i=0; i<soLuong; i++){
				cin>> thiSinh[i];
			}
		}
		
		void soSanh(ThiSinh t1, int i, ThiSinh t2, int ii){
			if(t1<t2) cout<< "Diem thi sinh "<<t2.name<<" cao hon diem hoc sinh "<<t1.name;
			else cout<< "Diem thi sinh "<<t1.name<<" cao hon diem hoc sinh thu "<<t2.name;
		}
		void sortt(){
			ThiSinh t;
			for(int i=0; i< soLuong; i++){
				for(int j=i+1; j<soLuong-1; j++){
					if(thiSinh[i].diemThi< thiSinh[j].diemThi){
						t= thiSinh[i];
						thiSinh[i]= thiSinh[j];
						thiSinh[j]= t;
					}
				}
			}
		}
		void inRa(){
			for(int i=0; i<soLuong; i++){
				cout<< thiSinh[i]<<endl;
			}
		}
};
int main(){
	DanhSach danhSach;
	danhSach.nhap();
	danhSach.sortt();
	danhSach.inRa();
}
