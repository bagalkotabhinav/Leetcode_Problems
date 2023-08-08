/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     long long int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode NODE;
typedef struct ListNode* NODEPTR;
NODEPTR getnode(long long int n){
    NODEPTR temp=(NODEPTR)malloc(sizeof(NODE));
    temp->val=n;
    temp->next=NULL;
    return temp;
}
NODEPTR addl(NODEPTR first,int k){
    NODEPTR it=first;
    NODEPTR temp=getnode(k);
    if(it==NULL)
        return temp;
    while(it->next!=NULL){
        it=it->next;
    }
    it->next=temp;
    return first;
}
NODEPTR addTwoNumbers(NODEPTR l1, NODEPTR l2){
    NODEPTR t1=l1,t2=l2,t3,first=NULL;
    int c=0;
    while(t1!=NULL || t2!=NULL){
        if(t1!=NULL){
            c=c+t1->val;
            t1=t1->next;
        }
        if(t2!=NULL){
            c=c+t2->val;
            t2=t2->next;
        }
        first=addl(first,c%10);
        c=c/10;
    }
    if(c>0){
        first=addl(first,c);
    }
    return first;
}
