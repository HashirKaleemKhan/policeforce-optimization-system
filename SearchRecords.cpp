#include"SearchRecords.h"
#include<iostream>
#include<array>
#include<fstream>
#include<conio.h>

array <string,28> dis={"South","East","Malir","West","Central","Hyderabad","Matyari","T.A Yar","T.A Khan","Jamshoro","Dadu","Thatta","Sajawal","Badin","Mirpurkhas","Umerkot","Tharparker","Sukkur","Ghotki","Khairpur","Larkana","Shikapur","K.Shahdad","Jacobabad","Kashmore","S.B.Abad","Sanghar","N.Feroze"};
array <string,8> crime={"Murder","Target Killing","Murder in Robery","Suicide Bombing","Highway Robery","Bank Robery","Car Snatching","Gang Rape"};

using namespace std;

void SearchRecords::setname(string m,string y)
{
	Filing::setname(m,y);
}

void SearchRecords::breaking(string str)
{
	array<string , 8> hold;
	int pos1=0,pos2=0;
	
	for(int i=0 ; i<8 ; i++)
	{
		pos1=str.find_first_of("0123456789");
		pos2=str.find_first_of(" ");
		hold[i]=str.substr(pos1,pos2);
		str.erase(pos1,pos2+1);
		cout<<i+1<<"."<<crime[i]<<":  "<<hold[i]<<"\n"<<endl;
	}
}

void SearchRecords::searching()
{
	char d,option1,option2,option3,option4,option5,option6,option7;
	ifstream fin;
	fin.open(name);
	array<string , 28> rec;
	for(int i=0 ; i<28 ;i++)
	{
		getline(fin,rec[i]);
	}
   do
   {
   cout<<"\n\n\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB SEARCH RECORDS \xDB\xDB\xDB\xDB\xDB\xDB\n"<<endl;
   cout<<"\n\n\t\t\t\xDB\xDB 1.Karachi Range \t\t\xDB\xDB\n"<<endl;
   cout<<"\t\t\t\xDB\xDB 2.Hyderabad Range \t\t\xDB\xDB\n"<<endl;
   cout<<"\t\t\t\xDB\xDB 3.Mirpurkhas Range \t\t\xDB\xDB\n"<<endl;
   cout<<"\t\t\t\xDB\xDB 4.Sukkur Range \t\t\xDB\xDB\n"<<endl;
   cout<<"\t\t\t\xDB\xDB 5.Larkana Range \t\t\xDB\xDB\n"<<endl;
   cout<<"\t\t\t\xDB\xDB 6.S.B.Abad Range \t\t\xDB\xDB\n"<<endl;
   cout<<"\t\t\t\xDB\xDB 7.Return to previous Menu    \xDB\xDB\n"<<endl;
   option1=getche();
   system("cls");
   if(option1=='1')
   {
	do
	{

   	cout<<"\n\n\t\t\t\xDB\xDB 1.South District   \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 2.East District    \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 3.Malir District   \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 4.West District    \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 5.Central District \xDB\xDB\n"<<endl;
	cout<<"\t\t\t\xDB\xDB 6.Return to Ranges \xDB\xDB\n"<<endl;
    option2=getche();
    system("cls");
    cout<<"\n\n\t\t\t======Karachi Range======\n"<<endl;
    switch(option2)
    {
    	case '1':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[0]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[0]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
	
    			break;
			}
		case '2':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[1]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[1]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '3':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[2]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[2]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '4':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[3]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[3]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    		  break;
			}
		case '5':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[4]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[4]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    		  break;	
			}
		default:
		break;
		
	}
	if(d=='n' || d=='N')
	{
		system("cls");
		break; 
	}
	}while(option2!='6');
   	system("cls");
   }
   else if(option1=='2')
   {
	do
	{
   	cout<<"\n\n\t\t\t\xDB\xDB 1.Hyderabad District     \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 2.Matyari District       \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 3.T.A Yar District       \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 4.T.A Khan District      \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 5.Jamshoro District      \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 6.Dadu District          \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 7.Thatta District        \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 8.Sajawal District       \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 9.Badin District         \xDB\xDB\n"<<endl;
	cout<<"\t\t\t\xDB\xDB 0.Return to Ranges       \xDB\xDB\n"<<endl;
    option3=getche();
    system("cls");
	cout<<"\n\n\t\t\t======Hyderabad Range======\n"<<endl;
    switch(option3)
    {
    	case '1':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[5]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[5]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '2':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[6]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[6]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '3':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[7]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[7]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '4':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[8]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[8]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    		  break;
			}
		case '5':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[9]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[9]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    		  break;
			}
			case '6':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[10]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[10]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '7':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[11]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[11]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '8':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[12]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[12]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    		  break;
			}
		case '9':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[13]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[13]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
				break;
			}
		default:
		break; 					
   }
   if(d=='n' || d=='N')
	{
		system("cls");
		break; 
	}
	}while(option3!='0');
	system("cls");
  }
   else if(option1=='3')
   {
	do
	{
   	cout<<"\n\n\t\t\t\xDB\xDB 1.Mirpurkhas District \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 2.Umerkot District    \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 3.Tharparker District \xDB\xDB\n"<<endl;
	cout<<"\t\t\t\xDB\xDB 4.Return to Ranges    \xDB\xDB\n"<<endl;
    option4=getche();
    system("cls");
	cout<<"\n\n\t\t\t======Mirpurkhar Range======\n"<<endl;
    switch(option4)
    {
    	case '1':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[14]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[14]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '2':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[15]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[15]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '3':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[16]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[16]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
			   default:
		       break; 					
   }
	if(d=='n' || d=='N')
	{
		system("cls");
		break; 
	}
	}while(option4!='4');
		system("cls");
   }
   else if(option1=='4')
   {
	do
	{
   	cout<<"\n\n\t\t\t\xDB\xDB 1.Sukkur District   \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 2.Ghotki District   \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 3.Khairpur District \xDB\xDB\n"<<endl; 
	cout<<"\t\t\t\xDB\xDB 4.Return to Ranges  \xDB\xDB\n"<<endl;
    option5=getche();
    system("cls");
	cout<<"\n\n\t\t\t======Sukkar Range======\n"<<endl;
    switch(option5)
    {
    	case '1':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[17]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[17]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '2':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[18]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[18]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '3':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[19]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[19]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
			   default:
		       break; 					
   }
	if(d=='n' || d=='N')
	{
		system("cls");
		break; 
	}
	}while(option5!='4');
	system("cls");
   }
   else if(option1=='5')
   {
	do
	{
   	cout<<"\n\n\t\t\t\xDB\xDB 1.Larkana District   \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 2.Shikapur District  \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 3.K.Shahdad District \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 4.Jacobabad District \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 5.Kashmore District  \xDB\xDB\n"<<endl;
	cout<<"\t\t\t\xDB\xDB 6.Return to Ranges   \xDB\xDB\n"<<endl;
    option6=getche();
    system("cls");
	cout<<"\n\n\t\t\t======Larkana Range======\n"<<endl;
    switch(option6)
    {
    	case '1':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[20]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[20]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '2':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[21]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[21]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '3':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[22]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[22]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '4':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[23]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[23]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '5':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[24]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[24]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
			   default:
		       break; 					
   }
	if(d=='n' || d=='N')
	{
		system("cls");
		break; 
	}
	}while(option6!='6');
	system("cls");
   }
   else if(option1=='6')
   {
	do
	{
   	cout<<"\n\n\t\t\t\xDB\xDB 1.S.B.Abad District \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 2.Sanghar District  \xDB\xDB\n"<<endl;
   	cout<<"\t\t\t\xDB\xDB 3.N.Feroze District \xDB\xDB\n"<<endl;
	cout<<"\t\t\t\xDB\xDB 4.Return to Ranges  \xDB\xDB\n"<<endl;
    option7=getche();
    system("cls");
	cout<<"\n\n\t\t\t======S.B.Abad Range======\n"<<endl;
    switch(option7)
    {
    	case '1':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[25]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[25]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '2':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[26]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[26]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
		case '3':
    		{
    			cout<<"\t\t\t\xDB\xDB "<<dis[27]<<" District \xDB\xDB\n";
    			SearchRecords::breaking(rec[27]);
				cout<<"Do you want to search the Record of another district of this Range (Y/N)\n";
				cin>>d;
				if(d=='y' || d=='Y')
				{
					system("cls");
				}
    			break;
			}
			   default:
		       break; 					
   }
	if(d=='n' || d=='N')
	{
		system("cls");
		break; 
	}
	}while(option7!='4');
	system("cls");
   }
   else{}
   }while(option1!='7');
}
