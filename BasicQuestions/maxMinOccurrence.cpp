#include <iostream>
#include <unordered_map>
#include <limits>
using namespace std;

int main()
{
    string str;
    cin >> str;

    unordered_map<char, int> countMap;
    for (char c : str)
    {
        countMap[c]++;
    }

    char maxChar = '\0', minChar = '\0';
    int maxCount = 0, minCount = numeric_limits<int>::max();

    for (auto &pair : countMap)
    {
        if (pair.second > maxCount)
        {
            maxCount = pair.second;
            maxChar = pair.first;
        }

        if (pair.second < minCount)
        {
            minCount = pair.second;
            minChar = pair.first;
        }
    }

    cout << "Max  char: " << maxChar << " : " << maxCount << endl;
    cout << "Min char: " << minChar << " : " << minCount << endl;

    return 0;
}
