#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
	if(b==0) return a;
	else return ucln(b,a%b);
}
class ps{
	int tu,mau;
	public:
		ps(){
		}
		ps(int a,int b){
			tu=a;
			mau=b;
		}
		void nhap(){
			cin>>tu>>mau;
		}
		friend ostream& operator<<(ostream& os,ps p){
			int k=ucln(p.tu,p.mau);
			p.tu/=k;
			p.mau/=k;
			os<<p.tu<<"/"<<p.mau;
		}
		ps operator*(ps p){
			ps t;
			t.tu=tu*p.tu;
			t.mau=mau*p.mau;
			return t;
		}
};
int main(){
	ps p1(1,2),p2,p3;
	cout<<"nhap p2: ";p2.nhap();
	p3=p1*p2;
	cout<<"\np1: "<<p1;
	cout<<"\np2: "<<p2;
	cout<<"\np3: "<<p3;
}

