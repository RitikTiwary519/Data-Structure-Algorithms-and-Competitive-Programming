#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* links[26];
    int prefixCount;
    int wordCount;

    Node() {
        for(int i = 0; i < 26; ++i)
            links[i] = nullptr;
        prefixCount = 0;
        wordCount = 0;
    }

    bool containsKey(char ch) {
        return links[ch - 'a'] != nullptr;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }
};

class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(string &word) {
        Node* node = root;
        for(char ch : word) {
            if(!node->containsKey(ch)) {
                node->put(ch, new Node());
            }
            node = node->get(ch);
            node->prefixCount++;
        }
        node->wordCount++;
    }

    int countWordsEqualTo(string &word) {
        Node* node = root;
        for(char ch : word) {
            if(!node->containsKey(ch)) return 0;
            node = node->get(ch);
        }
        return node->wordCount;
    }

    int countWordsStartingWith(string &prefix) {
        Node* node = root;
        for(char ch : prefix) {
            if(!node->containsKey(ch)) return 0;
            node = node->get(ch);
        }
        return node->prefixCount;
    }

    void erase(string &word) {
        Node* node = root;
        for(char ch : word) {
            Node* nextNode = node->get(ch);
            nextNode->prefixCount--;
            node = nextNode;
        }
        node->wordCount--;
    }

    ~Trie() {
        freeNode(root);
    }

    void freeNode(Node* node) {
        if (!node) return;
        for (int i = 0; i < 26; ++i) {
            if (node->links[i]) {
                freeNode(node->links[i]);
            }
        }
        delete node;
    }
};
