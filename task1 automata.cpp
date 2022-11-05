#include<iostream>
#include<string.h>
using namespace std;
void code(){

       string st;
		
		{
			cout<<"enter string"<<endl;
			cin>>st;
			
			int coun1;
			int coun2;
			for(int i=0;  i<st.length();   i++)
			{
				if(st[i]=='1')
		{
						coun1++;
				}
		if(st[i]=='1')
		{
		
			coun2++;
				}
			}
			
			if(coun1%2==0  ||  coun2%2==0)
			{
				cout<<"string is correct:"<<endl;
			}
			else 
			{
				cout<<"string is incorrect:"<<endl;
			}
		}
		
}
int main()
{
	code();
}
