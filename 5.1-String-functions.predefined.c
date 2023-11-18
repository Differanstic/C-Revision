#include<stdio.h>
#include<string.h>
void main(){

    char greeting[20] = {"Hello World!"};
    char name[10] = {"Bixby!!"};

    // String Length Function
    int LengthOfString = strlen(greeting);
    printf("String Length of greeting: %d",LengthOfString);

    // String Compare Function
    if(strcmp(greeting,name) == 0){
        printf("\nStrings are Same");
    }else printf("\nStrings are not Same");

    if(strcmpi("Hello","hello") == 0){
        printf("\nStrings are Same when case is ignored!");
    }else printf("\nStrings are not Same");

    // String Copy Function
    char destination[20];
    strcpy(destination,name); // destination = name;
    printf("\nString Copied : %s",destination);

    // String Concatention
    strcat(greeting,name); // greeting = greeting + name
    printf("\nString Concatention : %s",greeting);

    // String Reverse
    strrev(name);
    printf("\nReverse String: %s",name);

    // String Upper Case
    char *nameUpper = strupr(name);
    printf("\nString Upper Case: %s",nameUpper);

    // String Lower Case
    char *nameLower = strlwr(name);
    printf("\nString Lower Case: %s",nameLower);

    // Search Sub String in String
    char subString[] = {"Wo"};
    char *result = strstr(greeting,subString);
    if(result != NULL)
        printf("\n\'%s\' Found at index : %d",result,result - greeting);
    else printf("\nString not found!!");

    // Search Char in String
    char x = '!';
    result = strchr(greeting,x);
    if(result != NULL)
        printf("\n\'%s\' Found at index : %d",result,result - greeting);
    else printf("\nChar not found!!");


}