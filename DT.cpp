#include<bits/stdc++.h>
using namespace std;
class dt{
	int bac;
	float *hs;
	public:
		dt(){
			bac=0;
			hs=NULL;
		}
//		~dt(){
//			delete []hs;
		//}
		friend istream& operator >>(istream& is,dt &a){
			cout<<"nhap bac da thuc: ";is>>a.bac;
			a.hs=new float[a.bac+1];
			for(int i=0;i<=a.bac;i++) is>>a.hs[i];
			return is;
		}
		friend ostream& operator <<(ostream& os,dt a){
			for(int i=0;i<=a.bac;i++){
				os<<a.hs[i]<<"a^"<<i<<" ";
			}
			return os;
		}
		friend float tinh(dt &a,float x){
			float s=0;
			for(int i=0;i<=a.bac;i++) s+=a.hs[i]*pow(x,i);
			return s;
		}
		dt operator+(dt a){
			dt c;
			int min;
			c.bac=bac>a.bac?bac:a.bac;
			min=bac<a.bac?bac:a.bac;
			c.hs=new float[c.bac+1];
			for(int i=0;i<=c.bac;i++){
				if(i<=min) c.hs[i]=a.hs[i]+hs[i];
				else{
					if(a.bac==min) c.hs[i]=hs[i];
					else if(bac==min) c.hs[i]=a.hs[i];				
					}
			}
			return c;
		}
};
int main(){
	dt p,q,r;
	float s,d1,d2;
	cin>>p;
	cout<<p;
	do{
		cout<<"\nnhap d1,d2: ";
		cin>>d1>>d2;
	}while(d1<d2);
	s=tinh(p,d1)-tinh(p,d2);
	cout<<"\ngia tri dt: "<<sqrt(s);
	cout<<"\nnhap da thuc q: ";cin>>q;
	cout<<q;
	r=p+q;
	cout<<"\ntong 2 dt: "<<r;
}

