#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution
{
public:
    /**
     * @param word: a string
     * @return: return a boolean
     */
    bool detectCapitalUse(string& word)
    {
        //return regex_match(word,regex("[A-Z]+")) || regex_match(word, regex("[A-Z][a-z]+")) || regex_match(word, regex("[a-z]+"));
        if (word.size() == 1) return true;
        if (isupper(word[0]))
        {
            if (word.size() == 2) return true;
            if (isupper(word[1]))
            {
                for (int i = 2; i < word.size(); i++)
                {
                    if (islower(word[i])) return false;
                }
            }
            else
            {
                for (int i = 2; i < word.size(); i++)
                {
                    if (isupper(word[i])) return false;
                }
            }
        }
        else
        {
            for (int i = 2; i < word.size(); i++)
            {
                if (isupper(word[i])) return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s = Solution();
    string str = "SSSSSSS";
    cout << (s.detectCapitalUse(str) ? "True" : "False") << endl;
    return 0;
}