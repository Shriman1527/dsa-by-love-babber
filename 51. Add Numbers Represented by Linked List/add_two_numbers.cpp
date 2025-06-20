#include<iostream>
#include<climits>

// This code is for add two numbers as form of linked list and 
// return a number in the form of linked list

 // Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
    private:
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev= NULL;
        ListNode* next=NULL;

        while(curr!=NULL)
        {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;


        }
        return prev;


    }
    void insertAtTail( ListNode * &head , ListNode * &tail , int data)
    {
        ListNode * temp = new ListNode(data);
        //empty list

        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return ;
        }
        else // non empty list 
        {
            tail->next=temp;
            tail=temp;


        }
    }

    ListNode * add ( ListNode * l1 , ListNode * l2  )
    {
        int carry=0;
         ListNode * ansHead=NULL;
         ListNode * ansTail=NULL;

        
        while( l1!=NULL && l2!=NULL)
        {
            int sum = carry + l1->val + l2->val ;
            int digit = sum% 10;

            insertAtTail(ansHead , ansTail , digit);

            carry = sum/10;
            l1=l1->next;
            l2=l2->next;

        }

        while(l1!=NULL)
        {
            int sum = carry + l1->val ;
            int digit = sum% 10;
             insertAtTail(ansHead , ansTail , digit);
              carry = sum/10;
            l1=l1->next;

        }

        while(l2!=NULL)
        {
            int sum = carry + l2->val ;
            int digit = sum% 10;
             insertAtTail(ansHead , ansTail , digit);
              carry = sum/10;
            l2=l2->next;

        }
        while(carry!=0)
        {
             int sum = carry  ;
             int digit = sum% 10;
            insertAtTail(ansHead , ansTail , digit);
             carry = sum/10;

        }
        return ansHead;

      

    }


public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        //step1-> reverse Linked List
        l1= reverse(l1);
        l2= reverse(l2);

        //step 2 add LL from left
         ListNode* ans= add(l1,l2);

         //step 3 -> reverse answer list
         ans = reverse(ans);

         return ans;




        
    }
};