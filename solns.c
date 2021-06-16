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
