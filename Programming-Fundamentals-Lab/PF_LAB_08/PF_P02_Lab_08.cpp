#include<iostream>

using namespace std ;

void Addition(int a, int b);

void Multiplication(int a, int b);

void Table(int a);

void Square(int a);


int main ()

{
    
	int a,b;
    
	cout<<" Enter The value of a and b"<<endl;
    
	cin>> a>>b;
    
	cout<<"The Sum of "<<a<<" and "<<b<<" is ";
    
	Addition(a,b);
    
	cout<<endl;
    
	cout<<"The Multiplication of "<<a<<" and "<<b<<" is "; 
    
	Multiplication(a,b);
    
	cout<<endl;
    
	cout<<"Table"<<endl;
    
	Table(a);
    
	cout<<endl;
    
	cout<<"The Square of a = ";
    
	Square(a);
    
return 0;

}


void Addition(int a, int b)

{
    
	int Addition;
    
	Addition= a+b;
    
	cout<<Addition<<endl;

}


void Multiplication(int a, int b)

{
    
	int Multiplication;
    
	Multiplication = a*b;
    
	cout<<Multiplication<<endl;

}


void Table(int a)

{
    
	int i;
    
	for(i=1; i<=10;i++)
    
	{
        
		cout<<a<<" * "<<i<<" = " <<a*i<<endl;
    
	}

}


void Square(int a)

{
    
	int c;
    
	c = a*a;
    
	cout<<c<<endl;

}
 







