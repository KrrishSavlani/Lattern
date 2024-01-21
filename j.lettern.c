#include <stdio.h>

void printSpaces(int count)  
{  for (int i = 0; i< count ; i++ )
    {printf(" ");}
}
  
void printAsterisks(int count) 
{ for (int i = 0; i< count ; i++ )
    {printf("*");}
}


void printpatternJ (int size)
  {    
    
    int mid = size/2 ;
    for(int i = 0 ; (i < size -1 ) ; i++)
    { 
     if(i<size -1)
     {
         for (int i = 0; i< (size) ; i++)
         {
          if( i < size -1 ){ printSpaces(size-mid -2);}
          else{ printAsterisks(1);}
         }
     } printf("\n");
     
     if(i>size -3)
        {
           for(int i = 0 ; i < size ; i++)
           {
             printAsterisks(1);
           }
        }
    }
        
  }

int main() {
int size = 5;

printpatternJ(size);

    return 0;
}
