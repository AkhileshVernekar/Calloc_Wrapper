#include "Calloc_Wrapper.h"

int main()
{   
    int *p;
    for(int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 100; i++)
        {
            p = (int *)Calloc_Wrapper(5,sizeof(int));
            for (int i = 0; i < 5; i++)
            {
                *p = 10+i;
                p++;
            }    
        }
    } 
    unsigned int ret = 0;    
    Free(25);
    Free(1);    
    Display();
    ret = Free_All();
    Display();
    printf("Ret = %d\n",ret);

  return 0;
}