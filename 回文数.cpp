#include<iostream>
using namespace std;
int main(){
	int i,a,b,c,d,e,f,n;
	cin>>n;
	for(i=10001;i<=999999;++i){
		a=i%10;
		b=(i%100)/10;
		c=(i%1000)/100;
		d=(i%10000)/1000;
		e=(i%100000)/10000;
		if(i>99999){
			f=i/100000;
			if(a==f&&b==e&&c==d&&a+b+c+d+e+f==n)
				cout<<i<<endl;
		}
		else if(a==e&&b==d&&a+b+c+d+e==n)
			cout<<i<<endl;
	}
	return 0;
}
