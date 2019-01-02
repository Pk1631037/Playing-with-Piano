#include<iostream>
using namespace std;
main()
{
	int i,j,a[100][100],b[100][100],c[100][100];
cout<<"Enter the matrix a";
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
cout<<"Enter the matrix b";
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
//printf("Enter the matrix a");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
    for(i=0;i<3;i++)
	{cout<<"\n";
		for(j=0;j<3;j++)
		{cout<<"\t";
			cout<<c[i][j];
	//		scanf("%d",&b[i][j]);
		}
	}
	//return 0;
}
