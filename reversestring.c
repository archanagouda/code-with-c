#include<stdio.h>
void rev(char *A);
{
    if(*A)
    {
       rev(A+1);
       printf("%c",*A);
    }
}
int main()
{
    char A[100];
    scanf("%[^\n]s",A);
    rev(A);
    return 0;
}