#include<bits/stdc++.h>
using namespace std;
class MH{
	string mah;
	long gia;
	public:
		string get_mah(){
			return mah;
		}
		int get_gia(){
			return gia;
		}
		void nhapMH(){
			cin.ignore();
			cout<<"\nnhap maa hang: ";getline(cin,mah);
			cout<<"\nnhap gia: ";cin>>gia;
		}
		void xuatMH(){
			cout<<"\nma hang: "<<mah<<"\tgia: "<<gia;
		}
};
class HD{
	string mah,ngay;
	int sl;
	public:
		string get_mah(){
			return mah;
		}
		string get_ngay(){
			return ngay;
		}
		int get_sl(){
			return sl;
		}
		void nhap(){
			cin.ignore();
			cout<<"\nnhap mah: ";getline(cin,mah);
			cin.ignore();
			cout<<"\nnhap ngay: ";getline(cin,ngay);
			cout<<"\nnhap sl: ";cin>>sl;
		}
		void xuat(){
			cout<<"\nma hang: "<<mah<<"\tngay: "<<ngay<<"\tsl: "<<sl;
		}
		int tinhtien(MH *Q,int m){
			int t=0;
			for(int i=1;i<=m;i++){
				if(mah==Q[i].get_mah()) t+=sl*Q[i].get_gia();
			}
			return t;
		}
};
void tongtien(HD *P,int n,MH *Q,int m){
	string s;
	cout<<"\nnhap ngay: ";cin>>s;
	int t=0;
	for(int i=1;i<=n;i++){
		if(P[i].get_ngay()==s) t+=P[i].tinhtien(Q,m); 
	}
	cout<<"\nso tien ban dc trong ngay "<<s<<" la: "<<t;
}
int main(){
	int m,n,s=0;
	cout<<"nhap m MH: ";cin>>m;
	MH *Q= new MH[m+2];
	for(int i=1;i<=m;i++) Q[i].nhapMH();
	
	cout<<"nhap n HD: ";cin>>n;
	HD *P= new HD[n+2];
	for(int i=1;i<=n;i++) P[i].nhap();
	
	for(int i=1;i<=n;i++){
		if(P[i].get_sl()>10) s++;
	}
	cout<<"\nso luong HD >10: "<<s;
	tongtien(P,n,Q,m);
	delete []P;
	delete []Q;
}

