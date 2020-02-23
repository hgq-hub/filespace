#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> printVertically(string s) {
        int i,j=0,n=0,m,spaces=0;
        vector<string> str;
        for(i=0;i<s.length();++i){
            if(s[i]==' '){
                m=max(m,n);
                n=0;
                ++j;
                ++spaces;
                str.push_back('');
            }
            else {
                str[j].insert(n,s[i]);
                ++n;
            }
        }
        for(i=0;i<str.size();++i){
        	cout<<str[i];
		} 
        m=max(m,n);
        vector<string> val(m,'');
        int top[m]={0};
    }
};
int main(){
	string s="how are you doing";
	Solution.printVertically(s);
	return 0;
}
