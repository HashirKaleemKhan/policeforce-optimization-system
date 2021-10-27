#include"optimization.h"
#include<iostream>
#include<array>

using namespace std;

array <string,28> key = {"South","East","Malir","West","Central","Hyderabad","Matyari","T.A Yar","T.A Khan","Jamshoro","Dadu","Thatta","Sajawal","Badin","Mirpurkhas","Umerkot","Tharparker","Sukkur","Ghotki","Khairpur","Larkana","Shikapur","Kamber Shahdadkot","Jacobabad","Kashmore","S.B.Abad","Sanghar","N.Feroze"};

optimization::optimization(double f):force(f){}

void optimization::set(const array<int,28> a)
{
	for(int i=0;i<28;i++)
	{
		arr2[i]=a[i];
	}
}

array <int,28> optimization::optz()
{
	double sum=0;
	for(int i=0;i<28;i++)
	{
		sum+=arr2[i];
	
	}
	for(int i=0;i<28;i++)
	{
		
		double temp=(arr2[i]/sum)*force;
		output[i]=temp;
	}
	return output;

}

