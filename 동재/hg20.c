#include<stdio.h>
#include<string.h> 
size_t my_strlen1(char arr[]);
size_t my_strlen2(char arr[]);
int my_strcmp(char arr1[],char arr2[]);

int main(void){
    char arr[]={"abcdefgijkoo"};
    char arr1[]={"Abcdefgijkoo"};
    
    printf("strlen() = %lu \nmy_strlen1()=%lu\n",strlen(arr),my_strlen1(arr));
    printf("my_strlen2() = %lu\n",my_strlen2(arr));
    printf("strcmp() = %d\n",strcmp(arr1,arr)); //이유는 모르겠으나 strcmp에 대하여 -32라는 값이 나옴...
    printf("my_strcmp = %d\n",my_strcmp(arr1,arr));
    return 0;
}

size_t my_strlen1(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }

    return count;
}
size_t my_strlen2(char arr[]){
    int i=0;
    char *arr1=arr;
    while(arr[i]!='\0'){
        arr1++;
        i++;
    }
    return arr1-arr;
}
int my_strcmp(char arr1[],char arr2[]){
    for(int i=0;arr1[i]!='\0'&&arr2[i]!='\0';i++){
        if(arr1[i]>arr2[i])
            return 1;
        else if(arr1[i]==arr2[i])
            return 0;
        else
            return -1;
    }
    return 0;
}