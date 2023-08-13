#include<iostream>
#include<strings.h>
#include <istream>
#include<conio.h>
#include<cstdio>
using namespace std;
/*THE TOTAL STUDENTS ARE SET TO 5*/
int FEE=18000;
bool decision;
struct student
{
string name;
int unit,feepaid,admn;
}s[3];
struct room_booking
{
int roomNumber;	
}room[3];


int main(int argc, char** argv)
{

cout<<"WELCOME TO MY SCHOOL"<<endl;
cout<<"Kindly choose what you want to do"<<endl;
cout<<"1 . Register Student "<<endl;
cout<<"2. See Student Details"<<endl;
	int index;
cin>>index;
	if(index==1)
	{	
			cout<<"welcome ready to register? "<<endl;	
	
			for(int i=0;i<3;i++) // for loop for registering students which here are set to 5
			{	
			   cout<<"Enter your name: ";
			    cin>>s[i].name;	//storing the data from console and saving it to student structure
			cout<<"Enter Your Admission Number: ";
			cin>>s[i].admn;
				
				//for loop for registering units which are set to a total of 3 units
					for(int i=0;i<3;i++)
							{
								cout<<"Enter the unit code: ";
									cin>>s[i].unit;
							}
							cout<<endl<<"Unit Registration Completed successfully"<<endl;
							
				cout<<endl<<"Enter the Room Number: ";
				cin>>room[i].roomNumber;
				
				cout<<"Enter The Fees Paid; ";
				cin>>s[i].feepaid;
			cout<<"Fee Balance: "<<FEE-s[i].feepaid<<endl;
			cout<<"THANK YOU FOR REGISTERING"<<endl;
	   		}
	}
	cout<<"Do you want to go back? ";
	cin>>decision;
	if(decision="y")
	{	
cout<<endl;
	}
	else{
		return 0;
	}	
	
	if (index==2){
		int x;
	
		cout<<"Please Enter Your Admission Number: ";
		cin>>x;
		  	  	  	  if(x!=s[x].admn)
			   		   	{
			             cout<<"Student not found"<<endl;
		   	   	   	  	}
		   	   	   	  	else
								   {
									   	cout<<s[x].name<<"  "<<s[x].feepaid<<" "<<s[x].unit;
								   }
	}
	else
	{
	cout<<"Please Choose by typing between the above options"<<endl;	
	}
		goto *main;
	
		
			return 0;
}	
	


