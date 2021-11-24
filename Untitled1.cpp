#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class SinhVien{
	private:
		string MSSV, HoTen;
		int NamSinh;
		float Diem;
	public:
		SinhVien();
	    SinhVien(string MSSV,string HoTen,int NamSinh,float Diem);
		~SinhVien();
		float getDiemTB();
		void Nhap();
		void Xuat();
		int MaxDiem(SinhVien sv[],int n);	                 
		int MinDiem(SinhVien sv[],int n);	                 
		void sapXepTheoTen(SinhVien sv[], int n);            
		void sapXepTheoDiem(SinhVien sv[], int n);           
		                
};
SinhVien::~SinhVien(){
 }
SinhVien::SinhVien(string MSSV,string HoTen,int NamSinh,float Diem){
 	this->MSSV   = MSSV;
 	this->HoTen  = HoTen;
 	this->NamSinh= NamSinh;
 	this->Diem   = Diem;
 }
 float SinhVien::getDiemTB(){
 	return Diem;
 	int SinhVien::MaxDiem(SinhVien sv[],int n){
 	float max=sv[0].getDiemTB();
	int vt=0;
	for(int i=1;i<n;i++){
		if(sv[i].getDiemTB()>max)
		{
			max=sv[i].getDiemTB();
			vt=i;
		}
	}
	return vt;
 }int  SinhVien::MinDiem(SinhVien sv[],int n){
 	float min=sv[0].getDiemTB();
	int vt=0;
	for(int i=1;i<n;i++){
		if(sv[i].getDiemTB()<min)
		{
			min=sv[i].getDiemTB();
			vt=i;
		}
	}
	return vt;  
void SinhVien::sapXepTheoDiem(SinhVien sv[], int n) {
    SinhVien t;
    for(int i = 0;i < n;i++){
        for(int j = i+1; j < n;j++){
            if(sv[i].Diem > sv[j].Diem){
                t = sv[i];
                sv[i] = sv[j];
                sv[j] = t;
            }
        }
    }
}

void SinhVien::Nhap(){
		cout<<"Ma SV: "   ; fflush(stdin); getline(cin, MSSV);
        cout<<"Ho Ten: "  ; fflush(stdin); getline(cin, HoTen);
        cout<<"Nam sinh: "; cin>>NamSinh;
        cout<<"Diem: "    ; cin>>Diem;
    
}
