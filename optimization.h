#ifndef OPTIMIZATION_H
#define OPTIMIZATION_H

#include<array>


using namespace std;

class optimization
{
	private:
		double force; // work force strength.
		array<int,28> arr2; // contains/hold scored data of district.
		array<int ,28> output; //hold the output results.
	
	public:
		optimization(double); // parameterize constructor to set force. 
		void set(const array<int,28>); // sets the scored array.
		array<int , 28> optz(); // for optimizing the scored data.
};

#endif
