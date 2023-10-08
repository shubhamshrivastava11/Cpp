#include<iostream>
#include<malloc.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
struct Node *create_linked_list(struct Node *); 
struct Node *display_linked_list(struct Node *); 
//struct Node *add_node_beginning_linked_list(struct Node *);  
//struct Node *add_node_end_linked_list(struct Node *); 
//struct Node *add_node_before_linked_list(struct Node *);
//struct Node *add_node_after_linked_list(struct Node *); 
//struct Node *delete_node_beginning_linked_list(struct Node *); 
struct Node *delete_node_end_linked_list(struct Node *); 
struct Node *delete_node_linked_list(struct Node *); 
struct Node *delete_node_after_node_linked_list(struct Node *); 
struct Node *delete_linked_list(struct Node *); 
struct Node *sort_linked_list(struct Node *); 

int main()
{
   int option;
   do 
   {
       cout<<"Main menu:"<<endl;
       cout<<"Enter 1 to create a linked list: "<<endl;
       cout<<"Enter 2 to display the linked list: "<<endl;
       cout<<"Enter 3 to add the node at the beginning of the linked list: "<<endl;
       cout<<"Enter 4 to add the node at the end of the linked list:"<<endl;
       cout<<"Enter 5 to add the node before the given node of the linked list:"<<endl;
       cout<<"Enter 6 to add the node after a given node of the linked list:"<<endl;
       cout<<"Enter 7 to delete the node at the beginning of the linked list:"<<endl;
       cout<<"Enter 8 to delete the node at the end of the linked list:"<<endl;
       cout<<"Enter 9 to delete the given node of the linked list:"<<endl;
       cout<<"Enter 10 to delete the node after a given node of the linked list:"<<endl;
       cout<<"Enter 11 to delete the entire linked list: "<<endl;
       cout<<"Enter 12 to sort the entire linked list: "<<endl;
       cout<<"Enter 13 to exit the program: "<<endl;
       cout<<"Enter your option: "<<endl;
       cin>>option;
       switch (option) 
       {
         case 1:  
         start = create_linked_list(start);
         cout<<"Linked list created!"<<endl;
         break;
       
         case 2:  
         start = display_linked_list(start);
         cout<<"Linked list displayed!"<<endl;
         break;
       
    /*     case 3:  
         start = add_node_beginning_linked_list(start);
         cout<<"Node added!"<<endl;
         break;
       
           case 4:  
         start = add_node_end_linked_list(start);
         cout<<"Node added!"<<endl;
         break;
       
           case 5:  
         start = add_node_before_linked_list(start);
         cout<<"Node added!"<<endl;
         break;
       
           case 6:  
         start = add_node_after_linked_list(start);
         cout<<"Node added!"<<endl;
         break;
      
        case 7:  
         start = delete_node_beginning_linked_list(start);
         cout<<"Node deleted!"<<endl;
         break;
       */
           case 8:  
         start = delete_node_end_linked_list(start);
         cout<<"Node deleted!"<<endl;
         break;
      
       
           case 9:  
         start = delete_node_linked_list(start);
         cout<<"Node deleted!"<<endl;
         break;
       
         case 10:  
         start = delete_node_after_node_linked_list(start);
         cout<<"Node deleted!"<<endl;
         break;
       
         case 11:  
         start = delete_linked_list(start);
         cout<<"Node deleted!"<<endl;
         break;
       
         case 12:  
         start = sort_linked_list(start);
         cout<<"Linked list is sorted!"<<endl;
         break; */
       }
   }
   
   while ( option!= 13);
   return 0;
}

struct Node *create_linked_list(struct Node *)       // function to create the linked list //
{
    struct Node *new_Node, *ptr;
    int num;
    cout<<"Enter -1 to stop!"<<endl;
    cout<<"Enter the data for the linked list: "<<endl;
    cin>>num;
    while (num!=-1)
    {
        new_Node = (struct Node *) malloc (sizeof(struct Node));
        new_Node -> data = num;
        if (start == NULL)                              // linked list is empty //
        {
            new_Node -> next = NULL;
            start = new_Node;
        }
        else
        {
            ptr = start;
            while ( ptr -> next!= NULL)
            {
                ptr = ptr -> next;
            }
            ptr -> next = new_Node;
            new_Node -> next = NULL;      
        }
        cout<<"Enter the data: "<<endl;
        cin>>num;
    }
    return start;
}
struct Node *display_linked_list(struct Node *)
{
    struct Node *ptr;
    ptr = start;
    while ( ptr!= NULL)
    {
        cout<<ptr -> data <<endl;
        ptr = ptr -> next;
    }
    return start;
}
struct Node *delete_node_end_linked_list(struct Node *)
{
    struct Node *ptr, *pre_ptr;
    ptr = start;
    while ( ptr -> next!= NULL)
    {
        pre_ptr = ptr;
        ptr = ptr -> next;
    }
    pre_ptr -> next = NULL;
    free(ptr);
    return start;
    
}
struct Node *delete_node_linked_list(struct Node *)
{
    struct Node *ptr, *pre_ptr;
    int val;
    cout<<"Enter the node: "<<endl;
    cin>>val;
    ptr = start;
    if (ptr -> data == val)
    {
      //  start = delete_node_beginning_linked_list(start);
        return start;
    }
    
    while ( ptr -> data!=val )
    {
        pre_ptr = ptr;
        ptr = ptr -> next;
    }
    pre_ptr -> next = ptr -> next ;    //
    free(ptr);
    return start;
}
struct Node *delete_node_after_node_linked_list(struct Node *)
{
    struct Node *ptr, *pre_ptr;
    int val;
    cout<<"Enter the value of the node: "<<endl;
    cin>>val;
    ptr = start;
    pre_ptr = ptr;
    while ( pre_ptr -> data!= val)
    {
        pre_ptr = ptr;
        ptr = ptr -> next;
    }
    pre_ptr -> next = ptr -> next;
    free(ptr);
    return start;
}
struct Node *delete_linked_list(struct Node *)
{
    struct Node *ptr;
    if (start!=NULL)
    {
    ptr = start;
    while ( ptr!=NULL )
    {
    cout<<"The node which is to be deleted: "<<endl;
    cout<< ptr -> data;
  //  start = delete_node_beginning_linked_list(start);
    ptr = start;
    }
    }
    return start;
}
struct Node *sort_linked_list(struct Node *)
{
    struct Node *ptr_1, *ptr_2;
    int temp;
    ptr_1 = start;
    while (ptr_1 -> next!= NULL)
    {
        ptr_2 = ptr_1 -> next;
        while (ptr_2!=NULL)
        {
            if(ptr_1 -> data > ptr_2 -> data)
            {
                temp = ptr_1 -> data;
                ptr_1 -> data = ptr_2 -> data;
                ptr_2 -> data = temp;
            }
            ptr_2 = ptr_2 -> next;
        }
        ptr_1 = ptr_1 -> next;
    }
    return start;
}