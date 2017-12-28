#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

//Function for computing hamming distance between two equal strings
int computeHam(string ham1,string ham2)
{
  //Presets counters
  int i = 0;
  int count = 0;

  //Finds length of input string
  int end = ham1.length();

  //While loop counts at how many places there are different character values
  while(ham1[i] != ham1[end])
    {
      if(ham1[i] != ham2[i])
	{
	  count++;
	}
      i++;
    }

  return count;
}



// Main function
int main()
{
  //Numbers needed
  int dumb1;
  int dumb2;
  int numOne;
  int numTwo;
  string ham1;
  string ham2;
  int distance;
  int i;
  char zero = '0';


  cout << "Enter first number: ";
  cin >> dumb1;

  //Stores input for later
  numOne = dumb1;

  //converts input integer into a string
  stringstream stream1;
  stream1 << hex << numOne;
  ham1 = stream1.str();

  cout << "Enter second number: ";
  cin >> dumb2;

  //Stores input for later
  numTwo = dumb2;

  //converts input integer into a string
  stringstream stream2;
  stream2 << hex <<  numTwo;
  ham2 = stream2.str();

 //Takes care if ham1 is less than  ham2
  if(ham1.length() < ham2.length())
    { 

      //for loop to add zeros until same length
      for(i = ham1.length(); i < ham2.length();)
	{
	  ham1 = zero + ham1;
	  i++;
	}
    }

  //Takes care if ham1 is greater than ham2
  else if(ham2.length() < ham1.length())
    {

      //for loop to add zeros until same length
      for(i = ham2.length(); i < ham1.length();)
	{
	  ham2 = zero + ham2;
	  i++;
	}
    }

 
  distance = computeHam(ham1,ham2);


  cout << "The hamming distance between " << dumb1 << " and " << dumb2 << " when the numbers are in hex is: " << distance << endl;


  return 0;

}
