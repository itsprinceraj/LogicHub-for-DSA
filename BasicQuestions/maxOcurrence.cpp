#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    string str;
    cin >> str;
    unordered_map<char, int> umap;

    // int countA = 0;
    // int countB = 0;

    // for (int i = 0; i < str.length(); i++)
    // {

    //     if (str[i] == 'a')
    //     {
    //         countA++;
    //     }
    //     else
    //     {
    //         countB++;
    //     }
    // }
    // cout << "count of a: " << countA << endl;
    // cout << "count of b: " << countB << endl;

    for (auto pair : str)
    {
        umap[pair]++;
    }

    for (auto c : umap)
    {
        cout << "maxNUm " << c.first << ": " << c.second << endl;
    }

    return 0;
}