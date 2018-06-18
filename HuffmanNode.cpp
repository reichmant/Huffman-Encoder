#include <vector>
#include "HuffmanNode.h"
#include "frequency.h"

using namespace std;

/*===========================
        Constructor  1
Sets up a node with the weight
and value taken in.
Initializes left and right
child to NULL (leaves).
=============================*/
HuffmanNode::HuffmanNode(int passedInWeight, int passedInValue)
{
	weight = passedInWeight;
	value = passedInValue;
	this -> left = NULL;
	this -> right = NULL;
	//left = leftchild;
	//right = rightchild;
}

/*===========================
        Constructor  2
Sets left and right children
to input values and sets the
weight value to be the sum of
the weights of the left and
right children.

Value should be set to -1;
this is an internal node and
-1 is an invalid ascii value.
=============================*/
HuffmanNode::HuffmanNode(HuffmanNode * leftchild, HuffmanNode * rightchild)
{
	//this -> left = ;
	//this -> right = right;
	left = leftchild;
	right = rightchild;

	weight = leftchild->Weight() + rightchild->Weight();
	value = -1;
}

/*===========================
         Value Method
Just returns the value of the
node.
=============================*/
int HuffmanNode::Value()
{
	return value;
}

/*===========================
          Debugging
Just checks the weight.
=============================*/
int HuffmanNode::Weight()
{
	return weight;
}


/*===========================
		  Left Method
Returns the left-child pointer
=============================*/
HuffmanNode* HuffmanNode::Left()
{
	return left;
}

/*===========================
		  Left Method
Returns the left-child pointer
=============================*/

HuffmanNode* HuffmanNode::Right()
{
	return right;
}

void HuffmanNode::Traversal(HuffmanNode* currentNode, string path, vector<string> & encodings)
{
	if (currentNode->Left() == NULL && currentNode->Right() == NULL) //if the node has no children.
	{
		encodings[currentNode -> Value()] = path;  //set the encoding for this value to be the path down to this child.
		cout << path << endl; //testing
		cout << currentNode->Value() << endl; //testing

		return;
	}
	if (currentNode->Left() != NULL) //if the node has a right child.
	{
		Traversal(currentNode->Left(), path + '0', encodings);	//encode this left child by extending the path by a 0
		//and recursively traversing the left child. Then,
		cout << path << endl; //testing
		cout << currentNode->Value() << endl; //testing
	}
	if (currentNode->Right() != NULL) //if the node has a right child.
	{	Traversal(currentNode->Right(), path + '1', encodings); //encode this right child by extending the path by a 1
		//and recursively traversing the right child.
		cout << path << endl; //testing
		cout << currentNode->Value() << endl; //testing
	}
}