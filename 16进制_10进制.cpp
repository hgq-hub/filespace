#include<iostream>
#include<vector>
using namespace std;

int main(){
	char m;
	short i=0,n;
	long n16=1,sum=0;
	vector<char>rest;
	vector<char>::iterator res;
	while(1){
		m=getchar();
		if(m=='\n')
			break;
		rest.push_back(m);
	}
	for(res=rest.end()-1;res!=rest.begin()-1;res--,i++){
		m=*res;
		switch(m){
			case 'A':n=10;break;
			case 'B':n=11;break;
			case 'C':n=12;break;
			case 'D':n=13;break;
			case 'E':n=14;break;
			case 'F':n=15;break;
			default:n=m-'0';
		}
		if(i>0)
			n16*=16;
		sum+=n*n16;
	}
	cout<<sum;
	return 0;
} 
