#include<stdio.h>

void insertsort(int arr[], int n){

    //sorting process using insertion algorithm.
    int tempvalue,i,j;
    for(i=1;i<n;i++){
        tempvalue = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>tempvalue){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=tempvalue;
    }

    //print the sorted array.
    printf("\nSorted Array =>\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("How many elements are entered: ");
    scanf("%d",&n);
    int arr[n],i;

    for(i=0;i<n;i++){
        printf("element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    //call function
    insertsort(arr,n);
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------
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

    // sorting process using insertion algorithm.
    int j,tempvalue;
    for(i=1;i<n;i++){
        tempvalue = arr[i];
        j = i-1;
        while( j>=0 && arr[j]>tempvalue ){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=tempvalue;
    }

    //print the sorted array.
    printf("\nSorted Array =>\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

*/