#include<iostream>

using namespace std;

int main()

{
    
	int A,B,C,D;
    
	double min,total_amt;
    
	cout<<"Select The Package which you have puchased"<<endl;
    
	cout<<"For Package A Press 1"<<endl<<"For Package B Press 2"<<endl<<"For Package C Press 3"<<endl;
    
	cin>>D;
    
	if(D==1) 
    
	{
       
		cout<<"Enter the number of minutes used ";
       
		cin>>min;
       
		double min_A,amt_month;
       
		amt_month=39.99;
       
		min_A=amt_month/450;
       
		if(min<=450)
       
		{
           
			total_amt=min*min_A;
           
			cout<<"Total Amount due is $ "<<total_amt;
       
		}
       
		else if(min>450&&min<900)
       
		{
          
			int x;
          
			x=450;
          
			min=min-450;
          
			min=min*0.45;
          
			total_amt=min+39.99;
          
			cout<<"Total Amount due is $ "<<total_amt;
       
		}
    
	}
    
	else if(D==2) 
    
	{
       
		cout<<"Enter the number of minutes used ";
       
		cin>>min;
       
		double min_A,amt_month;
       
		amt_month=59.99;
       
		min_A=amt_month/900;
       
		if(min==900)
       
		{
          
 			total_amt=min*min_A;
           
			cout<<"Total Amount due is$ "<<total_amt;
       
		}
       
		else if(min>900)
       
		{
          
			int x;
          
			x=900;
          
          
			min=min-900;
          
			min=min*0.40;
          
			total_amt=min+59.99;
          
			cout<<"Total Amount due is $ "<<total_amt;
          
       
		}
    
	}

    else if(D==3) 
    
	{
           
	total_amt=69.99;
           
	cout<<"Total Amount due is $ "<<total_amt<<" For Unlimited Minutes";
     
    
	}

return 0;

}