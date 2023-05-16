
#include <iostream>
using namespace std;

bool checkab(string input)
{
    if (input.empty())
    {
        return true;
    }

    if (input[0] == 'a')
    {
        if (input.length() == 1)
        {
            return true;
        }
        else if (input[1] == 'b' && input[2] == 'b')
        {
            if (input.length() == 3)
            {
                return true;
            }
            else if (input.length() >= 4)
            {
                if (input[3] == 'a')
                {
                    string smallinput = input.substr(3);
                    checkab(smallinput);
                }
            }
        }
    }
}

int main()
{
    string input = "abb";
    bool ans = checkab(input);
    cout << ans;
}
