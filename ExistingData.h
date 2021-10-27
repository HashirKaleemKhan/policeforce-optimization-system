#include"Filing.h"
#include"NewData.h"

#include<iostream>
#include<string>

#include<array>

class ExistingData:public NewData,public Filing
{
	private:
		array<int,8> arr1; // holds the converted data
		array<int,28> arr2; // holds the sum score of 28 district
	
	public:
		void setname(string , string); // to make a file name
		array<int,28> scoring(string,string); // to first break , then convert and then score data
		
};
