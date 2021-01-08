#include<bits/stdc++.h>
using namespace std;
class MH{
	string mm,tm;
	int stc;
	public:
		string getmm(){
			return mm;
		}
		int get_stc(){
			return stc;
		}
		void nhap(){
			cin.ignore();
			cout<<"\nnhap mm: ";getline(cin,mm);
			cin.ignore(0);
			cout<<"\nnhap tm: ";getline(cin,tm);
			cout<<"\nnhap stc: ";cin>>stc;
		}
		void xuat(){
			cout<<"\nmm: "<<mm<<"\ttm: "<<tm<<"\tstc: "<<stc;
		}
};
class DKHP{
	string msv,ten;
	int *a;
	public:
		void nhapsv(){
			cin.ignore();
			cout<<"\nnhap msv: ";getline(cin,msv);
			cin.ignore(0);
			cout<<"\nnhap ten: ";getline(cin,ten);
		}
		void xuatsv(){
			cout<<"\nmsv: "<<msv<<"\tten: "<<ten;
		}
};
int main(){
	int m,n,**t;
	MH *a;
	cout<<"nhap m mh: ";cin>>m;
	a=new MH[m+2];
	for(int i=1;i<=m;i++) a[i].nhap();
	DKHP *b;
	cout<<"\nnhap n sv: ";cin>>n;
	b=new DKHP[n+2];
	t=new int *[n+1];
	for(int i=1;i<=n;i++){
		t[i]=new int [m+1];
		b[i].nhapsv();
		for(int j=1;j<=m;j++){
		   cout<<"\nsv dki mon hoc thu "<<j<<": ";
		   cin>>t[i][j];
	}
	}
	int *v;
	v=new int [n+1];
	for(int i=1;i<=n;i++){
		v[i]=0;
		for(int j=1;j<=m;j++){
			if(t[i][j]==1) v[i]+=a[j].get_stc();
		}
	}
	for(int i=1;i<=n;i++){
		b[i].xuatsv();
		cout<<"\nstc dki: "<<v[i]<<endl;
	}
	int s;
	string x;
	cin.ignore();
	cout<<"\nnhap x: ";getline(cin,x);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i].getmm()==x&&t[i][j]==1) s++;
		}
	}
	cout<<"\nso sv dki mh "<<x<<": "<<s;
}

