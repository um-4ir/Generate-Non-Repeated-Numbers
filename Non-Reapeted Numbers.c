//Non-Repeated Numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int check();
int main()
{
    int n,*numbers,max,min,temp,i,j,flag;
    printf("How Much You Want To Create List Of Random Non Repeated Numbers: ");
    scanf("%d",&n);

    printf("Enter Minimum Number: ");
    scanf("%d",&min);

    printf("Enter Maximum Number: ");
    scanf("%d",&max);

    numbers=(int*)malloc(n*sizeof(int));
    srand(time(NULL));

    for (i=0 ; i<n ; i++)
    {
        temp=min+rand() % max;
        numbers[i]=temp;

        flag=check(numbers,i);

        if (flag==-1)
        {
            i--;
            continue;
        }
    }

    for (i=0 ; i<n ; i++)
    {
        printf("%4d) %4d \n",i+1,numbers[i]);

        if((i+1)%10==0)
            printf(" \n");
    }

    printf("\n\t");
    system("pause");
    return 0;
}

int check(int const array[],int n)
{
    int i;

    for (i=0 ; i<n ; i++)
    {
        if(array[i]==array[n])
            return -1;
    }
}




