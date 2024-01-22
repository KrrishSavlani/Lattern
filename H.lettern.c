#include <stdio.h>

void printSpaces(int count)  
{  for (int i = 0; i< count ; i++ )
    {printf(" ");}
}
  
void printAsterisks(int count) 
{ for (int i = 0; i< count ; i++ )
    {printf("*");}
}


void printpatternH(int size)
{
    for (int i = 0; i< size ;i++)
    {
        if (i < size -4)
        { printAsterisks(1);
          printSpaces(4);
          printAsterisks(1);
          
          printf("\n");
        }
        if(i > size - 2)
        {
          printAsterisks (size);
        }
        
        if (i > size -2)
        { printf("\n");
        printAsterisks(1);
          printSpaces(4);
          printAsterisks(1);
          
          printf("\n");
        printAsterisks(1);
          printSpaces(4);
          printAsterisks(1);
          
          
        }
    }
}


int main() {
int size = 6 ;
printpatternH(size);
    return 0;
}
