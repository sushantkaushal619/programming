int i=0,j=n-1;
    while(i<=j)
    {
        for(int x=0;x<n;x++)
        {
            int temp=a[x][i];
            a[x][i]=a[x][j];
            a[x][j]=temp;
        }
        i++;
        j--;
    }