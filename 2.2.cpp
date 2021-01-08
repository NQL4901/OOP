#include<bits/stdc++.h>
using namespace std;
class QLH{
	private:
		string mh,th,xx;
		int loai,sl;
	public: 
	    int getloai(){
	    	return loai;
		}
		int getsl(){
			return sl;
		}
		string getth(){
			return th;
		}
	    void nhapQLH(){
	    	cin.ignore(1);
	    	cout<<"\nnhap mh: ";getline(cin,mh);
	    	cin.ignore(0);
	    	cout<<"\nnhap th: ";getline(cin,th);
	    	cin.ignore(0);
	    	cout<<"\nnhap xx: ";getline(cin,xx);
	    	cout<<"\nnhap loai: ";cin>>loai;
	    	cout<<"\nnhap sl: ";cin>>sl;
		}	
		void xuatQLH(){
			cout<<"\nmh: "<<mh<<"\tth: "<<th<<"\txx: "<<xx<<"\tloai: "<<loai<<"\tsl: "<<sl;
		}
};
class DT:public QLH{
	int tgbh;
	public:
		int gettgbh(){
			return tgbh;
		}
		void nhap(){
			QLH::nhapQLH();
			cout<<"\nnhap tgbh: ";cin>>tgbh;
		}
		void xuat(){
			QLH::xuatQLH();
			cout<<"\tgbh: "<<tgbh;
		}
};
int main(){
	int n,p=0,q=0,s=0;
    DT *a;
    cout<<"nhap n: ";cin>>n;
    a=new DT[n+2];
    for(int i=1;i<=n;i++) a[i].nhap();
    for(int i=1;i<=n;i++){
    	if(a[i].getloai()==1 && a[i].gettgbh()>12) p+=a[i].getsl();
	}
	cout<<"\ntong so hang loai 1:"<<p;
	for(int i=1;i<=n;i++){
    	if(a[i].getloai()==2 && a[i].gettgbh()>12) q+=a[i].getsl();
	}
	cout<<"\ntong so hang loai 2:"<<q;
	for(int i=1;i<=n;i++){
    	if(a[i].getloai()==3 && a[i].gettgbh()>12) s+=a[i].getsl();
	}
	cout<<"\ntong so hang loai 3:"<<s;
	string x;
	cin.ignore(1);
	cout<<"\nnhap ten x: ";getline(cin,x);
	for(int i=1;i<=n;i++){
		if(a[i].getth()==x) a[i].xuat();
	}
}

