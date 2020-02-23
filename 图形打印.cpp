#include<iostream>
using namespace std;

int main(){
	int i,j,k,n,r,s;
	cin>>n;
	char **t=new char*[4*n+5];
	for(i=0;i<4*n+5;++i){	//矩阵创建 
		t[i]=new char[4*n+5];
		for(j=0;j<4*n+5;++j)//初始化全为'.' 
			t[i][j]='.';
	}
	/*for(i=0;i<4*n+5;++i)	//初始化全为'.' 
		for(j=0;j<4*n+5;++j)
			t[i][j]='.'; */
	for(i=2*n+2,k=0;i<4*n+5;++i,k++){
		if(k<3){	//创建中心十字 
			t[i][i-k]='$';
			t[i-2*k][i-k]='$';
			t[i-k][i]='$';
			t[i-k][i-2*k]='$';		
		}
		else if(k%2==0){
			for(r=0;r<3;r++){	//创建内拐角
				t[i-2*k+2][i-2+r]='$';
				t[i-2][i-2+r]='$';
				t[i-2*k+2-r][i-2]='$';
				t[i-2+r][i-2]='$';
				t[i-2*k+2][i-2*k+2-r]='$';
				t[i-2][i-2*k+2-r]='$';
				t[i-2*k+2-r][i-2*k+2]='$';
				t[i-2+r][i-2*k+2]='$';
				if(r==2)
					for(s=1;s<=k-2;s++){	//连接边线 
						t[i-2*k][i-2-s]='$';
						t[i][i-2-s]='$';
						t[i-2*k+2+s][i]='$';
						t[i-2-s][i]='$';
						t[i-2*k+2+s][i-2*k]='$';
						t[i][i-2*k+2+s]='$';
						t[i-2*k][i-2*k+2+s]='$';
						t[i-2-s][i-2*k]='$';
					} 
			}
		}
	}
	for(i=0;i<4*n+5;++i){	//打印图形 
		for(j=0;j<4*n+5;++j)
			cout<<t[i][j];
		cout<<endl; 
	}
	delete[] t;
	return 0;
}
