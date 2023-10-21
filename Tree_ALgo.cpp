#include<iostream>
#include<malloc.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;  
};
struct Node *tree;
struct Node *small;
struct Node *large;
struct Node *create_tree();
struct Node *insert_element(struct Node *, int);
void pre_order_traversal(struct Node *);
void in_order_traversal(struct Node *);
void post_order_traversal(struct Node *);
struct Node * find_smallest_element ( struct Node *);
struct Node * find_largest_element( struct Node *);
void delete_tree ( struct Node *);
int main ()
{
    int option,val;
    do
    {
        cout<<"Menu: "<<endl;
        cout<<"Enter 1 to create_tree: "<<endl;
        cout<<"Enter 2 to insert_element: "<<endl;
        cout<<"Enter 3 for pre_order_traversal: "<<endl;
        cout<<"Enter 4 for in_order_traversal: "<<endl;
        cout<<"Enter 5 for post_order_traversal: "<<endl;
        cout<<"Enter 6 to find_smallest_element: "<<endl;
        cout<<"Enter 7 to find_largest_element: "<<endl;
        cout<<"Enter 8 to delete the tree: "<<endl;
        cout<<"Enter any option: "<<endl;
        cin>>option;
        switch (option)
        {
            case 1: 
            tree=create_tree();
            cout<<"Tree is created!"<<endl;
            break;
            
            case 2: 
            cout<<"Enter the values to be inserted: "<<endl;
            cin>>val;
            tree=insert_element(tree, val);
            break;
            
            case 3:
            pre_order_traversal(tree);
            break;
            
            case 4:
            in_order_traversal(tree);
            break;
            
            case 5:
            post_order_traversal(tree);
            break;
            
            case 6:
            small = find_smallest_element (tree);
            cout<<small -> data;
            break;
            
            case 7:
            large = find_largest_element(tree);
            cout<<large -> data;
            break;
            
            case 8:
            delete_tree (tree);
            tree=NULL;
            cout<<"Tree is deleted!"<<endl;
            break;
            
        }
    }
    while(option!=9);
    return 0;
}
struct Node *create_tree()
{
    return NULL;
}
struct Node *insert_element(struct Node *tree, int val)
{
    struct Node *ptr ,*node_ptr, *parent_ptr;
//ptr = (struct Node*) (sizeof(struct Node));
    ptr = new Node;
    ptr -> data = val;
    ptr ->left = NULL;
    ptr ->right = NULL;
    if (tree==NULL)
    {
        tree = ptr;
        tree -> left = NULL;
        tree -> right = NULL;
    }
    else
    {
        parent_ptr = NULL;
        node_ptr = tree;
        while (node_ptr!=NULL)
        {
            parent_ptr = node_ptr;
            if (val < node_ptr -> data)
            {
                node_ptr = node_ptr ->left;
            }
            else 
            {
                node_ptr = node_ptr -> right;
            }
        }
        if ( val < parent_ptr -> data )
        {
            parent_ptr -> left = ptr;
        }
        else
        {
            parent_ptr -> right = ptr;
        }
    }
    cout<<"Values are Inserted!"<<endl;
     return tree;
}
void pre_order_traversal(struct Node *tree)
{
    if (tree!=NULL)
    {
        cout<<tree -> data<<endl;;
        pre_order_traversal(tree -> left);
        pre_order_traversal(tree -> right);
    }
}
void in_order_traversal(struct Node *tree)
{
    if (tree!=NULL)
    {
        in_order_traversal(tree -> left);
        cout<<tree -> data<<endl;;
        in_order_traversal(tree -> right);
    }
}
void post_order_traversal(struct Node *tree)
{
    if (tree!=NULL)
    {
        post_order_traversal(tree -> left);
        post_order_traversal(tree -> right);
        cout<<tree -> data<<endl;;
    }
}
struct Node * find_smallest_element ( struct Node *tree)
{
    if ((tree==NULL) || (tree->left==NULL))
    {
        return tree;
    }
    else
    {
       return find_smallest_element( tree -> left);
    }
}
struct Node * find_largest_element( struct Node *tree)
{
   if ((tree==NULL) || (tree->right==NULL))
    {
        return tree;
    }
    else
    {
       return find_largest_element( tree -> right); 
    }  
}
void delete_tree ( struct Node *tree)
{
    if(tree!=NULL)
    {
        delete_tree (tree -> left); 
        delete_tree (tree -> right);
        tree=NULL;
        delete tree;
    }
}