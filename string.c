#include<stdio.h>
#include<string.h>

int main (){
    
    char ped[]="King of Hell ";
    char ged[]="Zoro";
    char sed[25];//Declare the size of variable
    
    strcpy(sed, ped);//copy the string
    strcat(ped, ged);//combine the string
    
    printf("%d\n", strlen(ped));//Output of the length of the string
    printf("%lu\n", sizeof(ped));//Output of the size of the string that initiates with 0
    
    printf("%s\n", sed);//Output of copied string
    printf("%s\n", ped);//Output of combined or concatenated string
    printf("*%s* %s",ged,ped);
    
    return 0;
}
