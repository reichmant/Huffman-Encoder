#ifndef _HUFFMANNODE_H
#define _HUFFMANNODE_H


//#include "bitops.h"
//#include <ifstream> see above
#include <vector>
#include <string>
//#include <iostream>
using namespace std;

class HuffmanNode
{

private:
	int weight;
	int value; //char held in the node
	HuffmanNode* left;
	HuffmanNode* right;


public:
	HuffmanNode(int passedInWeight, int passedInValue);
	HuffmanNode(HuffmanNode * leftchild, HuffmanNode * rightchild);
	int Value();
	int Weight();
	HuffmanNode* Left();
	HuffmanNode* Right();
	void Traversal(HuffmanNode* currentNode, string path, vector<string> & encodings);


};

#endif


//output number freq not the char, just ascii id #.