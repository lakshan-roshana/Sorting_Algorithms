#include<stdio.h>
void bubblesort(int arr[], int n){

    //sorting process using bubble sort
    int i,j,tempvalue;
    for(i=0;i<n-1;i++){

        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                tempvalue = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempvalue;
            }
        }
    }

    //print sorted array
    printf("\nSorted Array => \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("how many elements are entered: ");
    scanf("%d",&n);
    int arr[n],i;

    //ask from user for array.
    for(i=0;i<n;i++){
        printf("element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    //call function
    bubblesort(arr,n);
}

//---------------------------------------------------------------------------------------------------------------------------------
//without function 
/*

#include<stdio.h>

int main(){
    int n;
    printf("how many elements are entered: ");
    scanf("%d",&n);
    int arr[n],i;

    //ask from user for array.
    for(i=0;i<n;i++){
        printf("element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    //sorting process using bubble sort
    int j,tempvalue;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                tempvalue = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tempvalue;
            }
        }
    }

    //print sorted array.
    printf("\nSorted Array => \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

*/