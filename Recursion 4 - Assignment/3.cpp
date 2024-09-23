#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void generate(vector<string> &finalAns, string &ans, string &str, int idx)
{
    if (idx == str.size())
    {
        finalAns.push_back(ans);
        return;
    }
    generate(finalAns, ans, str, idx + 1);
    if (ans.empty() || idx > 0 && str[idx - 1] == ans[ans.size() - 1]) // // idx > 0 to avoid accessing ans[-1], which is invalid
    {
        ans.push_back(str[idx]);
        generate(finalAns, ans, str, idx + 1);
        ans.pop_back();
    }
}

int main()
{
    string s1;
    cout << "Enter the first string: " << endl;
    cin >> s1;
    string s2;
    cout << "Enter the second string: " << endl;
    cin >> s2;
    vector<string> subsstr1;
    string ans1;
    vector<string> subsstr2;
    string ans2;
    generate(subsstr1, ans1, s1, 0);
    generate(subsstr2, ans2, s2, 0);
    int maxSize = 0;
    for (int i = 0; i < subsstr1.size(); i++)
    {
        for (int j = 0; j < subsstr2.size(); j++)
        {
            if (subsstr1[i] == subsstr2[j])
            {
                maxSize = max(maxSize, (int)subsstr1[i].size()); // Cast subsstr1[i].size() -> size_type (unsigned) to int to avoid type mismatch with maxSize.
            }
        }
    }
    cout << "length of the longest common substring from two given strings = " << maxSize;
    return 0;
}
