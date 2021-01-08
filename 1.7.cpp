#include<bits/stdc++.h>
using namespace std;
class dt{
	int n;
	float *a;
	public:
		void nhap(){
			cout<<"nhap bac dt: ";cin>>n;
			a=new float[n+2];
			for(int i=0;i<=n;i++) cin>>a[i];
		}
		void xuat(){
			for(int i=0;i<=n;i++){
				cout<<a[i]<<"x^"<<i<<" ";
			}
		}
		dt operator +(dt Q){
			dt X;
			X.n=n>Q.n?n:Q.n;
			int min=n<Q.n?n:Q.n;
			X.a=new float[n+2];
			for(int i=0;i<=n;i++){
				if(i<=min) X.a[i]=Q.a[i]+a[i];
				else{
					if(Q.n==min) X.a[i]=a[i];
					else if(n==min) X.a[i]=Q.a[i];
				}
			}
			return X;
		}
};
int main(){
	dt P,Q,R;
	P.nhap();P.xuat();
	cout<<endl;
	Q.nhap();Q.xuat();
	R=P+Q;
	cout<<"\ntong 2 dt: ";R.xuat();
}

