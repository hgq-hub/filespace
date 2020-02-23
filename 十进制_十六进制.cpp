#include<iostream>
#include<vector>
using namespace std;

int main(){
	int sum,s;
	char m;
	cin>>sum;
	vector<char> rest;//结果容器 
	vector<char>::iterator res;//迭代器 
	if(sum<10) cout<<sum;
	else {
		while(sum){//取余进制转换 
			s=sum%16;
			sum/=16;
			switch(s){
				case 10:m='A';break;
				case 11:m='B';break;
				case 12:m='C';break;
				case 13:m='D';break;
				case 14:m='E';break;
				case 15:m='F';break;
				default:m='0'+s;
			}  
			rest.push_back(m);
		}
		for(res=rest.end()-1;res!=rest.begin()-1;res--)//反向输出容器结果 
			cout<<*res;
	}
	return 0;
}
