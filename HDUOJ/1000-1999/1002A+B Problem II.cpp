/*
 * @Author: oneboyi
 * @Date: 2021-11-23 16:38:18
 * @LastEditTime: 2021-11-28 20:52:30
 * @LastEditors: oneboyi
 */
#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
using namespace std;
string a,b;
int t1[1005],t2[1005];
int s[1005];
int main(void)
{
	int i,j,j1,j2,j3,k,t,x;
	int l1,l2,l3;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		memset(t1,0,sizeof(t1));
		memset(t2,0,sizeof(t2));
		memset(s,0,sizeof(s));
		cin>>a>>b;
		l1=a.size();
		l2=b.size();
		for(j1=0;j1<l1;j1++)
		{
			t1[l1-j1]=a[j1]-'0';
		}
		for(j2=0;j2<l2;j2++)
		{
			t2[l2-j2]=b[j2]-'0';
		}
		k=1;
		x=0;
		while((k<=l1)||(k<=l2))
		{
			s[k]=t1[k]+t2[k]+x;
			x=s[k]/10;
			s[k]%=10;
			k++;
		}
		s[k]=x;
		cout<<"Case "<<i<<":"<<endl;
		cout<<a<<" + "<<b<<" = ";
		if(s[k]==0) k--;
		for(j3=k;j3>=1;j3--)
		cout<<s[j3];
		cout<<endl;
		if(i!=t)cout<<endl;
	}
	return 0;
}
