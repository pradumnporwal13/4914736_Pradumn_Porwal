#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* isPanagram(char* s){
    for(int i='a';i<='z';i++){
        int isCharacterPresent = 0;
        for(int j=0;s[j] != '\0';j++){
            if(i == tolower(s[j])){
                isCharacterPresent++;
                break;
            }
        }
        if(isCharacterPresent != 1){
            return "not panagram";
        }
        isCharacterPresent = 0;
    }
    return "panagram";
}

int main() {
    // Write C code here
    char s1[]="Hello My name is Bhoi";
    char s2[]="The Quick Brown Fox Jumps Over the Lazy Dog";
    printf("%s\n",isPanagram(s2));
    printf("%s\n",isPanagram(s1));
 }