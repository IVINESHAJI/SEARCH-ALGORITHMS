#include <stdio.h>

int binsearch(int low,int high,int key,int a){
    int mid = (low + high) / 2;
    if (key == a[&mid]){
        printf("%s\n","FOUND");
        return key;
    }
    if (key < a[&mid]){
        high = mid - 1;
    }
    else{
        low = mid + 1;
    }
    if (low <= high){
        binsearch(low,high,key,a);
    }
    else{
        printf("%s\n","NOT FOUND");
    }
}
int main(){
    int key;
    printf("Enter the key:\n");
    scanf("%d",&key);
    int a[9] = {0,1,2,3,4,5,6,7,8};
    int low = 0;
    int high = 8;
    int bin = binsearch(low,high,key,*a);
    return 0;
}