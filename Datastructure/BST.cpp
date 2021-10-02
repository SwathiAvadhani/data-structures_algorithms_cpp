#include <iostream>
#include <stdlib.h>
#include <string>
#define SPACE 10
using namespace std;

class TreeNode{
    public: 
        int value; //key or data
        TreeNode* left;
        TreeNode *right;
        TreeNode(){
            value=0;
            left = NULL;
            right = NULL;
        }
        TreeNode(int v){
            value = v;
            left = NULL;
            right = NULL;
        }
};
class BST{
    public:
        TreeNode *root;
    
    BST(){
        root = NULL;
    }

    bool isTreeEmpty()
    {
        if(root == NULL)
            return true;
        else
            return false;
    }

    void insertNode(TreeNode *new_node)
    {
        if(root == NULL)
        {
            root = new_node;
            cout <<"value inserted at root node!" << endl;
        }
        else{
            TreeNode *temp = root;
            while(temp!=NULL)
            {
                if(new_node->value == temp->value)
                {
                    cout << "Value alreday exist,"
                    << "Insert another value!" << endl;
                    return;
                }
                else if((new_node->value < temp->value) && (temp->left==NULL))
                {
                    temp->left = new_node;
                    cout << "Value inserted at left!" << endl;
                    break;
                }
                else if(new_node->value < temp->value)
                {
                    temp = temp->left;
                }
                else if((new_node->value > temp->value) && (temp->right==NULL))
                {
                    temp->right = new_node;
                    cout <<"Value inserted at right!" << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }

            }
        }
    }

    void print2D(TreeNode *r,int space)
    {
        if(r == NULL) //Base case
            return;
        space += SPACE; //Increase distance between levels
        print2D(r->right, space); //process right child first
        cout << endl;
        for(int i=SPACE;i<space;i++) //print current node after space count
            cout <<" ";
        cout << r->value <<"\n";
        print2D(r->left, space); //process left child
    }

    void printPreorder(TreeNode* r) //(root,left,right)
    {
        if(r == NULL)
            return;
        //first print data node
        cout << r->value << " ";
        //then recur at left subtree
        printPreorder(r->left);
        //now recur at right subtree
        printPreorder(r->right);
    }

    void printInorder(TreeNode* r) //(left,root,right)
    {
        if(r == NULL)
            return;
        //recur at left subtree
        printInorder(r->left);
        //print data node
        cout << r->value << " ";
        //now recur at right subtree
        printInorder(r->right);
    }

    void printPostorder(TreeNode* r) //(left,right,root)
    {
        if(r == NULL)
            return;
        //recur at left subtree
        printPostorder(r->left);
        //now recur at right subtree
        printPostorder(r->right);
        //print data node
        cout << r->value << " ";
    }

    TreeNode* iterativeSearch(int v)
    {
        if(root == NULL)
        {
            return root;
        }
        else
        {
            TreeNode* temp = root;
            while(temp!=NULL)
            {
                if(v == temp->value)
                {
                    return temp;
                }
                else if(v < temp->value)
                {
                    temp = temp->left;
                }
                else
                {
                    temp = temp->right;
                }
            }
            return NULL;
        }
    }

    TreeNode* minValueNode(TreeNode* node)
    {
        TreeNode* current = node;
        //loop down to find the leftmost leaf
        while(current->left!=NULL)
        {
            current = current->left;
        }
        return current;
    }

    TreeNode* deleteNode(TreeNode* r,int v)
    {
        //base case
        if(r==NULL)
        {
            return NULL;
        }
        //If the key to be deleted is smaller than the root's key/value, then it lies in left subtree
        else if(v < r->value)
        {
            r->left = deleteNode(r->left,v);
        }
        //If the key to be deleted is greater than the root's key/value, then it lies in right subtree
        else if(v > r->value)
        {
            r->right = deleteNode(r->right,v);
        }
        //If key is same as root's key, then this is the node to be deleted
        else
        {
            //node with only one child or no child
            if(r->left == NULL)
            {
                TreeNode* temp = r->right;
                delete r;
                return temp;
            }
            else if(r->right == NULL)
            {
                TreeNode* temp = r->left;
                delete r;
                return temp;
            }
            else
            {
                //node with two children:Get the inorder successor(in the right subtree)
                TreeNode* temp = minValueNode(r->right);
                //copy the inorder successor's content to this node
                r->value = temp->value;
                //delete the inorder successor
                r->right = deleteNode(r->right,temp->value);

            }      
        }
        return r;
    }

};
int main()
{
    BST obj;
    int option,val;
    do{
        cout << "What operations do you want to perform? "
        << " Select option number.Enter 0 to exit." << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print BST values" << endl;
        cout << "5. Clear screen" << endl;
        cout << "0. Exit program" << endl;

        cin >> option;
        TreeNode *new_node = new TreeNode();


        switch(option)
    {
        case 0:
            break;
        case 1:
            cout << "INSERT" <<endl;
            //insertion code
            cout << "Enter the value of Tree node to insert in BST: ";
            cin >> val;
            new_node->value = val;
            obj.insertNode(new_node);
            cout<<endl; 
            break;
        case 2:
            cout << "SEARCH" <<endl;
            //search code
            cout << "Enter the value of Tree node to search in BST: ";
            cin >> val;
            new_node = obj.iterativeSearch(val);
            if(new_node!=NULL)
            {
                cout << "Value found" << endl;
            }
            else{
                cout << "Value not found" << endl;
            }
            break;
        case 3:
            cout << "DELETE" <<endl;
            //deletion code
            cout << "Enter value of the tree node to delete in BST: ";
            cin >> val;
            new_node = obj.iterativeSearch(val);
            if(new_node!=NULL)
            {
                obj.deleteNode(obj.root,val);
                cout << "Value deleted" << endl;
            }
            else
            {
                cout << "Value not found" << endl;
            }
            break;
        case 4:
            cout << "PRINT and TRAVERSE" <<endl;
            obj.print2D(obj.root, 5);
            cout << endl;
            obj.printPreorder(obj.root);
            cout << endl;
            obj.printInorder(obj.root);
            cout << endl;
            obj.printPostorder(obj.root);
            break;
        case 5:
            system("CLS");
            break;
        default:
            cout << "Enter proper option number " <<endl;
    
    }

    }while(option!=0);

    
    return 0;
}