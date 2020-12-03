#include<stdio.h>
int main()
{
    int start, end, mid, n,i;
    scanf("%d",&n);
    int A[100];
    for( i = 0; i < n; i++)
    {
       scanf("%d",&A[i]);
    }
    start = 0;
    end = n - 1;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if((mid == 0 || A[mid - 1] <= A[mid]) && (mid == n - 1 || A[mid] >= A[mid + 1]))
            printf("Peak value is %d", A[mid]);
        if(mid > 0 && A[mid - 1] > A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}