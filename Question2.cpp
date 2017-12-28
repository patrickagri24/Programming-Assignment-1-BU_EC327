#include <iostream>

using namespace std;




int main()
{
  // Establishes integer types for initial and final values, scope is native to main funtion
  int initial;
  int final;
  //Establishes integer types for converting and final result, to be used in later if statements in the main function
  int convert;
  double result;
  

  //Tells user what numbers correspond to which units
  cout << "Cups = 1, Ounces = 2, Tablespoons = 3, Teaspoons = 4" << endl;

  //Prompts user for conversion from
  cout << "Conversion from:";
  cin >> initial;

  //Prompts user for conversion to
  cout << "Conversion to:";
  cin >> final;


  //Error checks for if start input is out of range 
  while(initial < 1  || initial > 4)
    {
      cout << "Invalid start, please try again" << endl;

      cout << "Conversion from:";
      cin >> initial;
    }

  //Error checks for if end input is out of range
  while(final < 1 || final > 4)
    {
      cout << "Invalid end, please try again" << endl;

      cout << "Conversion to:";

      cin >> final;
    }

  //Now will ask user for how many of the start unit they would like to be converted to their
  //end unit which was specified earlier

  //First, converts number inputed earlier to word to be prompted on screen
  if(initial == 1)
    {
      //Prompts user for amount to be converted
      cout << "Enter the amount in Cups:";
      cin>> convert;
    }

  else if(initial == 2)
    {
      //Prompts user for amount to be converted
      cout << "Enter the amount in Ounces:";
      cin>> convert;
    }

 else if(initial == 3)
    {
      //Prompts user for amount to be converted
      cout << "Enter the amount in Tablespoons:";
      cin>> convert;
    }

 else if(initial == 4)
    {
      //Prompts user for amount to be converted
      cout << "Enter the amount in Teaspoons:";
      cin>> convert;
    }

  //Now that we know what our initial unit is, and how many of this unit we want converted, we can convert

  //Sets up calculation if input is Cups
  if(initial == 1)
    {


      //If output is cups
      if(final == 1)
	{
	  result = convert;
	}

      //If output is Ounces
      else if(final == 2)
	{
	  result = convert * 8;
	}

      //If output is tablespoons
      else if(final == 3)
	{
	  result = convert * 16;
	}

      //If output is teaspoons
      else if(final == 4)
	{
	  result = convert * 48;
	}
    }

  //Sets up calculation if input is Ounces
  else if(initial == 2)
    {


      //If output is cups
      if(final == 1)
	{
	  result = convert * 0.125 ;
	}

      //If output is Ounces
      else if(final == 2)
	{
	  result = convert;
	}

      //If output is tablespoons
      else if(final == 3)
	{
	  result = convert * 2;
	}

      //If output is teaspoons
      else if(final == 4)
	{
	  result = convert * 6;
	}
    }


 //Sets up calculation if input is tablespoons
  else if(initial == 3)
    {

      //If output is cups
      if(final == 1)
	{
	  result = convert * 0.0625;
	}

      //If output is Ounces
      else if(final == 2)
	{
	  result = convert * 0.5;
	}

      //If output is tablespoons
      else if(final == 3)
	{
	  result = convert;
	}

      //If output is teaspoons
      else if(final == 4)
	{
	  result = convert * 3;
	}
    }




 //Sets up calculation if input is teaspoons
  else if(initial == 4)
    {


      //If output is cups
      if(final == 1)
	{
	  result = convert * 0.02083333;
	}

      //If output is Ounces
      else if(final == 2)
	{
	  result = convert * 0.16666666;
	}

      //If output is tablespoons
      else if(final == 3)
	{
	  result = convert * 0.3333333333;
	}

      //If output is teaspoons
      else if(final == 4)
	{
	  result = convert;
	}
    }

  //Now prints out final resuts in a sentence

  //If input is cups, displays proper sentence
  if(initial == 1)
    {
      //If output is cups, displays conversion
      if(final == 1)
	{
	  cout << "Because you chose cups to cups, you still have " << convert << " cups" << endl;
	}

      //If output is ounces, displays conversion
      else if(final == 2)
	{
	 //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Cups is " << result << " ounces" << endl;
	}

      //If output is tablespoons, displays conversion
      else if(final == 3)
	{
	 //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Cups is " << result << " tablespoons" << endl;
	}

      //If output is teaspoons, displays conversion
      else if(final == 4)
	{
	 //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Cups is " << result << " teaspoons" << endl;
	}
    }


  //If input is ounces, displays proper sentence
  else if(initial == 2)
    {
      //If output is cups, displays conversion
      if(final == 1)
	{
	 //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Ounces is " << result << " cups" << endl;
	}

      //If output is ounces, displays conversion
      else if(final == 2)
	{
	  cout << "Because you chose ounces to ounces, you still have " << convert << " ounces" << endl;
	}

      //If output is tablespoons, displays conversion
      else if(final == 3)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Ounces is " << result << " tablespoons" << endl;
	}

      //If output is teaspoons, displays conversion
      else if(final == 4)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Ounces is " << result << " teaspoons" << endl;
	}
    }

  //If input is tablespoons, displays proper sentence
 else if(initial == 3)
    {
      //If output is cups, displays conversion
      if(final == 1)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Tablespoons is " << result << " cups" << endl;
	}

      //If output is ounces, displays conversion
      else if(final == 2)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Tablespoons is " << result << " ounces" << endl;
	}

      //If output is tablespoons, displays conversion
      else if(final == 3)
	{
	  cout << "Because you did not change units, you still have " << convert << " tablespoons" << endl;
	}

      //If output is teaspoons, displays conversion
      else if(final == 4)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Tablespoons is " << result << " teaspoons" << endl;
	}
    }



  //If input is teaspoons, displays proper sentence
 else if(initial == 4)
    {
      //If output is cups, displays conversion
      if(final == 1)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Teaspoons is " << result << " cups" << endl;
	}

      //If output is ounces, displays conversion
      else if(final == 2)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Teaspoons is " << result << " ounces" << endl;
	}

      //If output is tablespoons, displays conversion
      else if(final == 3)
	{
	  //Sets precision for results
	  cout.setf(ios::fixed,ios::floatfield);
	  cout.precision(3);

	  cout << convert << " Teaspoons is " << result << " tablespoons" << endl;
	}

      //If output is teaspoons, displays conversion
      else if(final == 4)
	{

	  cout << "You did not change units, so therefore you still have " << convert << " teaspoons" << endl;
	}
    }


  return 0;
}
