/*
 * DotIterator.cpp
 *
 *  Created on: 18 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "DotIterator.h"

using namespace std;

DotIterator::DotIterator()
{
	// TODO Auto-generated constructor stub

}

DotIterator::~DotIterator()
{
	// TODO Auto-generated destructor stub
}

void DotIterator::iterator()
{
	for(int i = 0; i < 10000; i ++)
	{
		if(i % 100 == 0)
		{
			cout << "." << flush;
		}
	}
}

