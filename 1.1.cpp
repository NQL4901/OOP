#include<bits/stdc++.h>
using namespace std;
class diem{
	float hd,td;
	public:
		friend istream& operator >>(istream& is,diem &p){
			is>>p.hd>>p.td;
			return is;
		}
		friend ostream& operator <<(ostream& os,diem &p){
			os<<"("<<p.hd<<","<<p.td<<")";
			return os;
		}
		float kc(){
			return sqrt(hd*hd+td*td);
		}
};
int main(){
	int n,k;
	float s=0,min=FLT_MAX;
	cout<<"nhap n: ";cin>>n;
	diem *p=new diem[n+2];
	for(int i=1;i<=n;i++) cin>>p[i];
	for(int i=1;i<=n;i++) s+=p[i].kc();
	cout<<"\ntong kc den goc toa do: "<<s;
	for(int i=1;i<=n;i++){
		if(p[i].kc()<min){
			min=p[i].kc();
			k=i;
		}
	}
	cout<<"\ndiem gan toa do nhat: "<<p[k];
}

