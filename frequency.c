/q1)Given a paragraph count the frequency of vowels and consonants in each word and capitalize the vowels/consonants in each word whose frequency is the highest.
//If the frequency of vowels and consonants are equal then capitalize the whole word.




#include <stdio.h>  
int main()  
{  
    //Counter variable to store the count of vowels and consonant  
   int i, vCount = 0, cCount = 0;  
   char str[] = "This is a really simple sentence";  
   for(i = 0; i < strlen(str); i++){  
       str[i] = tolower(str[i]);  
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {  
           //Increments the vowel counter  
            vCount++;  
        }  
        else if(str[i] >= 'a' && str[i] <= 'z'){  
            //Increments the consonant counter  
            cCount++;  
        }  
   }  
   printf("Number of vowels : %d\n", vCount);  
   printf("Number of consonant : %d", cCount);  
   return 0;  
}  
