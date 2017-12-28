#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

//Produces funtion for changing letter to upper or lowercase
void alterLet(char &x)
{

  //Uppercases letter if is lowercase
  if(x >= 'a' && x <= 'z')
    {
      x = static_cast<char>('A' +(x - 'a'));
    }

  //Lowercases letter if it is uppercase
  else if(x >= 'A' && x <= 'Z')
    {
      x = static_cast<char>('a'+ (x - 'A'));
    }
}


//Produces function for reversing the alphabet and changing case of the input 
void reverseLet(char &x)
{

  //Reverses alphabet if letter is lowercase
   if(x >= 'a' && x <= 'z')
    {
      //Switches letter to alphabet equivalent

      x = static_cast<char>('z' - x + 'a' );

      //Uppercases letter
      x = static_cast<char>('A' +(x - 'a'));
    }

   //Reverses alphabet if letter is uppercase
   else if(x >= 'A' && x <= 'Z')
    {
      //Switches letter to alphabet equivalent

      x = static_cast<char>('Z' - x + 'A' );

      //Lowercases letter
      x = static_cast<char>('a'+ (x - 'A'));
    }
}

//Produces a function for taking a letter, moving it six places ahead, and upper or lowercasing it
void encrypt(char &x)
{


  //Moves ahead 6 lowercase letters
  if(x >= 'a' && x <= 'z')
    {

      //Moves 6 ahead
      x = static_cast<char>(x + 6);

      //corrects letter if goes over maximum
      if(x == 123)
	{
	  x =  'a';
	}
      else if(x == 124)
	{
	  x = 'b';
	}
      else if(x == 125)
	{
	  x = 'c';
	}
      else if(x == 126)
	{
	  x = 'd';
	}
      else if(x == 127)
	{
	  x = 'e';
	}
      else if(x == 128)
	{
	  x = 'f';
	}

      //Ends with uppercasing letters
      x = static_cast<char>('A' +(x - 'a'));

    }

  //Moves ahead 6 uppercase letters
  else if(x >= 'A' && x <= 'Z')
    {

      //Moves 6 ahead
      x = static_cast<char>(x + 6);

      //corrects letter if goes over maximum
      if(x == 91)
	{
	  x =  'A';
	}
      else if(x == 92)
	{
	  x = 'B';
	}
      else if(x == 93)
	{
	  x = 'C';
	}
      else if(x == 94)
	{
	  x = 'D';
	}
      else if(x == 95)
	{
	  x = 'E';
	}
      else if(x == 96)
	{
	  x = 'F';
	}

      //Ends with lowercasing letters
      x = static_cast<char>('a'+ (x - 'A'));

    }


}


//Main function
int main()
{

  //Defines data types for variables used in program
  string input; 
  char character;
  int operation;

  //Prompts user for inputs to begin application
  cout << "Enter char: ";
  cin >> input;

  //character takes the first letter from the input which is a string
  character = input[0];

  //Error check if input is too large
  while(character < 65 || character > 122)
    {
      cout << "You have inputted an invalid character, please type only one character: ";
      cin >> character;
    }


  cout<< "Enter operation: ";
  cin >> operation;

  //Operation error check
  while(operation < 1 || operation > 3)
    {
    cout << "Please enter an operation between 1 and 3: ";
    cin >> operation;
    }


  //Begins upper/lowercase operation if op code is 1
  if(operation == 1)
    {

      alterLet(character);

      cout << "Result is: " << character << endl;

    }

  //Begins reverse letter operation if op code is 2
  else if(operation == 2)
    {

      reverseLet(character);

      cout << "Result is: " << character << endl;

    }

  //Begins encrypt letter operation if op code is 3
  else if(operation == 3)
    {

      encrypt(character);

      cout << "Result is: " << character << endl;
    }




  return 0;

}




