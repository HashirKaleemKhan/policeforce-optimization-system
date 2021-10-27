#include<iostream>
#include<string>

#include<array>

#include"NewData.h"

using namespace std;

void NewData::setarr(const array<string , 28> a)
{
	for(int i=0; i<28;i++)
	{
		arr[i]=a[i];
	}
}

array<int,28> NewData::scoring(string m , string y)
{
	int counter=0;
	string str;
	string temp;
	int pos1 , pos2,a,b;
	
	for(int i=0 ; i<28 ; i++) // Sets the arr2 to 0
	{
		arr2[i]=0;
	}
		
	for(int k=0 ; k<28  ; k++)
	{
		str=arr[k]; // copies the record of a district to manipulate
		
	   for(int i=0 ; i<8 ; i++) // loop to break string into sub-string and convert it from string type to integer type
	   {
		  pos1=str.find_first_of(' ');
		  pos2=str.find_first_of("0123456789");
		
		  if(pos1!=string::npos)
		  {
		     temp=str.substr(pos2 , pos1);
		     str.erase(pos2,pos1+1);
		     a=stoi(temp);
		     arr1[i]=a;
		  }
		  else
		  {
		  	temp=str;
		  	b=stoi(temp);
		  	arr1[i]=b;
		  }	
	   }
	   		for(int j=0;j<8;j++) // to score the data
	   		{
	   			switch(j)
	   			{
	   				case 0:
	   					arr2[counter]+=arr1[j]*4;
	   					break;
	   				case 1:
	   					arr2[counter]+=arr1[j]*4;
	   					break;
				   	case 2:
	   					arr2[counter]+=arr1[j]*4;
	   					break;
				   	case 3:
	   					arr2[counter]+=arr1[j]*6;
	   					break;
				   	case 4:
	   					arr2[counter]+=arr1[j]*2;
	   					break;
					case 5:
	   					arr2[counter]+=arr1[j]*2;
	   					break;
	   				case 6:
	   					arr2[counter]+=arr1[j]*2;
	   					break;
					case 7:
	   					arr2[counter]+=arr1[j]*2;
	   					break;	   	
	   				default:
	   					break;
				}
			}
			counter++;
    }
	return arr2;
}

