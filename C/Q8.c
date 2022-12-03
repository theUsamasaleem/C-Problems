#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    char input_text[20];
    int j = 0;
    int i = 0;
    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Enter your message: ");
    scanf("%s", &input_text);
    strrev(input_text);

    for (i=0; i<strlen(input_text); i++){
        j = 0;
        while(alphabets[j]!=input_text[i]){
            j++;
        }
        printf("%d", j);
    }
    
    return 0;
}
