//This is the login branch created
//created by Dinaol Tadesse
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Login Form

//This program will check if a number is an IP address or not
int main() 
{
	long a,b,c,d;
	string smt;
	string smt1,new1,smt2,new2,smt3,new3,smt4;
	long x,y,z;
	cout<<"please input the IP Address to check if it is: \n";
	getline(cin,smt);
	x=smt.find('.');
	smt1=smt.substr(0,x);
	new1=smt.substr(x+1,smt.length());
	y=new1.find('.');
	smt2=new1.substr(0,y);
	new2=new1.substr(y+1,new1.length());
	z=new2.find('.');
	smt3=new2.substr(0,z);
	new3=new2.substr(z+1,new2.length());
	smt4=new3.substr(0,new3.length());
	if(stringstream(smt1)>>a){
		stringstream(smt1)>>a;
		}
	else
	{
		cout<<"This is invalid\n";
		return 1;
	}
	if(stringstream(smt2)>>b){
		stringstream(smt2)>>b;
		}
	else
	{
		cout<<"This is invalid\n";
		return 1;
	}
	if(stringstream(smt3)>>c){
		stringstream(smt3)>>c;
		}
	else
	{
		cout<<"This is invalid\n";
		return 1;
	}
	if(stringstream(smt4)>>d){
		stringstream(smt4)>>d;
		}
	else
	{
		cout<<"This is invalid\n";
		return 1;
	}
	
if((a>=0&&a<=255)&&(b>=0&&b<=255)&&(c>=0&&c<=255)&&(d>=0&&d<=255))
{
    cout<<"This is a Valid IP Address\n";
}
else
{
    cout<<"This IP Address is Invalid\n";
}
	
	
	return 0;
}
