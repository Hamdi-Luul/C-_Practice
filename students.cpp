#include <iostream>
#include <conio.h>
//#include <iomanip.h>
using namespace std;

int main(){
	//declaring variavles
	double total[4],average;
	char grade;
	total[4]=0.0;
	average=0.0;
	int i;
	string password,username;
	
	//subjects scors
	int id[]={100,110,120,130};
	int opp[]={90,20,45,89};
	int math[]={39,50,100,76};
	int database[]={100,40,90,99};
	int web[]={70,67,98,20};
	//check username and password
	do{
		cout<<"Enter your Username: ";
	   cin>>username;
	   cout<<"Enter your Password: ";
	   cin>>password;
	//if((password=="alexi11")&&(username=="alex")){
	
	
	//}
		cout<<"incorrect password and username try again....!";
	}while((password !="alexi11") && (username!="alex"));
	cout<<"\n\n";
	
	cout<<"ID\tOpp\tMath\tDB\tWeb \tTotal \tAverage Grade";
	cout<<"\n------------------------------------------------------------";
	cout<<"\n\n";
	//looping subjects
	for(i=0; i< 4;i++){
		//calculating total and average
		total[i]=opp[i]+math[i]+ database[i]+web[i];
		average=total[i]/4;
		//checking grades
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
		//display resultes
		cout<<id[i]<<"\t"<<opp[i]<<"\t"<<math[i]<<"\t"<<database[i]<<"\t"<<web[i]<<"\t"<<total[i]<<"\t"<<average<<"\t"<<grade<<endl;
		
	}
	cout<<"\n--------------------------------------------";
	//hiegest and lowest 

	//hiehgest
	double hihgest=total[0];
	for(i=0;i<4;i++){
		if(hihgest < total[i]){
			hihgest=total[i];
		}	
	}
	//diplay hihest score
	cout<<"\nHiehest Score:" <<hihgest;
	//lowest
	double lowest=total[0];
	for(i=0;i<4;i++){
		if(lowest > total[i]){
			lowest=total[i];
			
		}
	}
	//display lowest score
	cout<<"\nLowest Score: "<<lowest;
			
	return 0;
}
