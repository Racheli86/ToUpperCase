#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;


using namespace std;

//macro definitions
// #define MAX_LEN 2  // Maximum len of your name can't be more than 60

int main()
{
    
    string str;
    //user input
    cout << "Please type a string: ";
    //assign to str
    getline(cin, str);
    
    //get the user input length and convert str to array
    int size = str.length();
    char array[size + 1];
    str.copy(array, size + 1);

    //empty string that holds the string after uppercase changes
    string str2;
    cout << str << '\n';

    //for loop to uppercase each 2nd letter
    for (int i = 0; i<str.length(); i++) 
    {
        if (i % 2 == 0)                         //if modulu 0 don't uppercase
        {
            // str[i] = m[i];
            str2.push_back(str[i]);
        } else {                                //if modulu !0 uppercase it
            char ch = toupper(str[i]);
            // str[i] = ch;
            str2.push_back(ch);

        }
    }

    cout<< "Your text after uppercase is:" << str2 <<endl;
    }
  
