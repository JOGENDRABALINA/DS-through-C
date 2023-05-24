#include<stdio.h>
void merge_sorting(int *a,int l,int m,int r)
{
   	int res[r-l+1];
	int i=l,j=m+1,k=0,z;
	while (i<=m && j<=r)
	{
	if (a[i]<=a[j])
	{	
		res[k++]=a[i++];
	}
	else
	{
		res[k++]=a[j++];
	}
}
	while (i<=m) res[k++]=a[i++];
	while (j<=r) res[k++]=a[j++];
	for (z=l;z<=r;z++)
	{
		a[z]=res[z];
	}
}	
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sorting(a,0,5,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}








