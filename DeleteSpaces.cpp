#include <iostream>
#include <string>

std::string FindUsefulText(std::string text)
{

    // Skip all Begin Spaces, Find First Useful Char
    std::string::iterator FirstChar;
    for (FirstChar = text.begin(); FirstChar != text.end(); FirstChar++)
    {
        if (*FirstChar != ' ')
        {
            break;
        }
    }

    // End of String Variable
    std::string::iterator NextChar = text.end() - 1;

    // Result Iterator 
    std::string::iterator Result = FirstChar;

    // While First Iterator != Second Iterator 
    // Second Iterator = *First Iterator++ 
    for (; FirstChar != NextChar; *NextChar = *FirstChar++)
    {

        // FirstChar != NextChar For First word Symbol
        if (*FirstChar != *NextChar || *NextChar != ' ')
        {
            // Result Iterator = First Iterator 
            *Result++ = *FirstChar;
        }
    }

    // Erase With Iterators 
    text.erase(Result, NextChar);

    // Return 
    return text;
}

int main()
{
    std::string text("    Lorem ipsum dolor sit amet,    consectetur adipiscing elit,      sed do eiusmod tempor   incididunt ut labore   et dolore magna    aliqua.Ut    enim ad minim veniam    ");
    std::cout << FindUsefulText(text);
}