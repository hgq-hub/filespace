#include<iostream>
#include<cstring>
using namespace std;
int n, *t;
bool *s;

void permutation(int deep){
	if(deep >= n){
		for(int i = 0; i < n; i++)
			cout << t[i] << (i == n-1 ? '\n' : ' ');
	}
	for(int i = 0; i < n; i++){
		if(s[i] == false){
			t[deep] = i+1;
			s[i] = true;
			permutation(deep + 1);
			s[i] = false;
		}
	}
}

int main(){
	cin >> n;
	t = new int[n];
	s = new bool[n];
	memset(s, false, sizeof(s));
	permutation(0);
	delete[] s;
	delete[] t; 
	return 0;
}
