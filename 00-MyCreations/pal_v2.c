#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void PalindromeCreator(char *str) {

    int i;
    int j;
    
    int k;
    int l;

    int cont = 0;

    int size;
    int len = 0;

    bool isPalindrome = false;
    bool internal = false;

    //size
    for(size = 0; str[size] != '\0'; size++)
        len++;

    i = 0;
    j = len - 1;


    while(i != j && i < j && !internal) {
        if(str[i] != str[j] && j >= i + 2) {        
            j--;
            if(j < i + 2) {
                i++;
                j = len - 1;
            }
        } else { //equals            
            k = i;
            l = j;

            while(str[i++] == str[j--] && j > i && !internal) {
                cont++;
                isPalindrome = true;
                if(str[i + 1] != str[j - 1]) {
                    internal = true;
                    break;
                }
            }
                
        }
    }

    if(isPalindrome && cont > 0) {
        //left
        for(int q = 0; q < k; q++)
            printf("%c", str[q]);
        //middle
        if(internal) {
            if((j - i) - 1 > 3) {
                printf("not posible");
            } else {
                if((j - i) - 1 == 2) {
                    printf("%c",str[i + 1]);
                } else {
                    for(int q = i + 1; q < i + 3; q++)
                        printf("%c", str[q]);
                }
            }
        }
        //right
        for(int r = l + 1; r < len; r++)
            printf("%c", str[r]);
    } else {
        printf("not possible");
    }
    

}


int main () {
    char test[] = "xabjchbau";
    PalindromeCreator(test);
    return 0;
}
