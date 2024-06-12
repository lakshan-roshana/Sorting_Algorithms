#include<stdio.h>

void selectionsort(int arr[],int n){

    //sorting process using selection sort algorithm.
    int i,j,tempvalue,minimumIndex;
    for(i=0;i<n-1;i++){
        minimumIndex = i;

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minimumIndex]){
                minimumIndex = j;
            }
        }
        tempvalue = arr[i];
        arr[i] = arr[minimumIndex];
        arr[minimumIndex] = tempvalue;
    }

    //Sorted Array.
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
    selectionsort(arr,n);
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------
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

    int j,tempvalue,minimumIndex;
    for(i=0;i<n-1;i++){
        minimumIndex = i;

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minimumIndex]){
                minimumIndex = j;
            }
        }

        tempvalue = arr[i];
        arr[i] = arr[minimumIndex];
        arr[minimumIndex] = tempvalue;
    }

    //sorted array.
    printf("\nSorted Array =>\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}

*/