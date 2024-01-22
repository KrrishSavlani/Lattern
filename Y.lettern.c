#include <stdio.h>

void printSpaces(int count)  
{  for (int i = 0; i< count ; i++ )
    {printf(" ");}
}
  
void printAsterisks(int count) 
{ for (int i = 0; i< count ; i++ )
    {printf("*");}
}

void printpatternY(int size)
{
    for (int i = 0 ; i< size ; i++)
    {
       if(i<size -3)
       {
         printSpaces(i);
         printAsterisks(1);
         printSpaces(5-2*i);
         printAsterisks(1);
         printSpaces(i);
         printf("\n");
      }
      
      if(i>size - 4)
      {   
          printSpaces(size -3);
          printAsterisks(1);
          printf("\n");
          
      }
    }
}



int main() {
int size = 6;
printpatternY(size);
    return 0;
}
