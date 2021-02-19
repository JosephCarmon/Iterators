/*
 * iterators.cpp
 *
 *  Created on: Feb 18, 2021
 *      Author: Joe
 */

#include <iostream>
#include <vector>
#include <deque>
#include <list>


using namespace std;

int main()
{

	//Array block
	signed short int iArray[] = { '1','2','3','4'};

	cout << endl << "Array Random Access Iterator";
	for(signed short int iIndex = 0; iIndex < 4; iIndex++)
	{
		cout << endl << iArray[iIndex];
	}

	//vector block
    vector<signed short int> iVector;
    vector<signed short int>::iterator iVectorIterator;
    vector<signed short int>::reverse_iterator iVectorReverseIterator;


    for(signed short int iIndex = 0; iIndex < 4; iIndex++)
    {
    	iVector.push_back(iIndex+1);
    }

    cout <<endl << "Vector Random Access Iterator";
    for(signed short int iIndex = 0; iIndex < 4; iIndex++)
    {

    	cout << endl << iVector[iIndex];
    }

    cout << endl << "Vector Iterator";
    for(iVectorIterator = iVector.begin(); iVectorIterator != iVector.end(); iVectorIterator++)
    {
    	cout << endl << *iVectorIterator;
    }

    cout << endl << "Vector Reverse Iterator";
    for(iVectorReverseIterator = iVector.rbegin(); iVectorReverseIterator != iVector.rend(); iVectorReverseIterator++)
    {
    	cout << endl << *iVectorReverseIterator;
    }

    //deque block
    deque<signed short int> iDeque;
    deque<signed short int>::iterator iDequeIterator;
    deque<signed short int>::reverse_iterator iDequeReverseIterator;


    for(signed short int iIndex = 0; iIndex < 4; iIndex++)
    {
    	iDeque.push_back(iIndex+1);
    }

    cout << endl << "Deque Random Access Iterator";
    for(signed short int iIndex = 0; iIndex < 4; iIndex++)
    {
    	cout << endl << iDeque[iIndex];
    }

    cout << endl << "Deque Iterator";
    for(iDequeIterator = iDeque.begin(); iDequeIterator != iDeque.end(); iDequeIterator++)
    {
    	cout << endl << *iDequeIterator;
    }

    cout << endl << "Deque Reverse Iterator";
    for(iDequeReverseIterator = iDeque.rbegin(); iDequeReverseIterator != iDeque.rend(); iDequeReverseIterator++)
    {
    	cout << endl << *iDequeReverseIterator;
    }

    //list block
    list<signed short int> iList;
    list<signed short int>::iterator iListIterator;
    list<signed short int>::reverse_iterator iListReverseIterator;

    for(signed short int iIndex = 0; iIndex < 4; iIndex++)
    {
    	iList.push_back(iIndex+1);
    }

    cout << endl << "List Iterator";
    for(iListIterator = iList.begin(); iListIterator != iList.end(); iListIterator++)
    {
    	cout << endl << *iListIterator;
    }

    cout << endl << "List Reverse Iterator";
    for(iListReverseIterator = iList.rbegin(); iListReverseIterator != iList.rend(); iListReverseIterator++)
    {
    	cout << endl << *iListReverseIterator;
    }

}


