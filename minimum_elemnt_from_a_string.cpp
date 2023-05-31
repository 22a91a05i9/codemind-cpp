#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char c2;
	int c=0;
	getline(cin,s);
	int min=0,mi=999;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			break;
		}
		if(s[i]!=' '){
			//cout<<(int)s[i];
		if(mi>s[i]) mi=s[i];}
		//cout<<mi;
	}
	if(mi<97) { c2=mi;
	mi+=32;}
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			break;
		}
		if(s[i]==mi){
			//cout<<(int)s[i];
			cout<<s[i];
		   c=1;
			break;}
	}
	if(c==0) cout<<c2;



}
