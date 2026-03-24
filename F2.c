void sort_even_odd(int n, int a[]) {
    int tmp[1000];
    int k = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            tmp[k++] = a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            tmp[k++] = a[i];
    for (int i = 0; i < n; i++)
        a[i] = tmp[i];
}
