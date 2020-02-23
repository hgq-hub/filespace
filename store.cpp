#include<iostream>
#include<cstring>
using namespace std;
struct student{
	int math;
	int en;
	int zn;
	int id;
};
int n;

int ans(student *a, int b, int c, int d){
	if(b == c)
		return 0;
	student temp;
	int i=b, j=c, k, m;
	if(d==1){
		for(i = b; i <= c; ++i)
			for(j = i; j < c; ++j)
				if(a[j].math > a[i].math){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		k = a[b].math;
		m = b;
		for(i = b; i <= c; ++i){
			if(a[i].math != k){
				ans(a, m, i, 2);
				k = a[i].math;
				m = i;
			}
		}
	}
	else if(d==2){
		for(i = b; i <= c; ++i)	
			for(j = i; j < c; ++j)
				if(a[j].en > a[i].en){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		k = a[b].en;
		m = b;
		for(i = b; i <= c; ++i){
			if(a[i].en != k){
				ans(a, m, i, 3);
				k = a[i].en;
				m = i;
			}
		}
	}
	else if(d==3){
		for(i = b; i <= c; ++i)	
			for(j = i; j < c; ++j)
				if(a[j].zn > a[i].zn){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		k = a[b].math;
		m = b;
		for(i = b; i <= c; ++i){
			if(a[i].zn != k){
				ans(a, m, i, 4);
				k = a[i].zn;
				m = i;
			}
		}
	}
	else{
		for(i = b; i <= c; ++i)	
			for(j = i; j < c; ++j)
				if(a[j].id > a[i].id){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
	return 0;
}
int main(){
	int i;
	cin >> n;
	student *a;
	a = new student[n];
	for(i = 0; i < n; ++i){
		cin >> a[i].math >> a[i].en >> a[i].zn;
		a[i].id = i + 1;
	}
	ans(a, 0, n, 1);
	for(i = 0; i < n; ++i)
		cout << a[i].math << ' ' << a[i].en << ' ' << a[i].zn << ' ' << a[i].id << endl;
	return 0;
}
