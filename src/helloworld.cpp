#include <iostream>
#include <vector>
#include <string>

#include "helloworld.h"

using namespace std;


void helloworld()
{

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}