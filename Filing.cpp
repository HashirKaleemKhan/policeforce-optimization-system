#include"Filing.h"
#include<iostream>

using namespace std;

void Filing::setrec(const array<string , 28> a)
{
 
 for(int i=0 ;i<28 ; i++)
 {
 	record[i]=a[i];
 }

}

void Filing::setname(string m,string y)
{
	string str;
	month =m;
	year=y;
	str+=month;
	str+=year;
	str+=".txt";
	name=str;
	
}
void Filing::data()
{
	ofstream fout;
	fout.open(name);
	
	for(int i=0 ; i<28 ; i++)
	{
		if(i==27)
		{
			fout<<record[i];
		}
		else
		{
			fout<<record[i]<<"\n";
		}
	}
}
