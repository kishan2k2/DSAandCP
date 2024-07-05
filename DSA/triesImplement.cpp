#include<iostream>
using namespace std;

struct Node{
    Node* links[26];
    bool flag = false;
    
    bool containsKey(char ch){
        return links[ch-'a'] != NULL;
    }

    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }
    
    void setEnd(){
        flag = true;
    }

    bool isEnd(){
        return flag;
    }
};

class Trie{
    private:
        Node* root;
    public: 
        // Constructor
        Trie(){
            root = new Node();
        }

        void insert(string word){
            Node* node = root;
            for(int i=0; i<word.length(); i++){
                // Check if the word is exist in the node
                // If it does then continue.
                // If it doesn't then insert it and continue.
                if(!node->containsKey(word[i])){
                    node->put(word[i], new Node());
                }
                node = node->get(word[i]);
            }
            node->setEnd();
        }

        bool search(string word){
            // iterate for each of the character if it doesn't exist then return false, if all the charcters exist return the checkend flag.
            Node* node = root;
            for(int i=0; i<word.size(); i++){
                if(!node->containsKey(word[i]))
                    return false;
                node = node->get(word[i]);
            }
            return node->isEnd();
        }

        bool startsWith(string prefix){
            Node* node = root;
            for(auto i:prefix){
                if(!node->containsKey(i))
                    return false;
                node = node->get(i);
            }
            return true;
        }
};

int main(){
    Trie Trie;
    cout<<"Inserting apple, app, appy"<<endl;
    Trie.insert("apple");
    Trie.insert("app");
    Trie.insert("appy");
    cout<<(Trie.search("ap")? "Ap exist":"AP doesn't exist")<<endl;
    cout<<(Trie.startsWith("ap")? "Start with AP":"Doesn't start with AP")<<endl;
    return 0;
}