
#include "pch.h"
#include <iostream>
using namespace std;
#include "LinkedNodeClass.h"
#include "LIFOStackClass.h"
#include "FIFOQueueClass.h"
#include "SortedListClass.h"

//Do NOT remove any of the preprocessor directives in this file.
//They should not affect your ability to write test code in your
//main function below, and they must be in your submitted main
//file exactly as provided to you with the project.

#ifdef ANDREW_TEST
#include "andrewTest.h"
#else 

int main()
{
	//This is just a placeholder main function - it does exceptionally
	//little actual testing, so you'll want to add your own tests here.
	//Feel free to leave your tests in the version of this file you
	//submit, but we will not be running your main function, so the
	//output, etc., of your main doesn't need to match anything from
	//a sample output, etc.

	SortedListClass testList;
	// SortedListClass temp(testList);

	testList.printForward();

	testList.insertValue(42);
	testList.insertValue(20);
	testList.insertValue(2);
	testList.insertValue(4);
	testList.insertValue(20);
	testList.insertValue(3);


	SortedListClass temp(testList);

	testList.printForward();
	cout << testList.getNumElems() << endl;

	int m = 1000;
	testList.getElemAtIndex(3, m);
	cout << "Surprise!" << endl;
	cout << m;

	int theVal;
	testList.removeFront(theVal);
	testList.printForward();
	testList.printBackward();
	cout << "the Value in the front is: " << theVal << endl;


	testList.removeLast(theVal);
	testList.printForward();
	testList.printBackward();
	cout << "the Value in the Last is: " << theVal << endl;

	// copy constructor
	// SortedListClass temp(testList);
	temp.insertValue(233333333);
	temp.printForward();
	testList.printForward();

	LIFOStackClass testStackList;
	testStackList.print();
	cout << testStackList.getNumElems() << endl;

	testStackList.push(42);
	testStackList.push(20);
	testStackList.push(35);
	testStackList.push(1);
	testStackList.push(-4);
	testStackList.print();
	int tempNum;
	testStackList.pop(tempNum);
	testStackList.print();
	cout << "Stack Num is: " << tempNum;

	FIFOQueueClass testQueueList;
	testQueueList.print();
	cout << testQueueList.getNumElems() << endl;

	testQueueList.enqueue(42);
	testQueueList.enqueue(20);
	testQueueList.enqueue(35);
	testQueueList.enqueue(1);
	testQueueList.enqueue(-4);
	testQueueList.print();
	int tempNumQueue;
	testQueueList.dequeue(tempNumQueue);
	testQueueList.print();
	cout << "Queue Num is: " << tempNumQueue;
	
	return 0;
}

#endif

