#include<bits/stdc++.h>
using namespace std;
class TS{
	string hoten;
	float diem;
	public:
		string get_hoten(){
			return hoten;
		}
		float get_diem(){
			return diem;
		}
		void nhapTS(){
			cin.ignore();
			cout<<"\nnhap ho ten: ";getline(cin,hoten);
			cout<<"\nnhap diem: ";cin>>diem;
		}
		void xuatTS(){
			cout<<"\nho ten: "<<hoten<<"\tdiem: "<<diem;
		}
};
class OLP:public TS{
	string truong;
	public:
		string get_truong(){
			return truong;
		}
		void nhap(){
			TS::nhapTS();
			cin.ignore();
			cout<<"\nnhap truong: ";getline(cin,truong);
		}
		void xuat(){
			TS::xuatTS();
			cout<<"\ntruong: "<<truong;
		}
};
int main(){
	OLP *a;
	int n,d1=0,d2=0,d3=0;
	float s=0,p=0,q=0;
	cout<<"nhap n TS: ";cin>>n;
	a=new OLP[n+2];
	for(int i=1;i<=n;i++) a[i].nhap();
	for(int i=1;i<=n;i++){
		if(a[i].get_truong()=="A") s+=a[i].get_diem();
		if(a[i].get_truong()=="B") p+=a[i].get_diem();
		if(a[i].get_truong()=="C") q+=a[i].get_diem();
	}
	cout<<"\ntong so diem truong A: "<<s;
	cout<<"\ntong so diem truong B: "<<p;
	cout<<"\ntong so diem truong C: "<<q;
	float max=s>p&&s>q?s:(p>q?p:q);
	if(max==s) cout<<"\ntruong A co so diem cao nhat";
	if(max==p) cout<<"\ntruong B co so diem cao nhat";
	if(max==q) cout<<"\ntruong C co so diem cao nhat";
	for(int i=1;i<=n;i++){
		if(a[i].get_truong()=="A") d1++;
		if(a[i].get_truong()=="B") d2++;
		if(a[i].get_truong()=="C") d3++;
	}
	cout<<"\nso sv truong A: "<<d1;
	cout<<"\nso sv truong B: "<<d2;
	cout<<"\nso sv truong C: "<<d3;
}

