#include"Filing.h"
#include"NewData.h"
#include"ExistingData.h"


#include<iostream>
#include<fstream>
#include<string>

#include<array>


void ExistingData::setname(string m,string y)
	{
		Filing::setname(m,y);
	
	}
	
	array<int,28> ExistingData::scoring(string m,string y)
	{
		ExistingData::setname(m,y);
		int counter=0;
		ifstream fin;
		fin.open(name);
		string str;
		string temp;
		int pos1 , pos2,a,b;
		for(int i=0;i<28;i++)
		{
			arr2[i]=0;
		}
		
		while(getline(fin,str)) // copies the record of a district to from file to str.
	    {
		
	     for(int i=0 ; i<8 ; i++) // loop to break string into sub-string and convert it from string type to integer type
	     {
		  pos1=str.find_first_of(' ');
		  pos2=str.find_first_of("0123456789");
		
		  if(pos1!=string::npos)
		  {
		     temp=str.substr(pos2 , pos1);
		     str.erase(pos2,pos1);
		     pos1=str.find_first_of(' ');
		     pos2=str.find_first_of("0123456789");
		     str.erase(pos1,pos2);
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
	   					{arr2[counter]+=arr1[j]*4;
						break;}
	   				case 1:
	   					{arr2[counter]+=arr1[j]*4;
						break;}
				   	case 2:
	   					{arr2[counter]+=arr1[j]*4;
						break;}
				   	case 3:
	   					{arr2[counter]+=arr1[j]*6;
						break;}
				   	case 4:
	   					{arr2[counter]+=arr1[j]*2;
						break;}
					case 5:
	   					{arr2[counter]+=arr1[j]*2;
						break;}
	   				case 6:
	   					{arr2[counter]+=arr1[j]*2;
						break;}
					case 7:
	   					{arr2[counter]+=arr1[j]*2;
						break;}	   	
	   				default:
	   					break;
				}
			}
			counter++;
	}
	return arr2;
	}
