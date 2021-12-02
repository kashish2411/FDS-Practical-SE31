#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}
node;
node *createnode()
{
    int i,n;
    node *p,*head,*t;
    head=NULL;
    cout<<"\nEnter the no of students::"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        p = new node;
        cout<<"\nEnter the roll no of students:"<<endl;
        cin>>p->data;
        p->next=NULL;
        if(head==NULL)
         head=p;
        else
        {
            t=head;
            while(t->next!=NULL)
                  t=t->next;
            t->next=p;
        }
    }
    return head;
}
void print(node *head)
{
    node *p;
    int cnt=0;
    p=head;
    while(p!=NULL)
    {
        cout<<"\t"<<p->data;
        p=p->next;
        cnt++;
    }
    cout<<"\tTotal no of students="<<cnt<<endl;
}
int uni(node *head1,node *head2)
{
    node *p,*q;
    int found=0,count=0;
    p=head1;
    while(p!=NULL)
    {
        cout<<"\t"<<p->data<<endl;
        p=p->next;
        count++;
    }
    for(q=head2;q!=NULL;q=q->next)
    {
        found=0;
        for(p=head1;p!=NULL;p=p->next)
        {
            if(q->data==p->data)
            {
                found=1;
                break;
            }
        }
        if(found!=1)
        {
            cout<<"\t"<<q->data<<"\t";
            count++;
        }
    }
    cout<<"\nNo of students="<<count<<endl;
    return count;
}
void inter(node *head1,node *head2)
{
    node *p,*q;
    int found=0;
    for(q=head2;q!=NULL;q=q->next)
    {
        found=0;
        for(p=head1;p!=NULL;p=p->next)
        {
            if(q->data==p->data)
            {
                found=1;
                break;
            }
        }
        if(found==1)
        cout<<"\t"<<q->data<<"\t";
    }
}

int main()
{
    node *head,*head1;
    int ch=0,ele,loc,m,count;
    head=head1=NULL;
    cout<<"Enter the total no of students::"<<endl;
    cin>>m;
    head=NULL;
    cout<<"Students who like vanilla"<<endl;
    head=createnode();
    cout<<"Students who like butterscotch"<<endl;
    head1=createnode();
    cout<<"Students who like vanilla"<<endl;
    print(head);
    cout<<"Students who like butterscotch"<<endl;
    print(head1);
    cout<<"Students who like either vanilla or butterscotch"<<endl;
    count=uni(head,head1);
    cout<<"Students who like both vanilla or butterscotch"<<endl;
    inter(head,head1);
    cout<<"No. of Students who like neither vanilla nor butterscotch"<<endl;
    cout<<m-count<<endl;
        

    }

