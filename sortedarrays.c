#include <stdio.h>

void main()
{
        int i,j,c,d,t;
        int a[10]={};
        int b[10]={};
        printf("Enter the number of elements in first array\n");
        scanf("%d",&c);
        printf("Enter the number of elements in second array\n");
        scanf("%d",&d);
        printf("Enter the elements in first array\n");
        for(i=0;i<c;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the elements in second array\n");
        for(j=0;j<d;j++)
        {
            scanf("%d",&b[j]);
        }
        j=0;
        for(i=c;i<c+d;i++)
        {
            a[i]=b[j];
            j++;
        }
        for(i=0;i<c+d;i++)
        {
            for(j=i+1;j<c+d;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf("The combination of both arrays\n");
        for(i=0;i<c+d;i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");
        j=0;
        for(i=c+d-3;i<c+d;i++)
        {
            b[j]=a[i];
            a[i]=0;
            j++;
        }
        printf("The smallest first %d elements in first array\n",c);
        for(i=0;i<c+d;i++)
        {
            if(a[i]!=0)
            {
                printf("%d\t",a[i]);
            }
        }
        printf("\n");
        printf("The last %d biggest elements in second array\n",d);
         for(i=0;i<c+d;i++)
        {
            if(b[i]!=0)
            {
                printf("%d\t",b[i]);
            }        
        }
}