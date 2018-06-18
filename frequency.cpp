//Counts frequency of ascii characters from any input file
#include <vector>
#include "frequency.h"

using namespace std;

//const int PSEUDOEOF = 256;
frequency::frequency()
{
	//nothing to construct here...	
}

vector<int> frequency::getFile(string filename)
{
	vector<int> ascii (257); //each element represents an ascii character, + PSEUDOEOF for a total of 257.
	ifstream infile; //set up to take a file in.
	infile.open(filename.c_str()); // open our input file
	
	/** while peeking ahead does not reveal end of file **/
	while (infile.peek() && !infile.eof())
	{
		char ch = infile.get(); //get the current character
		ascii[ch] = ascii[ch] + 1;	//add one the character'th spot. (the ch'th spot? Whatever you call it.
									//Basically the index number for the specific element. It holds the frequency.)
	}
	return ascii; //give back our full array of frequencies.

//Gary's old code:
// /** while peeking ahead does not reveal end of file **/
//   while (infile.peek() && !infile.eof())
//   {
//      char ch = infile.get();
//   }
}


//map[tree->getValue()]=str //where does this go?







//