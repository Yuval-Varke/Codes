#include <iostream>
#include <queue>
using namespace std;

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        
        cout<<front->data<<endl;
        
        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
    }
}





int main() {
    levelOrder(root);
    return 0;
}