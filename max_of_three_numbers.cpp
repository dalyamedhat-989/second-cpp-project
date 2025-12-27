// Project: Max of Three Numbers
// Description: This program asks the user to enter three numbers
// and prints the largest number among them.
// Language: C++

#include<iostream>
using namespace std;
int main()
{
	int a;  //declaration
	int b;  // declaration  
	int c;  // declaration
	cout<<"Please enter the first number"<<endl; //asking for the first number
	cin>>a;       // the user enters the value of the first integer
	cout<<"----------------------\n";
	cout<<"Please enter the second number "<<endl; //asking for the second number
	cin>>b;       // the user enters the value of the second integer
	cout<<"----------------------\n";
	cout<<"Please enter the third number"<<endl; // asking for the third number
	cin>>c;       //the user enters the value of the third integer
	cout<<"----------------------\n";
	
	// checking if the first number is the largest 
	if(a>=b && a>=c)
	{
	cout<<"The largest number is:"<< a<<endl; 
	}
	
	//checking if the second number is the largest 
	else if(b>=a && b>=c)
	{
	cout<<"The largest number is:"<<b<<endl;
	}
	  ////checking if the third number is the largest 
	  else
	  {
	  	cout<<"The largest number is:"<<c<<endl;
	  }
	
	cout << "----------------------" << endl;
    cout << "Thank you for using our program. Have a great day!" << endl;
    cout << "----------------------" << endl;
    
	cout << "Press Enter to exit...";
	cin.ignore();
	cin.get();

return 0;

	return 0;
}
