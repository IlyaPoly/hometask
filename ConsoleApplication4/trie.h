#pragma once
#ifndef TRIE_H
#define TRIE_H

#include <string>


const int ALPHABET_SIZE = 26;

// Структура узела дерева 
struct TrieNode
{
    struct TrieNode* children[ALPHABET_SIZE];
    // isEndOfWord - true, если ключ является концом слова
    bool isEndOfWord;
};

TrieNode* getNewNode(void);
void insert(TrieNode*, std::string);
bool search(TrieNode*, std::string);
bool isEmpty(TrieNode*);
TrieNode* remove(TrieNode*, std::string, int depth = 0);
void findWords(TrieNode*, std::string&, std::string&);
void retOneWord(TrieNode*, char[], int, std::string&);

#endif
