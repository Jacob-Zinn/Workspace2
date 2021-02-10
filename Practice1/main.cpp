#include <iostream>
#include <time.h>
using namespace std;

int main() 
{
 long start;
 long end;
 const int searchSize = 100000000;
 int *array=new int[searchSize];
 for(int i = 0; i < searchSize; i++) {
   array[i] = i*2;
 }
 int searchval = (searchSize-1)*2;
 cout << "Linear Search for "<<searchval<<endl;
 start = clock();

// Your answer will go here
f
 
 end = clock();
 etime = (end - start)/(double)CLOCKS_PER_SEC;
 cout << "time: " << etime << endl << endl;