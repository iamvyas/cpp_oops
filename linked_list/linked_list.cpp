#include<iostream>
using namespace std;
struct node{
    int data;
    node *next=NULL;
    };
class linked{
    node *head,*temp,*tail;
    int size;

    public:
    linked()
    {
        size=0;
    }
    void print(){
        cout<<"\nlist:";
        for(temp=head;temp!=NULL;temp=temp->next)
        cout<<temp->data<<" ";
    }

    void add()
    {
        int x;
        cout<<"\ntest check head"<<head->data;
        cout<<"\nenter the number";
        cin>>x;
        temp= new node;
        temp->data=x;
        tail->next=temp;
        tail=temp;
        size++;

    }

    void create_list(){
        int x;
        char choice='y';
        cout<<"enter the number";
        cin>>x;
        temp= new node;
        temp->data=x;
        head=temp;
        tail=temp;
        size++;

        cout<<"\nlist made successfully";
        cout<<"\nwanna add more elements(y/n):";
        cin>>choice;
        
        while(choice=='y'){
            add();
            cout<<"\nwanna add more elements(y/n):";
            cin>>choice;
        }
    }

    void del(){
        int i,iter=1;
        node *prev;
        prev=NULL;
        cout<<"\nenter the position to be deleted:";
        cin>>i;
        if(i>size)
        {
            cout<<"\nposition out of range, total length:"<<size;
            return;
        }
        else{
            for(temp=head;temp!=NULL;temp=temp->next){
                if(iter==i){
                    if(temp==head){
                        head=head->next;
                    }
                    else if(temp==tail)
                    {
                        tail=prev;
                        tail->next=NULL;

                    }
                    else{
                        prev->next= temp->next;
                    }
                    free(temp);
                    size--;
                    return;
                }
                prev=temp;
                iter++;

            }
        }
        
    }
};
int main()
{
	int x=1;
    cout<<"\nLINKED LIST";
    linked l;
    l.create_list();
    while (x!=4)
    {
        cout<<"\n1.add 2.print 3.delete:";
        cin>>x;
        switch (x)
        {
        case 1:
            l.add();
            break;
        case 2:
            l.print();
            break;
        case 3:
            l.del();
            break;
        default:
            break;
        }
    }
    
	return 0;
}