#include<iostream>
#include<fstream>
#include<string>
#include"Filing.h"
#include<array>
#include<vector>
#include"NewData.h"
#include<conio.h>
#include"ExistingData.h"
#include"optimization.h"
#include"SearchRecords.h"

using namespace std;

const array <string,28> districts={"South","East","Malir","West","Central","Hyderabad","Matyari","T.A Yar","T.A Khan","Jamshoro","Dadu","Thatta","Sajawal","Badin","Mirpurkhas","Umerkot","Tharparker","Sukkur","Ghotki","Khairpur","Larkana","Shikapur","K.Shahdadkot","Jacobabad","Kashmore","S.B.Abad","Sanghar","N.Feroze"};
const array <string , 6> range={"Karachi","Hyderabad","Mirpurkhas","Sukkur","Larkana","S.B Abad"};
const array <string,8> crime={"Murder","Target Killing","Murder in Robery","Suicide Bombing","Highway Robery","Bank Robery","Car Snatching","Gang Rape"};

array<string , 28> file_input(string x, string y);
void Display(array <int, 28>);

int main()
{
	system("color 70");
	char x,z,h,q;
	string m,y;
	array <string,28> record;
	array <int , 28> scores;  //for newdata corrected
	NewData nd;
	double f;   //for optimization class (working well)
	array<int  , 28> res;
	
	
	do
	{
		
		cout<<endl<<"\n\n\t\t   =====POLICE OPTIMIZATION SYSTEM=====\n"<<endl;
	    cout<<"\t\t\t\xDB\xDB\xDB 1.Access Record    \xDB\xDB\xDB\n"<<endl<<"\t\t\t\xDB\xDB\xDB 2.Enter New Record \xDB\xDB\xDB\n"<<endl<<"\t\t\t\xDB\xDB\xDB 3.Exit Program     \xDB\xDB\xDB\n";
	  	x=getche();
	 
	    
		if(x=='1')
	    {
		     do
		     {
		     	system("cls");
		     	cout<<endl<<"\n\n\t\t\t=======ACCESS RECORDS========\n"<<endl;
				cout<<"\t\t\t\xDB\xDB\xDB 1.Search Records\t  \xDB\xDB\xDB\n"<<endl<<"\t\t\t\xDB\xDB\xDB 2.Optimize Records    \xDB\xDB\xDB\n"<<endl<<"\t\t\t\xDB\xDB\xDB 3.Return To Main Menu \xDB\xDB\xDB\n";	
		        z=getche();
		        system("cls");
		
		         if(z=='1')
		         {
					string m,y;       //|search|
					cout<<"Enter the Month: ";
					cin>>m;
					cout<<"Enter the Year: ";
					cin>>y;
					system("cls");
					SearchRecords s;
					s.setname(m,y);
					s.searching();

	
		         }
		         if(z=='2')
		         {
					 NewData *p = new ExistingData;
					 string m,y;
					 cout<<"Enter Month: ";
					 cin>>m;
					 cout<<"Enter Year: ";
					 cin>>y;
					 scores=p->scoring(m,y);
					 cout<<"Enter Force: ";
					 cin>>f;
					 optimization O(f);
				     O.set(scores);
					 res=O.optz();
					 system("cls");
					 Display(res);
	                 cout<<"-> Enter Any Key to Go to Previous Menu: ";
					 char c1;
					 c1=getche(); 
					 system("cls"); 
					 delete p;
					  
		         }
		     }while(z!='3');
	    }
	    if(x=='2')
	    {
				
		do
		{
		system("cls");
		cout<<endl<<"\n\n\t\t\t===========NEW RECORDS===========\n"<<endl;
		cout<<"\t\t\t\xDB\xDB\xDB 1.Add Record \t      \xDB\xDB\xDB\n"<<endl<<"\t\t\t\xDB\xDB\xDB 2.Return to Previous Menu \xDB\xDB\xDB\n"<<endl;
		h=getche();
		system("cls");
		
		if(h=='1')
		{
			   //|Add Data|creating file n returning array of records 
			string m,y;   
			cout<<"Enter Month: ";
			cin>>m;
			cout<<"Enter Year: ";
			cin>>y;
			system("cls");
			record = file_input(m,y);
			system("cls");
			cout<<"Do you want to Optimize the entered result?(Y/N)\n";
			cin>>q;
			system("cls");
			if(q=='Y' || q=='y')
			{
				
				nd.setarr(record);
				scores = nd.scoring(m,y);                       //|Optz new results|
				cout<<"Enter the Force"<<endl;
				cin>>f;
				optimization O(f);
				O.set(scores);
				res=O.optz();
				Display(res);
				cout<<"-> Press any key to go back";
				getche();
				
	
			}
			else
			{
			}


		}
		}while(h!='2');
	    }
	}while(x!='3'); 
	
	system("cls");
	cout<<"\n\n\n\t\tTHANK YOU FOR USING OUR APPLICATION";

}

array <string , 28> file_input(string x, string y)
{
	Filing a;
	array <string , 8> temp;
	array <string , 28> str;

		for(int i=0 ; i<28 ; i++)
	{
			if(i<=4)
		{
			cout<<"\n\n\t\t\t======="<<range[0]<<"======"<<endl;
		}
		else if(i>4 && i<=13)
		{
			cout<<"\n\n\t\t\t======="<<range[1]<<"======"<<endl;
		}
		
		else if(i>13 && i<=16)
		{
			cout<<"\n\n\t\t\t======="<<range[2]<<"======"<<endl;
		}
		
		
		else if(i>16 && i<=19)
		{
			cout<<"\n\n\t\t\t======="<<range[3]<<"======"<<endl;
		}
		
		else if(i>19 && i<=24)
		{
			cout<<"\n\n\t\t\t======="<<range[4]<<"======"<<endl;
		}
		
		else
		{
			cout<<"\n\n\t\t\t======="<<range[5]<<"======"<<endl;
		}
		
		cout<<"\n\t\t\t\xDB\xDB "<<districts[i]<<" District"<<" \xDB\xDB\n";

		for(int j=0 ; j<8 ; j++)
		{
			cout<<crime[j]<<": ";
			cin>>temp[j];
			cout<<endl;
			if(j==7)
			{
				str[i]=str[i]+temp[j];
			}
			else
			{
				str[i]=str[i]+temp[j]+" ";
			}
		}
		system("cls");
	}
	
	a.setrec(str);
	a.setname(x,y);
	a.data();
	return str;
}

void Display(array <int, 28> a)
{
	int j=1;
	for(int i=0;i<28;i++)
	{
		if(i==0)
		{
			cout<<"\t\t\t======KARACHI RANGE======\n\n";
			j=1;
		}
		else if(i==5)
		{
			cout<<"\t\t\t======HYDERABAD RANGE======\n\n";
			j=1;
		}
		
		else if(i==14)
		{
			cout<<"\t\t\t======MIRPURKHAS RANGE======\n\n";
			j=1;
		}
		
		else if(i==17)
		{
			cout<<"\t\t\t======SUKKUR RANGE======\n\n";
			j=1;
		}
		
		else if(i==20)
		{
			cout<<"\t\t\t======LARKANA RANGE======\n\n";
			j=1;
		}
		else if(i==25)
		{
			cout<<"\t\t\t======S.B.ABAD RANGE======\n\n";
			j=1;
		}
		else{}
		
		cout<<"\t\t\t\xDB\xDB "<<j<<". District "<<districts[i]<<": "<<a[i]<<"\n"<<endl;
		j++;
		
		
	}

}
