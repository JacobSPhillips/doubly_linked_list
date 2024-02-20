// DS_linked_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList nums;

    nums.append(5);
    nums.append(33);
    nums.append(1);
    nums.append(7);
    nums.append(33);
    nums.append(12);
    nums.display(cout);
    nums.remove(33);
    nums.display(cout);
    nums.prepend(12);
    nums.display(cout);
    nums.remove(13);
    nums.display(cout);
    nums.taildisplay(cout);
    nums.tailremove(12);
    nums.display(cout);



}
