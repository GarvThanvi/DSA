#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

class TrieNode{
    public:
     char value;
     unordered_map<char, TrieNode*> children;
     bool isTerminal;

     TrieNode(char data){
        value = data;
        isTerminal = false;
     }
};

void insertIntoTrie(TrieNode* root, string word){
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }
    
    char ch = word[0];
    TrieNode* child;

    if(root->children.count(ch) == 1){
        child = root->children[ch];
    }else{
        child = new TrieNode(ch);
        root->children[ch] = child;
    }

    insertIntoTrie(child, word.substr(1));
}

bool searchTrie(TrieNode* root, string word){
    if(word.length() == 0){
        return root->isTerminal;
    }

    char ch = word[0];
    TrieNode* child;
    if(root->children.count(ch) == 1){
        child = root->children[ch];
    }else{
        return false;
    }

    bool recursionKaAns = searchTrie(child, word.substr(1));
    return recursionKaAns;
}

void removeFromTrie(TrieNode* root, string word){
    if(word.length() == 0){
        if(root->isTerminal){
            root->isTerminal = false;
        }
        return;
    }

    char ch = word[0];
    TrieNode* child;
    if(root->children.count(ch) == 1){
        child = root->children[ch];
    }else{
        return;
    }
    removeFromTrie(child, word.substr(1));
}

void findAllStrings(TrieNode* root, vector<string>&ans, string str){
    if(root->isTerminal){
        ans.push_back(str);
    }

    for(auto i: root->children){
        str.push_back(i.first);
        findAllStrings(i.second, ans, str);
        str.pop_back();
    }
}

void findWordsWithPrefix(TrieNode* root, string prefix, vector<string>&ans){
    if(prefix.length() == 0){
        findAllStrings(root, ans, "");
    }

    char ch = prefix[0];
    TrieNode* child;
    if(root->children.find(ch) != root->children.end()){
        child = root->children[ch];
    }else{
        return;
    }

    findWordsWithPrefix(child, prefix.substr(1), ans);
}

int main(){
    TrieNode* root = new TrieNode('-');
    insertIntoTrie(root, "cover");
    insertIntoTrie(root, "car");
    insertIntoTrie(root, "care");
    insertIntoTrie(root, "snake");
    insertIntoTrie(root, "fivefoot");
    insertIntoTrie(root, "extremelyWell");
    insertIntoTrie(root, "coward");
    insertIntoTrie(root, "selfobsessed");
    insertIntoTrie(root, "tag");
    insertIntoTrie(root, "take");
    insertIntoTrie(root, "bid");

    vector<string> ans;
    string prefix = "ca";
    findWordsWithPrefix(root, prefix, ans);
    for(auto word: ans){
        cout << prefix+word << " ";
    }cout << endl;

    // cout << searchTrie(root, "bid");
    // removeFromTrie(root, "bid");
    // cout << searchTrie(root, "bid");
    return 0;
}