#include <iostream>

int name( int inV )
{
   int  rc;
   if ( inV == 1 )
   {
      std::cout<< "William! " <<std::endl; 
      rc = 1;
   } 
    else
   {
      std::cout<< "Chloe! " <<std::endl; 
      rc = 2;
   }

   return rc; 
}


int f()
{
   int a;
   int c = 10;
      
   return 0;
}

int *  creatf(int i)
{
   int*  p = new int[i];

   for ( int j = 0; j < i; j++ )
   {
      p[j] = j*i;
   }

   return p;
}


int main()
{

/*
  int a = 1;
  int c; 
  name(1);
  std::cout<< std::endl; name(2); name(3); 
  std::cout<< std::endl; 
  std::cout<< "hello world! "<<std::endl;
  f();

  std::cout<<a << " " <<c<<std::endl;    
*/
  // ----------------------------------
  // a section of code to create a dynamic
  // array by a function and use its return

  int* array = creatf(10);

  int m = 0;
  while( m < 10 )
  {
    std::cout<< array[m] << std::endl;
    ++m;
  }

  // ----------------------------------

}
