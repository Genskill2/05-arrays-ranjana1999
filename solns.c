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
