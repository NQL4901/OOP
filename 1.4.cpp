#include<bits/stdc++.h>
using namespace std;
class dayso{
	int n;
	float *a;
	public:
		friend istream& operator >>(istream& is,dayso &p){
			cout<<"nhap so phan tu: ";is>>p.n;
			p.a=new float[p.n+1];
			for(int i=1;i<=p.n;i++) is>>p.a[i];
			return is;
		}
		friend ostream& operator <<(ostream& os,dayso p){
			cout<<"\nday so vua nhap: ";
			for(int i=1;i<=p.n;i++) os<<p.a[i]<<" ";
			return os;
		}
		float tbc(dayso &p){
			float s=0;
			for(int i=1;i<=p.n;i++) s+=p.a[i];
			return s/p.n;
		}
};
int main(){
	dayso p;
	cin>>p;
	cout<<p;
	float s=0;
	s=p.tbc(p); 
	cout<<endl<<s;
}

