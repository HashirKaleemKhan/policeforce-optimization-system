# policeforce-optimization-system

1. INTRODUCTION:
The following application is designed to do the work force division for Sindh police. Since law and order
situation is a common problem in every district of Sindh. Hence our application helps the head of the Sindh
police to get an approximate figure of how much force is to be sent to a particular district. Moreover, our
program also allows the user to access the previous records district wise for every range.

2. NEED OF THE PROJECT:
For more than two decades Sindh, specially the major cities of Sindh, is suffering from a growing wave of
crime. The reason for this is the improper division of police force along with no dynamic change in the
division of police force. As our police department does not have any structure to distribute the police force
with respect to crime rate. On the contrary, the department allocates the force on the basis of the size of the
district (which is an insufficient method). Hence a method is required to divide the force on the basis of
crime rates.

3. UNIQUENESS OF THE PROJECT:
The uniqueness of the project is actually the idea behind it. Since Pakistan is a developing country where
people and departments focus on criticizing instead of enhancing the level of technology and the methods
we are using. Likely, the police department of Sindh is also facing the same problems and is still using the
methods which were used centuries ago. Hence, the method of dividing police on the basis of crime rate
instead of area and the unavailability of such system in the department makes our project unique.

4. IMPLEMENTED CLASSES:
We have implemented the following class:
No. Class Purpose
1. Filing The purpose of this class is to:
 Create a file name.
 Create a file.
 Save data into that file.
2. ExistingData The purpose of this class is to:
 Get data from the file.
 To break the string of data.
 To score the data.
3. NewData The purpose of this class is to:
 Get data from the array.
 To break the string of data.
 To score the data.
4. Optimization The purpose of this class is to:
 To sum up the score.
 To produce work force division.
5. SearchRecords The purpose of this class is to:
 To take the data from file.
 To search the records.

7. ALGORITHM:
Our program takes monthly input of eight types of crime as input for twenty-eight districts of Sindh and then
the program optimizes the input and tells how many policemen should be send to a particular district. Or the
user can access the old records can view them or optimize them. To do so following steps are needed to be
followed:
Step 1. If the user is adding a new record then that record shall be saved, hence a class of name Filing is
needed. The following are methods with which the class saves the records are:
 Take month and year (m, y respectively) as input.
 Then with month, year and “.txt” create a name(n) for the file. n = m + y + ”.txt”.
 Then prompt the user to enter the data district by district for eight types of crimes (s1, s2, s3, s4, s5,
s6, s7, s8).
 Then the data in s1-s8 are transferred into a single string of an array using + operator.
str = s1+” ”+s2+” ”+s3+” ”+s4+” ”+s5+” ”+s6+” ”+s7+” ”+s8
 Then use object of ofstream to save the input data, which is in an array, into a file with name created
above.
Step 2. After the user has entered the data and the file has been created, the user is provided with an option
to optimize the input. To optimize the new input firstly we have to create a class name NewData which will
break the data, convert it into int type from string type and score it for optimization. The following are
methods with which the record can be broken and scored are:
 Firstly, take a string from the array in which data is saved. Then break that string into eight substrings using substr() and find_first_of().
 After the data is broken into eight sub-strings(ss1-8), and use stoi() to convert the data into int type.
 Then to score the data multiply the first three sub-strings by four then forth one with six and the
other with two.
 Ultimately, add up all the multiplied integers and save it into another array(intarr).
Hence, a single district has been scored, then takes the other string from the array and scores it.
Step 3. Now in order perform work force division, we have to create a class name Optimization. The
following are methods which this class will use to produce work force division:
 Firstly, input the strength of work force(f)
 Then add up the complete array into a int type variable (sum).
 Then one by one divide every member of the array with the sum and multiply it with work force
into another array (Res). Res[position] = ( intarr[position]/sum ) * f
 Hence display the results on the console.
Step 4. However if the user wants to optimize already existing records then create a class, name
ExistingData, derived from Filing and NewData as base classes. Hence this class will have features of both base classes and will use them to produce the same results as NewData. However the only difference
between NewData and this class is that instead of taking data from an array the ExistingData takes data
from the file created by Filing class.
Step 5. At last, if the user wants to search the existing data then we have to create another class, name
SearchRecords, derived from filing as base class. In order to search data with this class following steps are
to be taken:
 Break every string taken from the file into eight in the same way as done in NewData.
 Then as per the user selected option print the records on the console. 
