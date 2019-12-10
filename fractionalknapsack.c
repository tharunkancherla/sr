#include<stdio.h>
int findmax(float arr[],int n)
{
	int min=-999,index=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>min){
			min=arr[i];
			index=i;
		}
	}
	return index;
}
int main() 
{ 
	int val[] = {60,100,120}; 
	int wt[] = {10, 20, 30};
	int n = sizeof(val)/sizeof(val[0]);
	float ratios[n],rat;
	int W = 50,currwt=0,profit=0;
	for(int i=0;i<n;i++){
		rat=val[i]/wt[i];
		ratios[i]=rat;
	}
		
	for(int i=0;i<n;i++)
		printf("%f ",ratios[i]);
	printf("\n");
	while(currwt<W)
	{
		printf("profit=%d weight=%d\n",profit,currwt);
		int u=findmax(ratios,n);
		if(currwt+wt[u]>W)
		{
		    float ap = W-currwt;
		    float pa = wt[u];
			float req=((float)ap)/((float)pa);
			printf("%f\n",req);
			currwt+=(W-currwt);
			profit+=req*val[u];
		}
		else
		{
			currwt+=wt[u];
			profit+=val[u];
		}
		ratios[u]=-999.0;
		
	}
	printf("profit=%d weight=%d",profit,currwt);
} 
