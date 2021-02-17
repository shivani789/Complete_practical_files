#include<bits/stdc++.h>
using namespace std;
static int a = 7;
static int b = 6;
string encryption(string m) {
   //Cipher Text initially empty
   string c = "";
   for (int i = 0; i < m.length(); i++) {
      // Avoid space to be encrypted
      if(m[i]!=' ')
         // added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
         c = c + (char) ((((a * (m[i]-'A') ) + b) % 26) + 'A');
      else
         //else append space character
         c += m[i];
   }
   return c;
}
string decryption(string c) {
   string m = "";
   int a_inverse = 0;
   int flag = 0;
   //Find a^-1 (the multiplicative inverse of a
   //in the group of integers modulo m.)
   for (int i = 0; i < 26; i++) {
      flag = (a * i) % 26;
      //Check if (a * i) % 26 == 1,
      //then i will be the multiplicative inverse of a
      if (flag == 1) {
         a_inverse = i;
      }
   }
   for (int i = 0; i < c.length(); i++) {
      if(c[i] != ' ')
         // added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
         m = m + (char) (((a_inverse * ((c[i]+'A' - b)) % 26)) + 'A');
      else
         //else append space character
         m += c[i];
   }
   return m;
}
int main(void) {
    string plaintext, encrypt, decrypt;
     cout<<"Enter your choice: \n";
   cout<<"1: Encryption \t\t 2: Decryption \t\t 3: Quit\n";
   int choice;
   cin>>choice;
   if(choice==3)
   return 0;
   if(choice==1){
     cout<<"Enter plaintext: \n";
   cin>>plaintext;
   encrypt = encryption(plaintext);
   cout << "Original Message: "<< plaintext << endl;
   cout << "Encrypted Message: " << encrypt << endl;
   }
   else if(choice==2){
        cout<<"Enter encrypted text: \n";
   cin>>encrypt;
   decrypt = decryption(encrypt);
    cout << "Encrypted Message: "<< encrypt << endl;
   cout << "Decrypted Message: " << decrypt << endl;
   }
}

