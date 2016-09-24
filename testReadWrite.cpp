#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

//https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm Tutorial info
//http://www.itechcollege.com/courses/C++/09-Read-and-Write-a-Text-File.php
//http://code.runnable.com/UpSpP5ymsslIAAFo/reading-a-file-into-an-array-for-c%2B%2B-and-fstream

using namespace std;

int main ()  
{
	
	double width;
	double length;
	double area;
	double perimeter;
	
	ifstream infile;
	ofstream outfile;
	
	infile.open("data.txt", ios::in);
	outfile.open("programOutput.txt", ios::out | ios::app);
	
	if(outfile.is_open() && infile.is_open())  
	{
		outfile << "The program calulates the area and the perimeter of a rectangle.  \n" << endl;

	    while (!infile.eof() )  
		{
			infile >> width;
			outfile << "The rectangle\'s width = " << width << ". "  << endl;
			infile >> length;
			outfile << "The rectangle\'s length = " << length << ". " <<  "\n"  << endl;
			area = length * width;
			perimeter = 2 * (length + width);
			outfile << "The rectangle\'s perimeter is " << perimeter << ".  " << endl;
			outfile << "The area of the rectangle is " << area << ". " << endl << endl << endl;
			cout << " " << endl;
		/*			
			cout << "The rectangle\'s width is " << width << ".  " << endl;
			cout << "The rectangle\'s length is " << length << ".  " << endl;
			cout << "The perimeter of the rectangle is " << perimeter << ".  \n";			
			cout  << "The area of the rectangle is " << area << ".  " << endl;
		*/
		}
		
	    outfile.close();
	    infile.close();
	}
	
	else
	{
		cout << "There was a problem opening a file.  The program was terminated."  << endl;	
	}
	
	return 0;	
}
