/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
#include<queue>
class Solution {
public:
    Node* connect(Node* root) 
    {
    queue<Node*> q;
    vector<Node*> nodearray;
    int level=0;
    int count=1;
    if(root==NULL)
    return root;
    if(root->left==NULL&&root->right==NULL)
    {
        root->next=NULL;
        return root;
    }
    q.push(root);
    q.push(NULL);
    nodearray.push_back(root);
    nodearray.push_back(NULL);

    while(!q.empty())
    {
    Node* n=q.front();
    q.pop();
    if(n!=NULL)
    {
    if(n->left!=NULL)
    {
    q.push(n->left);
    nodearray.push_back(n->left);
    }
    if(n->right!=NULL)
    {
    q.push(n->right);
    nodearray.push_back(n->right);
    }
    }
    else if(!q.empty())
    {
        q.push(NULL);
        nodearray.push_back(NULL);
    }
    }
    Node* root2=root;
    for(int i=1;i<size(nodearray);i++)
    {
    if(nodearray[i]==NULL)
    {
    root2->next=NULL;
    root2=nodearray[i+1];
    // i++;
    }    
    else
    {
    root2->next=nodearray[i];
    root2=nodearray[i];
    }
    }
    return root;
    }
};