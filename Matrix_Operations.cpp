# include<stdio.h>
       void display(int [][3]);
       int main()
       {
           int c;
           void add();
           void sub();
           void mul();
           void Trans();
           void symm();
             printf("\n\t\t Matrix Manipulation Functions (for 3 X 3 Matrix)");
             
           printf("\n\t\t ------------------------------------------------\n");
           printf("\n Matrix Addition            : 1");
           printf("\n Matrix Subtraction         : 2");
           printf("\n Matrix Multiplication      : 3");
           printf("\n Find Transpose Matrix      : 4");
           printf("\n Matrix is Symmetric or not : 6\n");
           printf("\n Enter Your Choice          : ");
           scanf("%d",&c);
           switch(c)
           {
               case 1:
                   add();
                   break;
               case 2:
                   sub();
                   break;
               case 3:
                   mul();
                   break;
               case 4:
                   Trans();
                   break;
               case 5:
                   symm();
                   break;
               default:
                   printf("\nInvalid Choice");
           }
           return 0;
       }




       void add()
       {
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void addition(int [][3],int [][3],int [][3]);
           getmatrix(x);
           getmatrix(y);
           addition(x,y,z);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Addition (Result): - \n");
           display(z);
       }
       void getmatrix(int t[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   printf("Enter element [%d][%d] : ",i,j);
                   scanf("%d",&t[i][j]);
               }
           }
       }
       void addition(int p[][3],int q[][3],int r[][3])
       {     int i,j;
           for(i=0;i<3;i++)
           {      for(j=0;j<3;j++)
                   r[i][j]=p[i][j]+q[i][j];
           }
       }
       void sub()
       {
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void subtraction(int [][3],int [][3],int [][3]);
           
           getmatrix(x);
           getmatrix(y);
           subtraction(x,y,z);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Subtraction (Result): - \n");
           display(z);
       }
       void subtraction(int p[3][3],int q[3][3],int r[3][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   r[i][j]=p[i][j]-q[i][j];
           }
       }
       void mul()
       {
           int x[3][3],y[3][3],z[3][3];
           void getmatrix(int [][3]);
           void multiplication(int [][3],int [][3],int [][3]);
           
           getmatrix(x);
           getmatrix(y);
           multiplication(x,y,z);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Matrix 2: - \n");
           display(y);
           printf("\n - : Matrix Multiplication (Result): - \n");
           display(z);
       }
       void multiplication(int p[][3],int q[3][3],int r[3][3])
       {
           int i,j,k;
           for(i=0;i<3;i++)                 
//condition i< total row of matrix1
           {
               for(j=0;j<3;j++)         
//condition i< total col of matrix1 or//condition i< total row of matrix2
{
                   r[i][j]=0;
                   for(k=0;k<3;k++) //condition i< total col of matrix2
                       r[i][j]=r[i][j]+(p[i][j]*q[j][k]);
               }
           }
       }
       void Trans()
       {
           int x[3][3],y[3][3];
           void getmatrix(int [][3]);
           void transpose(int [][3],int [][3]);
           getmatrix(x);
           transpose(x,y);
           printf("\n - : Matrix 1: - \n");
           display(x);
           printf("\n - : Transpose Matrix : - \n");
           display(y);
       }
       void transpose(int p[][3],int q[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   q[i][j]=p[j][i];
           }
       }
       void symm()
       {
           int x[3][3],y[3][3];
           void getmatrix(int [][3]);
           void transpose(int [][3],int [][3]);
           int symmetric(int [][3],int [][3]);
           getmatrix(x);
           transpose(x,y);
           if(symmetric(x,y)==1)
               printf("\nMatrix is Symmetric");
           else
               printf("\nMatrix is Not Symmetric");
       }
       int symmetric(int p[][3],int q[][3])
       {
           int i,j;
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
               {
                   if(q[i][j]!=p[i][j])
                       return 0;
               }
           }
           return 1;
       }
       void display(int m[][3])
       {
           int i,j;
           printf("\n\n");
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   printf("%d  ",m[i][j]);
               printf("\n");
           }
       }

