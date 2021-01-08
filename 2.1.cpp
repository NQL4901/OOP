#include<bits/stdc++.h>
using namespace std;
class toado{
	float hd,td;
	public:
		void nhapTD(){
			cout<<"nhap hd: ";cin>>hd;
			cout<<"\nnhap td: ";cin>>td;
		}
		void xuatTD(){
			cout<<"\nhd: "<<hd<<"\ttd: "<<td;
		}
		float kc(){
			return sqrt(hd*hd+td*td);
		}
};
class diemmau:public toado{
	int mamau;
	public:
		int get_mamau(){
			return mamau;
		}
		void nhap(){
			toado::nhapTD();
			cout<<"\nnhap ma mau: ";cin>>mamau;
		}
		void xuat(){
			toado::xuatTD();
			cout<<"\nma mau: "<<mamau;
		}
};
//void thongke(diemmau *p,int n){
//	int d1=0,d2=0,d3=0;
//	//	string s[4]={"","do","vang","xanh"};  
//	for(int i=1;i<=n;i++){
//		if(p[i].get_mamau()=="do") d
//	}

int main(){
	int n,d1=0,d2=0,d3=0,k;
	float max=FLT_MIN;
	cout<<"nhap n diem: ";cin>>n;
	diemmau *p=new diemmau[n+2];
	for(int i=1;i<=n;i++)  p[i].nhap();
	
	for(int i=1;i<=n;i++){
		if(p[i].get_mamau()==1) d1++;
		if(p[i].get_mamau()==2) d2++;
		if(p[i].get_mamau()==3) d3++;
	}
	cout<<"\nso diem mau do: "<<d1;
	cout<<"\nso diem mau vang: "<<d2;
	cout<<"\nso diem mau xanh: "<<d3;
	
	for(int i=1;i<=n;i++){
		if(p[i].kc()>max) max=p[i].kc();
	}
	cout<<"\ndiem co kc lon nhat den toa do: ";
	for(int i=1;i<=n;i++){
		if(max==p[i].kc()) p[i].xuat();
	}
}

