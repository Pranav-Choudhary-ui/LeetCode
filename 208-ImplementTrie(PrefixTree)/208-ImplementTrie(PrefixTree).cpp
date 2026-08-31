// Last updated: 31/08/2026, 13:39:58
1class Trie {
2private:
3    class Node{
4        Node* links[26];
5        bool flag = false;
6        
7     public:
8        Node* getChar(char ch){
9            return this->links[ch-'a'];
10        }
11        void setChar(char ch, Node* new_node){
12            this->links[ch-'a'] = new_node;
13        }
14        bool getFlag(){
15            return this->flag;
16        }
17        void setFlag(){
18            this->flag = true;
19        }
20    };
21public:
22    Node* root;
23    Trie() {
24        root = new Node();
25    }
26    
27    void insert(string word) {
28        Node* node = root;
29        for(char ch:word){
30            if(!node->getChar(ch)){
31                Node* new_node = new Node();
32                node->setChar(ch, new_node);
33            }
34            node = node->getChar(ch);
35        }
36        node->setFlag();
37    }
38    
39    bool search(string word) {
40        Node* node = root;
41        for(char ch:word){
42            if(!node->getChar(ch)){
43                return false;
44            }
45            node = node->getChar(ch);
46        }
47        return node->getFlag();
48    }
49    
50    bool startsWith(string prefix) {
51        Node* node = root;
52        for(char ch:prefix){
53            if(!node->getChar(ch)){
54                return false;
55            }
56            node = node->getChar(ch);
57        }
58        return true;
59    }
60};
61
62/**
63 * Your Trie object will be instantiated and called as such:
64 * Trie* obj = new Trie();
65 * obj->insert(word);
66 * bool param_2 = obj->search(word);
67 * bool param_3 = obj->startsWith(prefix);
68 */