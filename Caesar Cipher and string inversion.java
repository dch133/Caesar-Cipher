public class StringsAndChars{
  
  public static void main(String[] args){
    /*String s = "potato";
    System.out.println(s.charAt(0));
    char letter = s.charAt(1);
    System.out.println(letter);*/
    
    String answer = encrypt("password", 5);
    System.out.println(answer);
    
    //printAlphabet();
    
    //Invert characters of a string
    String string = "qwerty";    
    String result="";
    for (int i=string.length()-1; i>=0; i--) {
        result = result + string.charAt(i);
    }
    System.out.println(result);
  }
  
  //method to perform basic encryption
  public static String encrypt(String inputString, int shift){
    String output = "";
    int numChars = inputString.length();
    //loop through the string
    for(int i=0; i<numChars; i++){
      char letter = inputString.charAt(i);
      //System.out.print(letter+ " ");
      char newLetter = (char) (inputString.charAt(i) + shift);
      //System.out.println(newLetter);
      
      output = output + newLetter;
    }
    return output;
  }

  //method to print the alphabet
  public static void printAlphabet(){
    //65 is the ASCII value of A
    //90 is the ASCII value of Z
    for(int i=65; i<=90; i++){
      System.out.print((char) i);
    }
    System.out.println();
    //looping over characters
    for(char x = 'A'; x<='Z'; x++){
      System.out.print(x);
    }
  }
}