#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    int age[n];
    for(int i=0; i<n; ++i) 
    {
        scanf("%d ", &age[i]);
    }

    for(int i=0; i<n-1; ++i) 
    {
        for (int j = i+1; j < n; ++j)
        {
            if(age[i]>age[j]) 
            {
                int temp = age[i];
                age[i] = age[j];
                age[j] = temp;
            }
        }
        
    }

    if(n%2==0) 
    {
        printf("%d %d", age[(n-2)/2], age[(n/2)]);
    }
    else
    {
        printf("%d", age[(n-1)/2]);
    }
    return 0;
}