#include <stdio.h>

void printSpaces(int count)  
{  for (int i = 0; i< count ; i++ )
    {printf(" ");}
}
  
void printAsterisks(int count) 
{ for (int i = 0; i< count ; i++ )
    {printf("*");}
}

void printpatternE(int size)
{
    for( int i = 0 ; i< size ; i++)
    {
        if(i< size -5){printAsterisks(size);}
        if (i > size -5 && i<= size-1) 
        {
           printf("\n");
          if(i < size -3 || i == size -2)
          {printAsterisks(1);}
          if(i == size -3 || i == size -1)
          {printAsterisks (size);}
        }
    }
}

int main() {
int size = 6;
printpatternE(size);
    return 0;
}
