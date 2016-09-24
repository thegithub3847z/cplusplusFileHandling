#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main ()  
{
	
	double width;
	double length;
	double area;
	double perimeter;
	
	ifstream infile;
	ofstream outfile;
	
	infile.open("f:\\cppProject\\data.txt", ios::in);
	outfile.open("f:\\cppProject\\programOutput.txt", ios::out);
	
	if(outfile.is_open() && infile.is_open())  
	{
	        outfile << "This text was written to a file called programOutput.txt.  The program calulates the area and the perimeter of a rectangle.  \n" << endl;
	
	        infile >> width;
 	        outfile << "The rectangle\'s width = " << width << ". "  << endl;
	        infile >> length;
	        outfile << "The rectangle\'s length = " << length << ". " <<  "\n"  << endl;
	        area = length * width;
	        perimeter = 2 * (length + width);
	        outfile << "The rectangle\'s perimeter is " << perimeter << ".  " << endl;
	        outfile << "The area of the rectangle is " << area << ". " << endl << endl << endl;

	    outfile.close();
	    infile.close();
	}
	
	else  
	{
		cout << "There was a problem opening a file.  The program was terminated."  << endl;
	}
	
	return 0;
	
}
