#include<stdio.h>
int main()
{
	int arr[5]={1 , 4 , 6 , 8 , 7};
	int n ;
	scanf("%d" , &n);
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
	{
		if(n == arr[i])
		{
			printf("Vi tri phan tu trong mang la\n : %d" , i);	
		}
		break;		
	}
	for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
	{
		if(n != arr[i])
		{
			printf("khong ton tai\n");			
		}
		break;		
	}
	return 0 ; 		
}
