#include<bits/stdc++.h>
using namespace std;
class book{
	string ms,ts,ttg;
	int nxb;
	public:
		int get_nxb(){
			return nxb;
		}
		void nhap(){
			cin.ignore();
			cout<<"\nnhap ms: ";getline(cin,ms);
			cin.ignore(0);
			cout<<"\nnhap ts: ";getline(cin,ts);
			cin.ignore(0);
			cout<<"\nnhap ttg: ";getline(cin,ttg);
			cout<<"\nnhap nxb: ";cin>>nxb;
		}
		void xuat(){
			cout<<"\nms: "<<ms<<"\tts: "<<ts<<"\tttg: "<<ttg<<"\tnxb: "<<nxb;
		}
};
class qlbook{
	int n;
	book *a;
	public:
		void nhap(){
			cout<<"nhap n:";cin>>n;
			a=new book[n+2];
			for(int i=1;i<=n;i++) a[i].nhap();
		}
		void xuat(){
			for(int i=1;i<=n;i++) a[i].xuat();
		}
		void tim_sach(){
			int d,dem=0;
			cout<<"\nnhap nam can tim: ";cin>>d;
			for(int i=1;i<=n;i++){
				if(a[i].get_nxb()==d) a[i].xuat(),dem=1;
			}
			if(!dem) cout<<"\nko tim dc";
		}
		void sx(){
			for(int i=1;i<n;i++){
				for(int j=i+1;j<=n;j++){
					if(a[i].get_nxb()>a[j].get_nxb()) swap(a[i],a[j]);
				}
			}
		}
};
int main(){
	qlbook a;
	a.nhap();
	a.tim_sach();
	a.sx();
	cout<<"\nsau khi sx: ";a.xuat() ;
}

