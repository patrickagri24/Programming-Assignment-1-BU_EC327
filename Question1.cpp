#include <iostream>

using namespace std;

int main()
{
	//Read in information for first rectangle
	
	int xcoord1, ycoord1, length1, height1;
	
	cout << "Enter the information for the first rectangle" << endl;
	
	cout << "x-coordinate:";
	cin >> xcoord1;
	
	cout << "y-coordinate:";
	cin >> ycoord1;
	
	cout << "length:";
	cin >> length1;
	
	cout << "height:";
	cin >> height1;
	
	//Read in information for the second rectangle.
	
	int xcoord2, ycoord2, length2, height2;
	
	cout << "Enter the information for the second rectangle" << endl;
	
	cout << "x-coordinate:";
	cin >> xcoord2;
	
	cout << "y-coordinate:";
	cin >> ycoord2;
	
	cout << "length:";
	cin >> length2;
	
	cout << "height:";
	cin >> height2;
	
	
	int end1x;
	int end1y;
	
	int end2x;
	int end2y;
	
	//Makes types for end of rectangle values
	end1x = xcoord1 + length1;
	end1y = ycoord1 + height1;
	
	end2x = xcoord2 + length2;
	end2y = ycoord2 + height2;

	
	//Lower Left
	if(xcoord1 < xcoord2 && ycoord1 < ycoord2)
	{
	  if(end1x >= xcoord2 && end2y >= ycoord2)
	    {
	      cout << "The RECTANGLES INTERSECT" << endl;
	    }
	  else
	    {
	      cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
	    }
	}

	//Below to right
	else if(xcoord1 > xcoord2 && ycoord1 < ycoord2)
	  {

	    if(end2x >= xcoord1 && end1y >= ycoord2)
	      {
		cout << "THE RECTANGLES INTERSECT" << endl;
	      }
	    else
	      {
		cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
	      }

	  }

	//Top left
	else if(xcoord1 < xcoord2 && ycoord1 > ycoord2)
	  {
	    if(end1x >= xcoord2 && end2y >= ycoord1)
	      {
		cout << "The RECTANGLES INTERSECT" << endl;
	      }
	    else
	      {
		cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
	      }
	  }

	//Top RIght
	else if(xcoord1 > xcoord2 && ycoord1 > ycoord2)
	  {
	    if(end2x >= xcoord1 && end2y >= ycoord1)
	      {
		cout << "THE RECTANGLES INTERSECT" << endl;
	      }
	    else
	      {
		cout << "THE RECTANGLES DO NOT INTERSECT" << endl; 
	      }
	  }

	//if same x coords
	else if(xcoord1 == xcoord2)
	  {

	    if(ycoord1 < ycoord2)
	      {
		if(end1y > ycoord2)
		  {
		    cout << "THE RECTANGLES INTERSECT" << endl;
		  }
		else
		  {
		    cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
		  }
	      }
	    else if(ycoord2 > ycoord1)
	      {
		if(end2y > ycoord1)
		  {
		    cout << "THE RECTANGLES INTERSECT" << endl;
		  }
		else
		  {
		    cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
		  }
	      }
	  }

	//If same y coords
	else if(ycoord1 == ycoord2)
	  {

	    if(xcoord1 < xcoord2)
	      {
		if(end1x > xcoord2)
		  {
		    cout << "THE RECTANGLES INTERSECT" << endl;
		  }
		else
		  cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
	      }

	    else if(xcoord1 > xcoord2)
	      {
		if(end2x > xcoord1)
		  {
		    cout << "THE RECTANGLES INTERSECT" << endl;
		  }
		else 
		  {
		    cout << "THE RECTANGLES DO NOT INTERSECT" << endl;
		  }
	      }
	  }

	


	
	return 0;
	
}
	
