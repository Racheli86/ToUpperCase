#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

//Check whether a given input has integer in it
bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == true)
      return true; //when one numeric value is found, return true
   return false;
}

bool isNum = false;

int main()
{

    string str;
    //user input
    while (isNum != true) {
        cout << "Please type a text (string only): ";
        //assign to str
        getline(cin, str);

        if (isNumeric(str)) {
            cout << "This is a Number, please type again..." << endl;
        } else {
            isNum = !isNum;
            cout << "Great! \n Now lets uppercase each 2nd letter of your text.\n";
        }
    } 

    //get the user input length and convert str to array
    int size = str.length();

    //empty string that holds the string after uppercase changes
    string str2;

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

    cout<< "Your text after uppercase is:  " << str2 <<endl;
    return 0;
    }

