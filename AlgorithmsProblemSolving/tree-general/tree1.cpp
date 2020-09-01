#include <bits/stdc++.h>

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define loop(n) for(int i=0 ; i<n ; i++)

typedef long long int lld;

using namespace std;

//function prototypes
void inOrder(struct Node *node);
void delete_node(struct Node* root, struct Node* rightmost);
Node *delete_process(struct Node *root, int delete_data);
void levelOrder(Node *root);
void givenLevel(Node *node, int level);
int height(Node *node);
void BFTwithQ(Node *root);


//BINARY TREE
struct Node{

    int data;
    struct Node *left, *right;
};

struct Node *newNode(int data){

    struct Node* node = new Node;
    node->data  = data;
    node->left  = NULL;
    node->right = NULL;

    return node;
};

//TREE INORDER TRAVEL
void inOrder(struct Node *node){

    if(!node)
        return;

    inOrder(node->left);
    printf("%d ",node->data);
    inOrder(node->right);
}

void delete_node(struct Node* root, struct Node* rightmost){

    queue<struct Node*> q;
    q.push(root);

    struct Node* temp;

    while(!q.empty()){

        temp = q.front();
        q.pop();

        if(temp == rightmost){
            temp = NULL;
            delete(rightmost);
            return;
        }

        if(temp->right){
            if(temp->right == rightmost){
                temp->right = NULL;
                delete(rightmost);
                return;
            }
            else
                q.push(temp->right);
        }

        if(temp->left){
            if(temp->left == rightmost){
                temp->left = NULL;
                delete(rightmost);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}

Node *delete_process(struct Node *root, int delete_data){

    if(root == NULL)
        return NULL;

    if(root->left == NULL && root->right == NULL){
        if(root->data == delete_data)
            return NULL;
        else
            return root;
    }

    queue<struct Node*> q;
    q.push(root);

    struct Node* temp;
    struct Node* key_node = NULL;

    while(!q.empty()){

        temp = q.front();
        q.pop();

        if(temp->data == delete_data)
            key_node = temp;

        if(temp->left)
            q.push(temp->left);

        if(temp->right)
            q.push(temp->right);
    }

    if(key_node != NULL){

        int x = temp->data;
        delete_node(root,temp);
        key_node->data = x;
    }

    return root;
}

void levelOrder(Node *root){

    int h = height(root);
    for(int i = 1; i <= h; i++)
        givenLevel(root, i);
}

void givenLevel(Node *node, int level){

    if(node == NULL)
        return;

    else if(level == 1)
        cout << node->data << " ";

    else{
        givenLevel(node->left, level-1);
        givenLevel(node->right, level-1);
    }
}

int height(Node *node){

    if(node == NULL)
        return 0;

    else{

        int leftH  = height(node->left);
        int rightH = height(node->right);

        if(leftH > rightH)
            return(leftH+1);
        else
            return(rightH+1);
    }
}

void BFTwithQ(Node *root){

    if(root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty()){

        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
}

int main(){

    /*
	struct Node* root   = newNode(10);
	root->left          = newNode(11);
	root->left->left    = newNode(7);
	root->left->right   = newNode(12);
	root->right         = newNode(9);
	root->right->left   = newNode(15);
	root->right->right  = newNode(8);

	cout << "Inorder traversal before deletion : ";
	inOrder(root);
	cout<<endl;

	int key = 7;
	root = delete_process(root, key);

	cout << endl;
	cout << "Inorder traversal after deletion  : ";
	inOrder(root);
	cout<<endl;
	*/

	Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);
    root->right->left = newNode(7);

    cout << "Level Order traversal of binary tree is \n";
    BFTwithQ(root);

	return 0;
}
