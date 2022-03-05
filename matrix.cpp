#include<iostream>
#include<stdio.h>

using namespace std;
class matrix
{
    public:
    
        int rows,cols;
        int i,j,k;
        int a[3][3];
        int b[3][3];
        int c[3][3];
        int d[3][3];
        void get(int row,float col)
        {
            rows=row;
            cols=col;
        }
        void mat()
        {
            printf("Enter the first matrix:\n");
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("\n");
            printf("Enter the second matrix:\n");
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("\n");
        }
        void addmat()
        {
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("\n");
        }
        void mulmat()
        {
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    for(k=0;k<rows;k++)
                    {
                        d[i][j]=a[i][k]*b[k][j];
                    }    
                }
            }
            printf("\n");
        }
        void display()
        {
            cout << "Rows are:" << rows <<"\n";
            cout << "Columns are:" << cols << "\n";
            cout << "Matrix A:\n";
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
            cout << "Matrix B:\n";
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            cout << "Addition is :" << "\n";
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
            cout << "Multiplication is:"  << "\n";
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    printf("%d\t",d[i][j]);
                }
                printf("\n");
            }
        }
};

int main()
{
    matrix mmm;
    int r,c;
    cout <<"Enter rows:\n";
    cin >> r;
    cout << "Enter columns:\n";
    cin >> c;
    mmm.get(r,c);
    mmm.mat();
    mmm.addmat();
    mmm.mulmat();
    mmm.display();
    return 0;
}
