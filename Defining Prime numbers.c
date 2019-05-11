#include <stdio.h>
    int main() {
// Maximum integer to test. Declared constant
// This is declared so that the maximum integer
// can easily be changed

    const int MAX = 100;
    char numbers[MAX+1];
    int index;
    int j;
    
    for(index = 2; index <= MAX; index++) 
        numbers[index] = index;
        
       index = 2; 
    while ((index*index)<= MAX)
    {
        if(numbers[index] !=0)
        {
            for(j=2; j < MAX; j++)
            {
                if (numbers[index]*j> MAX)
                    break;
                        else
                        numbers[numbers[index]*j]=0;
            }
            
        }
    
        index++;
    }
    
    printf("The following numbers are prime:\n");
    for(index = 2; index <= MAX; index++) {
    
        if(numbers[index] != 0) 
            printf("%d\n", index);
    }
    
    return 0;
    }
    