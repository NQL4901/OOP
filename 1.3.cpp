#include<bits/stdc++.h>
using namespace std;
class HCN{
	int dai,rong;
	public:
		void nhap(){
			cout<<"\nnhap chieu dai: ";cin>>dai;
			cout<<"\nnhap chieu rong: ";cin>>rong;
		}
		void xuat(){
			cout<<"\ndai: "<<dai<<"\trong: "<<rong;
		}
		float tinh(){
			return dai*rong;
		}
};
int main(){
	HCN *a;
	int n,s=0,min=INT_MAX;
	cout<<"nhap HCN: ";cin>>n;
	a=new HCN[n+2];
	for(int i=1;i<=n;i++) a[i].nhap();
	for(int i=1;i<=n;i++) s+=a[i].tinh();
	cout<<"\ndien tich trung binh: "<<s/n;
	for(int i=1;i<=n;i++){
		if(a[i].tinh()<min) min=a[i].tinh();
	}
	for(int i=1;i<=n;i++){
		if(min==a[i].tinh()) a[i].xuat() ;
	}
}

