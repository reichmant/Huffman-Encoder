#ifndef _HEAPNODE_H
#define _HEAPNODE_H


//#include "bitops.h"
//#include <ifstream> see above
#include <vector>
#include <string>
#include "HuffmanNode.cpp"
//#include <iostream>
using namespace std;

class HeapNode
{

private:
	int weight;
	int value;
	HuffmanNode* HuffPoint;


public:
	HeapNode();
	HuffmanNode* Value() const;
	void BuildLeaf(int passedInWeight, int passedInValue);
	void BuildNode(HuffmanNode* Huff1, HuffmanNode* Huff2);
	
/*================================
Overloads the operator < so that
one HeapNode is less than another
if the weight of the HuffmanNode
it points to is greater than the
other's. (It must be greater
because we want the most frequently
used characters at the bottom.)
=================================*/
	bool operator<(const HeapNode& a) const
	{
		return this->HuffPoint->Weight() > a.Value()->Weight(); //HeapNode->HuffmanNode->weight;
	}

//old overload///////////////////////////////////

//bool operator<(const HuffmanNode &huffpointer2)
//{
//	weight1 = HuffPoint->weight();
//	weight2 = huffpointer2->weight();
//
//	return (weight1 > weight2);
//}


};

#endif


//output number freq not the char, just ascii id #.