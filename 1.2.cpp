#include<bits/stdc++.h>
using namespace std;
class DT{
	private:
		int n;
		float *a;
	public:
	    void nhap(){
	    	cout<<"nhap so mu: ";cin>>n;
	    	a=new float[n+5];
	    	for(int i=0;i<=n;i++) cin>>a[i];
		}
		void xuat(){
			cout<<"da thuc vua nhap: ";
			for(int i=0;i<=n;i++) cout<<a[i]<<"a^"<<i<<" ";
		}
		float tinh(float x){
			float s=0;
			for(int i=0;i<=n;i++) s+=a[i]*i*pow(x,i-1);
			return s;
		}
};
int main(){
	DT p;
	p.nhap();
	p.xuat();
	float x;
	cout<<"\nnhap gia tri x: ";cin>>x;
	cout<<"\ngia tri dao ham: "<<p.tinh(x); 
}

