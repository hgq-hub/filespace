#include<iostream>
using namespace std;
int main(){
	char str[20];
	cin>>str;
	for(int i=0;i<20&&str[i]!='\0';i++){
		if(str[i]>=97)
			cout<<(char)(str[i]-32);
		else
			cout<<(char)(str[i]+32); 
	}
	return 0;
}
