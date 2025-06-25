#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int i = 0, j = 0;

    // Union
    printf("Union: {");
    int first = 1;
    while (i < n && j < m)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            if (first) first = 0;
            else printf(", ");
            printf("%d", a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            if (first) first = 0;
            else printf(", ");
            printf("%d", b[j]);
            j++;
        }
        else
        {
            if (first) first = 0;
            else printf(", ");
            printf("%d", a[i]);
            i++;
            j++;
        }
    }
    // Remaining in a[]
    while (i < n)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            if (first) first = 0;
            else printf(", ");
            printf("%d", a[i]);
        }
        i++;
    }
    // Remaining in b[]
    while (j < m)
    {
        if (j == 0 || b[j] != b[j - 1])
        {
            if (first) first = 0;
            else printf(", ");
            printf("%d", b[j]);
        }
        j++;
    }
    printf("}\n");

    // Intersection
    i = 0;
    j = 0;
    first = 1;
    printf("Intersection: {");
    while (i < n && j < m)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            if (first) first = 0;
            else printf(", ");
            printf("%d", a[i]);
            i++;
            j++;
        }
    }
    printf("}\n");

    return 0;
}

