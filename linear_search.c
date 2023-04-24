#include <stdio.h>

const char* linsearch(int a[8],int key){
        for(int i = 0;i <= 7;i++){
            if (a[i] == key){
                printf("Key is present\n");
                return "FOUND";
            }
    }
    return "FAIL";
}
int main() {
    
    int key;
    int a[8] = {1,2,3,4,5,6,7,8};
    printf("Enter key:\n");
    scanf("%d",&key);
    printf("%s\n",linsearch(a,key));
    return 0;
}