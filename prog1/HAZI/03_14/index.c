#include <stdio.h>
#include <stdlib.h>

int index(int n, int t[], int x)
{
    for (int i=0; i<n; i++)
    {
        if (t[i] == x)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int t[] = {5,11,7,9,43,3,82};
    int n = 7;
    int x;
    
    printf("Adj meg egy szamot [egesz]: ");
    scanf("%d", &x);
    if (index(n,t,x) == n)
        printf("Nem tartalmazza");
    else
        printf("A szam a tomb %d. eleme", index(n,t,x)+1);
    

    return 0;
}