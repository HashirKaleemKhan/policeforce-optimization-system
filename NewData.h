#ifndef NEWDATA_H
#define NEWDATA_H

#include<string>
#include<array>
#include<iostream>


using namespace std;

class NewData
{
	private:
		array<string,28> arr; // holds the records
		array<int,8> arr1; // holds the converted data
		array<int,28> arr2; // holds the sum score of 28 district
	
	public:
		void setarr(const array<string , 28> a); // to set arr
		virtual array<int,28> scoring(string m , string y);  // to first break , then convert and then score data
};

#endif
