#include <iostream>
#include <conio.h>
/*
<iomanip> stands for Input/Output Manipulation. 
It is a standard C++ library header file
 that gives you tools to control 
 how your data looks when you print it to the screen.
 What does it do for you?
 it provides two key "manipulators"
 *fixed: Forces the computer to display numbers in normal decimal
  format (e.g., 9.9) instead of scientific format.
 *setprecision(1): Tells the computer exactly 
 how many numbers to show after the decimal point.

*/
#include <iomanip>
using namespace std;
int main(){
	//password
	string pass;
	//declare variables
	int sub1,sub2,sub3;
	double total, average;
	total=0.0;
	average=0.0;
	char grade;
	
	cout<<"Enter your password: ";
	cin>>pass;
	if(pass=="hamdi123"){
		do{
			//subjects inputs
			cout<<"\nEnter subject 1: ";
			cin>>sub1;
			cout<<"\nEnter subject 2: ";
			cin>>sub2;
			cout<<"\nEnter subject 3: ";
			cin>>sub3;
			
			//check subjects
			if((sub1<=100)&&(sub1>=0)&&(sub2<=100)
			&&(sub2>=0)&&(sub3<=100)&&(sub3>=0)){
				//calculate total and average
				total=sub1+sub2+sub3;
			   average=total/3;
			   //check average
			   if(average>=90)
			   grade='A';
			   else if(average>=80)
			   grade='B';
			   else if(average>=70)
			   grade='C';
			   else if(average>=60)
			   grade='D';
			   else
			   grade='F';
			   //display results
			   cout<<"\n------------Student Results--------\n";
			   cout<<"\n\n";
			   //cout<<"\nS1\tS2\tS3\tTotal\tAverage\tGrade\n______________________________________________";
			   //cout<<"\n"<<sub1<<"\t"<<sub2<<"\t"<<sub3<<"\t"<<fixed<<setprecision(1)<<total<<"\t"<<average<<"\t"<< grade<<"\t";
			   /*
			   setw is a stream manipulator used to set the field width (the minimum number of characters)
				 for the next input or output operation.
				 * The name stands for "set width", and it is primarily used to align columns
				  and format text cleanly in the console.
				  #It is mainly used to align columns and make tables look neat(clean).
				
				*/
			   cout<<left
			   <<setw(10)<<"S1"
			   <<setw(10)<<"S2"
			   <<setw(10)<<"S3"
			   <<setw(12)<<"Total"
			   <<setw(12)<<"Average"
			   <<"Grade"<<endl;
			   cout << "-------------------------------------------------------------" << endl;
			   cout<<fixed<<setprecision(1);
			   cout<<left
			   <<setw(10)<<sub1
			   <<setw(10)<<sub2
			   <<setw(10)<<sub3
			   <<setw(12)<<total
			   <<setw(12)<<average
			   <<grade<<endl;
				
			}
			cout<<"\n\n";
			cout<<"\nDo you want to repeat again......(Y/N): ";
			
		}while(getche()=='y');
	}else{
		cout<<"wrong password......!";
	}
	

	return 0;
}
