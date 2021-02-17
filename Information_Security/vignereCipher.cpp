#include <iostream>
#include <string>
using namespace std;

   string encryption(string plaintext, string key) {
      string ciphertext;
      for (int i = 0; i < plaintext.length(); ++i) {
         char c = plaintext[i];
         if(c!=' '){
             ciphertext += (((plaintext[i]-97) + (key[i%key.length()]-97))%26)+97;
         }
         else{
             ciphertext = " ";
         }
      }
      return ciphertext;
   }
   string decryption(string ciphertext, string key) {
      string plaintext;
      for(int i=0;i<ciphertext.length();i++){
          if(ciphertext[i]!=' '){
              plaintext += (((ciphertext[i]-97)+(26-(key[i%key.length()]-97)))%26)+97;
          }
          else{
              plaintext = " ";
          }
      }
      return plaintext;
   }

int main() {
   string plaintext, key, encrypt, decrypt;
   cout<<"VIGNERE CIPHER ENCODING AND DECODING TECHNIQUE \n\n\n";
   cout<<"Enter your choice: \n";
   cout<<"1: Encryption \t\t 2: Decryption \t\t 3: Quit\n";
   int choice;
   cin>>choice;
   if(choice==3)
   return 0;
   cout<<"Enter plaintext: \n";
   cin>>plaintext;
   cout<<"Enter key: \n";
   cin>>key;
   if(choice==1){
   encrypt = encryption(plaintext, key);
   cout << "Original Message: "<< plaintext << endl;
   cout << "Encrypted Message: " << encrypt << endl;
   }
   else if(choice==2){
   	 encrypt = encryption(plaintext, key);
   decrypt = decryption(encrypt, key);
    cout << "Original Message: "<< plaintext << endl;
   cout << "Decrypted Message: " << decrypt << endl;
   }
}
