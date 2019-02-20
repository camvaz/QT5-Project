#ifndef LISTA_H
#define LISTA_H
#include <celular.h>
struct node
{
    int data;
    QString cel;
    node *next;
};

class lista
{
private:
        node *head, *tail;
public:
        lista():head(0), tail(0){}
                lista(node* a):head(a), tail(0){}
                lista(const lista* c):head(c->head), tail(c->tail){}
                friend class ClientWindow;
                node* getHead(){return head;}
                void createnode(int value, QString cell)
                        {
                            node *temp = new node;
                            temp->data = value;
                            temp->cel = cell;
                            temp->next = 0;

                            if(head==0)
                            {
                                head=temp;
                                tail=temp;
                            }

                            else
                            {
                                tail->next = temp;
                                tail = temp;
                            }
                        }

                node* busqueda(QString id){
                       node * Q, *Resp= 0;
                       if (head)
                       {
                          Q = head;
                          while ((Q->cel != id) && (Q->next))
                             Q = Q->next;
                          // Se verifica si el elemento dado como referencia fue encontrado en la lista
                          if (Q->cel == id)
                             Resp = Q;
                       }
                       return Resp;
                     }

                        void insert_start(int value)
                        {
                            node *temp=new node;
                            temp->data=value;
                            temp->next=head;
                            head=temp;
                        }

                        void insert_position(int pos, int value)
                        {
                            node *pre=new node;
                            node *cur=new node;
                            node *temp=new node;
                            cur=head;
                            for(int i=1;i<pos;i++)
                            {
                                pre=cur;
                                cur=cur->next;
                            }
                            temp->data=value;
                            pre->next=temp;
                            temp->next=cur;
                        }

                        void delete_first()
                        {
                            node *temp=new node;
                            temp=head;
                            head=head->next;
                            delete temp;
                        }

                        void delete_last()
                        {
                            node *current=new node;
                            node *previous=new node;
                            current=head;
                            while(current->next!=0)
                            {
                                previous=current;
                                current=current->next;
                            }
                            tail=previous;
                            previous->next=0;
                            delete current;
                        }

                        void delete_position(int pos)
                        {
                            node *current=new node;
                            node *previous=new node;
                            current=head;
                            for(int i=1;i<pos;i++)
                            {
                                previous=current;
                                current=current->next;
                            }
                            previous->next=current->next;
                        }
};

#endif // LISTA_H
