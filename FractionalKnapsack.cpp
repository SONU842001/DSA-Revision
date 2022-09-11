#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

struct Node{

      int value;
      Node* next;
      Node* prev;
      Node(int x)
      {
         value=x;
         next=NULL;
         prev=NULL;
      }
};
 
  
  Node* insertList(Node* head,int x)
  {
    Node* temp =new Node(x);
    temp->next=head;
    if(head!=NULL)
    {
        head->prev=temp;
    }
    
    return temp;

  }
void printlist(Node *head){
        for(Node* curr=head;curr!=NULL;curr=curr->next)
        {
            cout<<curr->value<<" ";
        }
}

int main() {
  
   Node* head=NULL; 
   
   head=insertList(head,5);
   
   
    printlist(head);
   return 0;
}





// bool cmp(int n,int m)
// {
//     if(n<m)
//         return true;
//     else
//         return false;
// }





    
