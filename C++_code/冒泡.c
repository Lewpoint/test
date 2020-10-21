#include <stdio.h>

void dyfuc(int a[7])
{
    int i =0;
        for(i=0;i<7;i++)
    {
        printf("%d\n",a[i]);
    }  
}

void pxfuc(int a[7])
{
    int i,j,temp; 
     for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


void main()
{

    int a[8] = {33,34,56,868,21,45,49,90};
   pxfuc(a);
   dyfuc(a);
    
    int num = 0;
    num = sizeof(a)/sizeof(a[0]);
    printf("num=%d\n",num);

    printf("hello....");
    system("pause");
}