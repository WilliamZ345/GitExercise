#include <iostream>
using namespace std;

int *fun()
{
   int *arr = new int[100];

   arr[0] = 10;
   arr[1] = 1000;
   arr[3] = 100000;

   return arr;
}


int main()
{
   int *ptr = fun();
   int i = 0;
   while (i<100)
   {
      std::cout<< "[" << i <<"]" << ptr[i]; 
      i++;
   }
   std::cout << std::endl;
   return 0;
}


