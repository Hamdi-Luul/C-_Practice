#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){

string pass;
cout<<"enter password : ";
cin>>pass;
//declaring variables
int sub1,sub2,sub3;
double total,average;
char grade;
total=0.0;
average=0.0;
//user check
if(pass=="123"){
//get subjects
do{
	cout<<"\nenter sub1: ";
cin>>sub1;
cout<<"\nenter sub2:" ;
cin>>sub2;
cout<<"\nenter sub3:" ;
cin>>sub3;
//check subjects
if((sub1 <=100)&&(sub1>=0)&& (sub2 <=100)&&(sub2>=0)&&(sub3 <=100)&&(sub3>=0)){
//perfom calculations
total=sub1+sub2+sub3;
average=total/3;
//check average

if(average >=90)
grade='A';

else if(average >=80)
grade='B';

else if(average >=70)
grade='C';
  
else if(average >=60)
grade='D';

else
grade='F';

//display
cout<<"\n";
cout<<"Student Results";
cout<<"\n----------------------------------------------------------------";
cout<<"\n\n";
cout<<left 
    <<setw(10)<<"Sub1"
    <<setw(10)<<"Sub2"
    <<setw(10)<<"Sub3"
    <<setw(10)<<"Total"
    <<setw(12)<<"Average"
    <<"Grade"<<endl;

cout<<fixed <<setprecision(1);
cout<<"\n--------------------------------------------";
cout<<"\n\n";
cout<<left 
    
    <<setw(10)<<sub1
    <<setw(10)<<sub2
    <<setw(10)<<sub3
    <<setw(10)<<total
    <<setw(12)<<average
    
    <<grade <<endl;
}else{
	cout<<"marks must be between 0-100";
}
cout<<"\nDo you want to reapeat again (y/n): ";
}while(getche()=='y');


}else{
cout<<"wrong password...!";
}
return 0;

}
