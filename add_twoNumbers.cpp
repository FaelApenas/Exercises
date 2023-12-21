#include <iostream> 

class ListNode{
    
public:
    int val; 
    ListNode *next; // pointer to the next node 
    
};
void init_list(ListNode **n){*n=NULL; }

void insert_next(ListNode **head,int newval){
    //Setting the new node 
    ListNode *new_node=new ListNode(); 
    new_node->val=newval; 
    new_node->next=NULL; 
    //----------------

    //Verify if the list is empty
    if(*head==NULL){
        *head=new_node; 
        return;
    }
    //-------------

    //scroll through the list to add in the end
    ListNode *aux = *head; 
    while(aux->next!=NULL){
        aux=aux->next; 
    }
    aux->next= new_node; 

    


}

int get_lenght(ListNode *n){
    int len=0; 
    ListNode *aux= n; 
    while(aux!=NULL){
        len++; 
        aux=aux->next; 
    }
    return len;         
}

ListNode * reverse(ListNode *head){
    ListNode *temp= head; //actual node
    ListNode *n= NULL; //next node
    ListNode *p= NULL; //previous node


    while (temp !=NULL)
    {
        n= temp->next; 
        temp->next=p; 
        p=temp; 
        temp=n; 

    }
    head=p;    
    
    return head; 
     
}
 

void print_list(ListNode *n){
    while(n!=NULL){

        std::cout<< "Value: " << n->val << std::endl; 
        n=n->next;
        
    }
}
 


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int first_n=0; 
        ListNode *l3 = new ListNode();
        l3=nullptr; 
        

        while(l1!=nullptr || l2!=nullptr||first_n !=0)
        {   
            ListNode * newnode= new ListNode();
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;
            int newval = digit1+digit2+first_n; 
            std::cout<< newval<<std::endl;

            if ((newval/10)>0)
            {
                newnode->val= newval%10;
                first_n=newval/10; 
            }
            else 
            {
                newnode->val= newval; 
                first_n = 0; 
            }

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
            newnode->next=l3; 
            l3=newnode;  
            
        }
        


        print_list(reverse(l3));

        return reverse(l3); 
    }















int main()
{
    ListNode *l1 = new ListNode(); 
    ListNode *l2 = new ListNode(); 
    init_list(&l1); 
    init_list(&l2); 
    insert_next(&l1,9);
    insert_next(&l1,9);
    insert_next(&l1,9);
    insert_next(&l1,9);
    insert_next(&l1,9);
    insert_next(&l1,9);
    insert_next(&l1,9);
    insert_next(&l1,9);
    
    insert_next(&l2,9);
    insert_next(&l2,9);
    insert_next(&l2,9);
    insert_next(&l2,9);

    addTwoNumbers(l1,l2);     

    


}