#ifndef FILING_H
#define FILING_H

#include<fstream>
#include<string>
#include<array>
using namespace std;


class Filing
{
    private:
		string month; //Takes month from user
		string year;  //Takes year from user 
		array<string , 28> record;  //to hold records
	public:
		string name;  // to make a file name
		void setrec(const array<string , 28>); // set the array will records from main
		void setname(string,string); // creates a name for file using month and year
		void data(); // creates the file and save data in it
};

#endif
