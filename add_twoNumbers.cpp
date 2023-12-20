#include <iostream> 

class ListNode{
    
public:
    int val; 
    ListNode *next; // pointer to the next node 
    
};

int get_lenght(ListNode *n){
    int len=0; 
    ListNode *aux= n; 
    while(aux!=NULL){
        len++; 
        aux=aux->next; 
    }
    return len;         
}

void print_list(ListNode *n){
    while(n!=NULL){

        std::cout<< "Value: " << n->val << std::endl; 
        n=n->next;
        
    }
}
 


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {      
        ListNode *l3 =new ListNode(); 
        if(get_lenght(l1)>=get_lenght(l2))
        {
            
            while(l1!=NULL)
            {
                ListNode *newnode =new ListNode(); 
                l3->val= l1->val + l2->val; 
                std::cout<<l1->val<<std::endl;
                std::cout<<l2->val<<std::endl;

                l1= l1->next; 
                l2= l2->next;
                newnode->next= l3 ;
                l3= newnode;

            } 
        }

    print_list(l3);
       




        
    }
int main()
{
    ListNode *l1_1 = new ListNode(); 
    ListNode *l1_2 = new ListNode(); 
    ListNode *l1_3 = new ListNode();  

    ListNode *l2_1 = new ListNode(); 
    ListNode *l2_2 = new ListNode(); 
    ListNode *l2_3 = new ListNode();  

    l1_1->val = 2; 
    l1_2->val = 4; 
    l1_3->val = 3;

    l2_1->val = 5; 
    l2_2->val = 6; 
    l2_3->val = 4;

    l1_1->next= l1_2; 
    l1_2->next= l1_3; 
    l1_3->next=NULL; 

    l2_1->next= l2_2; 
    l2_2->next= l2_3; 
    l2_3->next=NULL; 

    addTwoNumbers(l1_1,l2_1); 

    

    


}