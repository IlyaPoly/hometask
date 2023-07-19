#include <iostream>
#include "Trie.h"

int main()
{
    //По идее лучше было бы подгружать словарик из файла, сделать не проблема, но в задании не было
    //решил лишний раз не усложнять жизнь)
    std::string words[] = {
        {"abele"},
        {"abelmosk"},
        {"aberdevine"},
        {"aberrance"},
        {"aberant"},
    };
    TrieNode* root = getNewNode();
    for (auto& word : words)
        insert(root, word);
    
    std::string res, find;
    std::cout << "Write end press 'enter' : ";
    std::cin >> find;
    if (find.size() < 3)
    {
        std::cout << "short string!";
        return 0;
    }
    findWords(root, find, res);
    std::cout << "Possible words :\n";
    std::cout << res;
}

