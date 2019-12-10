#include <stdio.h>
int main()
{  
    int num;
    int i,  keynum, found = 0;
    scanf("%d", &num);
    int array[num];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
}
