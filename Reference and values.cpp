#include <stdlib.h>
#include <iostream>
using namespace std;

// returns true if input character q is puctuation, else false
bool ispunctuation(char q) {
    // complete the functions here ...

    if((q >= 'a' && q<= 'z') || (q >= 'A' && q<= 'Z') || (q >= 48 && q<= 57 ))
        return false;
    else
        return true;
    
}

char* modifyAndCopy(char *raw_input) {
     // complete the functions here ...
     
     char* raw_input_new = new char[80];
     int j=0;
     
      for (int i=0;i<80;i++) {
        if(!ispunctuation(raw_input[i])){
            raw_input_new[j] = raw_input[i];
            j++;
        }
      }
      return raw_input_new;
}

char* modifyInPlace(char *raw_input) {
    // complete the functions here ...
    
    int j=0;
     
      for (int i=0;i<80;i++) {
        if(!ispunctuation(raw_input[i])){
            raw_input[j] = raw_input[i];
            j++;
        }
      }
      return raw_input;
  
}

int main() {
    // user input
    char raw_input[80] = {0};
    cout << "Please input something with punctuation in it: ";
    cin.getline(raw_input,80);

    cout << "Modify and Copy: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyAndCopy(raw_input) << endl << endl;

    cout << "Modify in Place: " << endl;
    cout << "Original: " << raw_input << endl;
    cout << "Modified: " << modifyInPlace(raw_input) << endl;
}
