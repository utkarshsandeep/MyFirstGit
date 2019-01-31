 #include<stdio.h>
int main()
{
int a[100];
int n,i,j,temp;
printf("Enter the limit of array");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Unsorted Array\n");
for(i=0;i<n;i++)
{
printf("%d\n ",a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<=(n-i);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Sorted Array\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}

