#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int stack[5];

#define stack_SIZE 5

void push(int e)
{
    printf("숫자를 입력하시오.: \n");
    scanf("%d", &e);
    
    for(int i = 0; i < 5; i++)
    {
        if(stack[i] == NULL)
        {
            stack[i] = e;
                    break;
        }
         if(stack[4] != NULL)
            {    
                printf("스택이 가득 참! \n");            
                        break;
            }            
    }
}

int pop()
{
    int a;

    if(stack[0] != NULL)
    {
        a = stack[0];
        stack[0] = NULL; 
        break;
    }

    for(int j=1; j < 5; j++)
    {
        if(stack[j] == NULL)
        {
            a = stack[j - 1];
            stack[j - 1] = NULL;  
            break;
        }
    }
    if(stack[5] != NULL)
    {
        a = stack[5];
        stack[5] = NULL; 
        break;
    }
    return a;
}
