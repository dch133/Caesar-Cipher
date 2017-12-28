#include <stdio.h>

int main(){

  char sentence[400];

  printf("Sentence: ");


  //build a character array from the sentence user-inputed
  for(int x =0;x<400;x++){
    scanf("%c",&sentence[x]);
    char end = sentence[x]; 
    if(end == '\n'){
      sentence[x] = '\0';
      break;
    }
  }

  //get input key integer
  int key;
  printf("Key: ");
  scanf("%d",&key);

  printf("Inputed message: ");
  int x = 0;
  while (sentence[x] != '\0'){
    printf("%c", sentence[x]);
    x++;
  }
  printf("\n");

  //Encryption: Shift all characters in array by a key and print them
  printf("Encrypted message: ");

  x=0;
  while (sentence[x] != '\0'){
   int letter = sentence[x]; 
   if (letter == ' ') {
      printf("%c", sentence[x++]); continue;
   }
   //encrypt uppercase letter
   if (letter >= 'A' && letter <='Z'){
     int newLetter = ( (letter-'A'-key) % 26 + 'A');
     //make sure the letter is not a negative value
     if (newLetter < 'A') newLetter += 26;
     sentence[x]=(char) newLetter;
   }
   //encrypt lowercase letter
   if (letter >= 'a' && letter <='z'){
     int newLetter=(letter-'a'-key) % 26 + 'a';
     if (newLetter < 'a') newLetter += 26; 
     sentence[x]=(char) newLetter;
   } 
   printf("%c", sentence[x]);
   x++;
  }
  printf("\n");

  //Decryption: Shift back the characters in array by a key and print them
  printf("Decrypted message: ");

   x=0;
  while (sentence[x] != '\0'){
   int letter = sentence[x]; 
   if (letter == ' ') {
       printf("%c", sentence[x++]); continue;
   }
   //decrypt uppercase letter
   if (letter >= 'A' && letter <='Z'){
     int newLetter = ( (letter-'A'+key) % 26 + 'A');
     //make sure the letter is not a beyond ASCII of Z
     if (newLetter > 'Z') newLetter -= 26;
     sentence[x]=(char) newLetter;
   }
   //decrypt lowercase letter
   if (letter >= 'a' && letter <='z'){
     int newLetter=(letter-'a'+key) % 26 + 'a';
     if (newLetter > 'z') newLetter -= 26; 
     sentence[x]=(char) newLetter;
   } 
   printf("%c", sentence[x]);
   x++;
  }
  printf("\n");
  
  return 0;
}
