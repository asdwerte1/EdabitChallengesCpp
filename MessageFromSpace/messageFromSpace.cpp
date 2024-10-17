#include <iostream>
#include <string>
using namespace std;

string spaceMessage(string msg)
{
    // recursive function base case
    if (msg.find('[') == std::string::npos)
    {
        // Pull out number, and multiply string
        string strNum;
        string letters = "";
        int num;
        for (char elem : msg)
        {
            if (isdigit(elem))
            {
                strNum.push_back(elem);
                continue;
            }
            else
            {
                if (!strNum.empty())
                {
                    num = stoi(strNum);
                    strNum.clear();
                }
                
                letters.append(num, elem);
                num = 1;
            }   
        }
        return letters;
    }
    else
    {
        int start = msg.find('[');
        // Find corresponding closing bracket
        int end = msg.find(']');
        int length = end - start + 1;
        // create substring of what is inside the square brackets
        string subString = msg.substr(start + 1, end - start - 1);
        string expanded = spaceMessage(subString);
        // Recursive call - replacing block with result
        msg = msg.replace(start, length, expanded);
        return spaceMessage(msg);
    }
}

int main()
{
    string msg = "IF[2E]LG[5O]D";
    cout << spaceMessage(msg) << endl;
    return 0;
}