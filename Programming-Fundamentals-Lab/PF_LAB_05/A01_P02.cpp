#include<iostream>

using namespace std;

int main()

{
    
char R,P,S;
int player1, player2;
    
cout<<"For Rock Press 1"<<endl<<"For Paper Press 2"<<endl<<"For Scissors Press 3"<<endl;
    
cout<<"Player 1 Enter Your choice"<<endl;
    
cin>>player1;
    
cout<<"Player 2 Enter Your choice"<<endl;
    
cin>>player2;
    
if(player1==2&&player2==1||player1==1&&player2==3||player1==3&&player2==2) 
    
	{
      
		cout<<"Player 1 wins";
    
	}
    
else if(player1==2&&player2==3||player1==1&&player2==2||player1==3&&player2==1) 
    
	{
      
		cout<<"Player 2 wins";
    
	}
    
else if(player1==1&&player2==1||player1==2&&player2==2||player1==3&&player2==3) 
    
	{
      
		cout<<"Draw";
    
	}
    

	return 0;

}