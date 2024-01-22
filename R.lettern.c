	
#include <stdio.h>

void printSpaces(int count)  
{  for (int i = 0; i< count ; i++ )
    {printf(" ");}
}
  
void printAsterisks(int count) 
{ for (int i = 0; i< count ; i++ )
    {printf("*");}
}

void printpatternS(int size)

{
    for (int i = 0 ; i< size ;i++)
    {
        if(i < 1){printAsterisks(size);}
        printf("\n");
        if(i < size-5)
        {printAsterisks(1);
         printf("\n");
          printAsterisks(1);}
         
        if(i< size -5){printf("\n");
        printAsterisks(size);}
        
         if(i< size - 5){printf("\n");
         printSpaces(size-1);
        printAsterisks(1);
        printf("\n");
        printSpaces(size-1);
        printAsterisks(1);}
        
        if(i< size -5){printf("\n");
        printAsterisks(size);}
    }
}


int main() {
int size = 6;
printpatternS(size);
    return 0;
}
