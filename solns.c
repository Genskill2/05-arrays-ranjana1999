/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=large){
            large=arr[i];
        }
        else{
            continue;
        }
    }
    return(large);
}
int min(int arr[],int n){
    int small=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=small){
            small=arr[i];
        }
        else{
            continue;
        }
    }
    return(small);
}
float average(int arr[],int n){
    float sum=0,avg=0;
    for(int i=0;i<n;i++){
	sum=sum+arr[i];
       }
    avg=sum/n;
   
    return(avg);
}
int mode(int arr[], int n){
	int i, j,b[100], k = 0,  max = 0, mode;
    	for (i = 0; i < n - 1; i++)
    	{
        	mode = 0;
        	for (j = i + 1; j < n; j++)
        	{
            		if (arr[i] == arr[j]) {
                		mode++;
            		}
        	}
        	if ((mode > max) && (mode != 0)) {
            		k = 0;
            		max = mode;
            		b[k] = arr[i];
            		k++;
        	}
       		else if (mode == max) {
           		b[k] = arr[i];
            		k++;
        	}
    	}
	for (i = 0; i < k; i++){
		return (b[i]);
	
	}
}
   


