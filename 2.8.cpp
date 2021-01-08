#include"bits/stdc++.h"
using namespace std;
class Xe{
private:
	string bienso;
	int trongluong;
public:
	virtual void nhap(){
		cout<<"\nNhap bien so: ";
		cin>>bienso;
		cout<<"Nhap trong luong: ";
		cin>>trongluong;
	}
	virtual void xuat(){
		cout<<"\nBien so: "<<bienso<<setw(15)<<"Trong luong: "<<trongluong<<setw(15);
	}
	virtual string get_bienso(){
		return bienso;
	}
};
class Xebus:public Xe{
private:
	int chongoi; //so luong cho ngoi
public:
	void nhap(){
		Xe::nhap();
		cout<<"Nhap so cho ngoi: ";
		cin>>chongoi;
	}
	void xuat(){
		Xe::xuat();
		cout<<"Cho ngoi: "<<chongoi<<setw(15);
	}
	int get_chongoi(){
		return chongoi;
	}
	string get_bienso(){
		return Xe::get_bienso();
	}
};

class Xetai:public Xe{
private:
	int taitrong;
public:
	void nhap(){
		Xe::nhap();
		cout<<"Nhap tai trong: ";
		cin>>taitrong;
	}
	void xuat(){
		Xe::xuat();
		cout<<"Tai trong: "<<taitrong<<setw(15);
	}
	int get_taitrong(){
		return taitrong;
	}
	string get_bienso(){
		return Xe::get_bienso();
	}
};
void dem_xe_bus(Xebus B[100],int n){
	int k=0;
	for(int i=1;i<=n;i++)  //it nhat 30 cho <=> >=30
		if(B[i].get_chongoi()>=30) k++;
	cout<<"\nCo "<<k<<" xe bus co it nhat 30 cho ngoi";
}
void in_xetai(Xetai T[100],int m){
	int kt=1,max=-5;
	for(int i=1;i<=m;i++)
		if(T[i].get_taitrong() <=5 && T[i].get_taitrong()>max) max=T[i].get_taitrong();
	if(max==-5) cout<<"\n\nKhong co xe tai thoa man";
	else{
		cout<<"\n\nDanh sach xe tai thoa man la:";
		for(int i=1;i<=m;i++)
			if(T[i].get_taitrong()==max) T[i].xuat();	
	}
}
void tim_xe(Xebus B[100],int n,Xetai T[100],int m){ //de bai ko noi ro nen t phai tim ca 2 loai xe
	string s;
	cout<<"\n\nNhap bien so xe: ";
	cin>>s;
	for(int i=1;i<=n;i++)
		if(B[i].get_bienso()==s){
			cout<<"Xe can tim la: ";
			B[i].xuat();
			return;
		}
	for(int i=1;i<=m;i++)
		if(T[i].get_bienso()==s){
			cout<<"Xe can tim la: ";
			T[i].xuat();
			return;
		}
	cout<<"\nKhong tim duoc xe thoa man";
}
int main(){
    	int n,m;
    	Xebus B[100]; 
    	Xetai T[100];
    	cout<<"Nhap n va m: ";
    	cin>>n>>m;
    	cout<<"Nhap thong tin xe bus\n";
    	for(int i=1;i<=n;i++) B[i].nhap();
    	cout<<"\nNhap thong tin xe tai\n";
    	for(int i=1;i<=m;i++) T[i].nhap();
    	
    	dem_xe_bus(B,n);
    	in_xetai(T,m);
    	tim_xe(B,n,T,m);
	
}


