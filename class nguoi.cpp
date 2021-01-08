#include<bits/stdc++.h>
using namespace std;
class nguoi{
	string mnv,ten;
	int tuoi;
	public:
		int get_tuoi(){
			return tuoi;
		}
		void nhap(){
			cin.ignore();
			cout<<"\nnhap mnv: ";getline(cin,mnv);
			cin.ignore();
			cout<<"\nnhap ten: ";getline(cin,ten);
			cout<<"\nnhap tuoi: ";cin>>tuoi;
		}
		void xuat(){
			cout<<"\nmnv: "<<mnv<<"\tten: "<<ten<<"\ttuoi: "<<tuoi;
		}
};
class CT:public nguoi{
	int sbt,sptd;
	public:
		int get_sbt(){
			return sbt;
		}
		int get_sptd(){
			return sptd;
		}
			void nhapCT(){
			nguoi::nhap();
			cout<<"\nnhap sbt: ";cin>>sbt;
			cout<<"\nnhap sptd: ";cin>>sptd;
		}
		void xuatCT(){
			nguoi::xuat();
			cout<<"\nsbt: "<<sbt<<"\tsptd: "<<sptd;
		}
};
int main(){
	int n,min=INT_MAX;
	cout<<"nhap n CT: ";cin>>n;
	CT *a=new CT[n+2];
	for(int i=1;i<=n;i++) a[i].nhapCT();
	for(int i=1;i<=n;i++){
		if(a[i].get_tuoi()<min) min=a[i].get_tuoi();
	}
	cout<<"\ncau thu tre tuoi nhat: ";
	for(int i=1;i<=n;i++){
		if(min==a[i].get_tuoi()) a[i].xuatCT();
	}
	
	int *b=new int[n+2];
	for(int i=1;i<=n;i++){
		if(a[i].get_sbt()>=5) b[i]=7;
		else if((a[i].get_sbt()>=3&&a[i].get_sbt()<5) ||a[i].get_sptd()>500) b[i]=5;
		else b[i]=0;
	}
	for(int i=1;i<=n;i++) cout<<endl<<b[i];
//	cout<<"\ndanh sach ct dc thuong 5tr: ";
//	for(int i=1;i<=n;i++){
//		if((a[i].get_sbt()>=3 && a[i].get_sbt()<5) ||a[i].get_sptd()>=500) a[i].xuatCT();
//	}
//	cout<<"\ndanh sach ct dc thuong 7tr: ";
//	for(int i=1;i<=n;i++){
//		if(a[i].get_sbt()>=5) a[i].xuatCT();
//	}

}

