#include "HeapNode.h"

//#include <ofstream>


#include <vector>
#include <queue>
#include "frequency.h"

using namespace std;

/*===========================
        Constructor
Holds a pointer to a HuffmanNode.
=============================*/
HeapNode::HeapNode()
{
	//build leaf with character loop//make heap loop
	//this should be empty.
}



/*===========================
        	Value
Simply returns the pointer to
the HuffmanNode.
=============================*/
HuffmanNode* HeapNode::Value() const
{
	return HuffPoint;
}

/*===========================
          BuildLeaf
Given a weight and value.
Creates a new HuffmanNode with
these values.
=============================*/
void HeapNode::BuildLeaf(int passedInWeight, int passedInValue)
{
	HuffPoint = new HuffmanNode(passedInWeight, passedInValue);
	//this-> weight = passedInWeight;
	//this-> value = passedInValue;
}

/*===========================
          BuildNode
Given pointers to two HuffmanNodes.
creates a new HuffmanNode
pointing to these values
(using the proper constructor
from the HuffmanNode class).
=============================*/
void HeapNode::BuildNode(HuffmanNode* Huff1, HuffmanNode* Huff2)
{
	HuffPoint = new HuffmanNode(Huff1, Huff2);
}

