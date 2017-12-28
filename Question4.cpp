#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main()
{
        //Assigns data types to the values to be used in this funtion
        int value, response;
	string answer;
	
	//Outputs choice for user
	cout << "Choose Rock(0), Paper(1), or Scissors(2):";
	cin >> value;

	//Initializeing random time seed
	srand(time(NULL));

	//Computer generated random number
	response = rand() % 2 + 0;
	
	//Begins all the if else statements for declaring what the result of the game is
	if(value == 0 && response == 1)
	{
		cout << "Computer Chooses: Paper" << endl;
		cout << "You Lose!" << endl;
	
	}
	else if(value == 0 && response == 2)	
	{	
		cout << "Computer Choose: Scissors" << endl;
		cout << "You Win!" << endl;
	}
	
	else if(value == 1 && response == 0)
	{	
		cout << "Computer Chooses: Rock" << endl;
		cout << "You Win!" << endl;
	}
	
	else if(value == 1 && response == 2)
	{	
		cout << "Computer Chooses: Scissors" << endl;
		cout << "You Lose!" << endl;
	}
	
	else if(value == 2 && response == 0)
	{	
		cout << "Computer Chooses: Rock" << endl;
		cout << "You Lose!" << endl;
	}
	
	else if(value == 2 && response == 1)
	{	
		cout << "Computer Chooses: Paper" << endl;
		cout << "You Win!" << endl;
	}
	
	else if(value == response)
	{	
	
		
			if(response == 0)
			{	
				answer = string("Rock");
			}
			else if(response == 1)
			{	
				answer = string("Paper");
			}
			
			else if(response == 2)
			{	
				answer = string("Scissors");
			}
		cout << "Computer chooses:" << answer << endl;	
		cout << "You tie!" << endl;
	}	
return 0;

}
