#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){

int id[]={100,200, 300};
int oop[]={24,56,78};
int math[]={90,67,34};
int web[]={100,26,87};

double total[3];
double average[3];

int i;
char grade;

//titles

cout<<"\nSTUDENTS RESULT SUMMARY";

cout<<"\n--------------------------------------------------------\n";
cout<<"\n";
cout<<"ID"<<"\t"
 <<"OPP"<<"\t"
 <<"MATH"<<"\t"
 <<"WEB"<<"\t"
 <<"Total"<<"\t"
 <<"Average"<<"\t" 
 <<"Grade\n";

cout<<"\n--------------------------------------------------------";
for(i=0; i<=2;i++){
total[i]=oop[i]+math[i]+web[i];
average[i]=total[i]/3;
//check grade
if(average[i]>= 90)
grade='A';

else if(average[i]>= 80)
grade='B';

else if(average[i]>= 70)
grade='C';
else if(average[i]>= 60)
grade='D';

else 
grade='F';

cout<<"\n"<<id[i]<<"\t"
   <<oop[i]<<"\t"
   <<math[i]<<"\t"
   <<web[i]<<"\t"
   
   << fixed <<setprecision(1)
   
   <<total[i]<<"\t"
	<<average[i]<<"\t"
	<<grade<<"\n";
}

//hihgest student 
double highest = total[0];
double lowest = total[0];
for(i=0; i <=2; i++){

if(total[i] > highest){
highest=total[i];
}
}
cout<<"\nHihgest student: " <<highest;

cout<<"\n";
//lowest student

for(i=0; i<=2; i++){
if(total[i] < lowest){
lowest=total[i];
}

}
cout<<"\nLowest student: " <<lowest;

return 0;
}

