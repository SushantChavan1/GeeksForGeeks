/*Given two Singly Linked List of N and M nodes respectively. 
The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have same data and with
 same arrangement too.

Example 1:

Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: Not identical 
Example 2:

Input:
LinkedList1: 1->2->3->4->5
LinkedList2: 1->2->3->4->5
Output: Identical
 
Your Task:
The task is to complete the function areIdentical() which takes the 
head of both linked lists as arguments and returns True or False.

Constraints:
1 <= N <= 103

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
*/

/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
   Node* temp1=head1;
    Node* temp2=head2;
    
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
            return 0;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
    if(temp1==NULL && temp2==NULL)
    {
         return 1;
    }else
    return 0;
}

