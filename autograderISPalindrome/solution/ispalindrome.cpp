#include <string>

using namespace std;
bool is_palindrome(int indata)
{
    string str = to_string(indata);
    int length = str.length();

    for (int i = 0; i < (length / 2); i++)
        if (str[i] != str[length - 1 - i])
            return false;

    return true;    
}