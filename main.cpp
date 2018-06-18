//Runs the code.
#include <fstream>
#include <iostream>
#include <queue>
//#include "HuffmanNode.h"
#include "frequency.cpp"
//#include "HuffmanNode.h"
#include "HeapNode.cpp"

using namespace std;
const int PSEUDOEOF = 256;

HeapNode BuildTree(priority_queue<HeapNode> theHeap)
//Build the Tree with a simple loop...
{
   while (theHeap.size() > 1) //while there's still stuff left in the heap...
   {
      //is it okay to use the variable called theHeap even though that's the name of a parameter?
      HeapNode firstNode = theHeap.top(); //what's on top? It's now first.
      theHeap.pop(); //we're done, pop it off.
      HeapNode secondNode = theHeap.top(); //The second node -- to be used as the other parameter for building the parent.
      theHeap.pop(); //we're done, pop it off.
      //HeapNode thirdNode = theHeap.top(); //The third node -- to be used for... something else? I think this is related to the parent.
      //theHeap.pop(); //we're done, pop it off.

      HeapNode parentNode;
      parentNode.BuildNode(firstNode.Value(), secondNode.Value());
      theHeap.push(parentNode);
   }

   return theHeap.top();
}

int main(int argc, char * argv[])
{
   frequency file;
   vector<int> output;
   output = file.getFile("foo.txt");
//========================================================//
       /////////////Print D-Level stuff/////////////
   cout << "=========================" << endl;//
   cout << "| char  |   frequency   |" << endl;//
   cout << "=========================" << endl;//
   
   for (int i = 0; i < output.size(); i++)
   {
      //if ((char)i == "\t")
      //   (char)i = "\bTAB";
      //else
      cout << "   " << (char)i << "\t|\t" << output[i] << endl;
   }
   //end D-Level stuff
   //========================================================//




   //========================================================//
         //////////////////OLD CODE////////////////////

   //HuffmanNode jeep;
   //jeep.HuffmanNode(3,9); // i don't even remember what this is
   //jeep.value();
   /*==================================
             PREVENT CRASHING
             (on Windows x64)
   credit to https://stackoverflow.com/questions/22130158/terminate-called-after-throwing-an-instance-of-stdout-of-range-what-basic
   ==================================*/
   /*  try
     {
        // do stuff
     }
     catch (std::exception const &exc)
     {
        std::cerr << "Exception caught " << exc.what() << "\n";
     }
     catch (...)
     {
        std::cerr << "Unknown exception caught\n";
     }
   */


     /////////////////////END OLD CODE///////////////////////
   //========================================================//


   //========================================================//
   ////////////////////////BUILD THE HEAP//////////////////////
   priority_queue<HeapNode> theHeap;
   HeapNode BuiltHeapNode;
   for (int i = 0; i < 256; i++)
   {
      BuiltHeapNode.BuildLeaf(output[i], i);
      if (output[i] > 0) //remove this line to make it look pretty.
        {
          theHeap.push(BuiltHeapNode);
        }
      //BuiltHeapNode.BuildNode
   }

   BuiltHeapNode.BuildLeaf(1, PSEUDOEOF);
   theHeap.push(BuiltHeapNode);
   //cout << theHeap << endl;//testing
   //////////////////////DONE BUILDING THE HEAP////////////////
   //========================================================//
   




   //========================================================//
   ////////////////////////BUILD THE TREE//////////////////////
   HeapNode HuffTree = BuildTree(theHeap); //heapnode has a reference to all
   //take value of actual huffmannode and call traversal(huffman)
   //string path =


   cout << "Doing B level!" << endl;
   HuffmanNode* currentNode;  // init the current first node
   currentNode = HuffTree.Value();
   cout << "Made current node." << endl; // testing B level
   string path = "";          // init the path for Traversing purposes
   cout << "Set up path to empty string since there is no path yet." << endl;//testing B level
   vector<string> encodings(257);     // init the encodings vector. I wish I remembered
                              // the syntax for a pointer to an array instead. (Those would work
                              //better than a vector here since we don't need all the features of a vector that take up more memory.)
   cout << "Made encodings vector." << endl;// testing B level
   HuffmanNode* trav;         // init the instance variable to call void Traversal on.
   cout << "Instance variable of a HuffmanNode pointer created." << endl; //testing B level
   currentNode->Traversal(currentNode, path, encodings); //call Traversal





   return 0;
}



