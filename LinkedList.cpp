#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class LinkedList {
    struct node {
        int val;
        node *nxt;
        node() {
            val = 0;
            nxt = nullptr;
        }
        node(int v) {
            val = v;
            nxt = nullptr;
        }
    };

    node*head= nullptr;
    node*tail= nullptr;
    int sz=0;
public:
    void insert(node*cur,int v){
        sz++;
        node*new_node=new node(v);
        if(sz==1){
            new_node->nxt= nullptr;
            tail=new_node;
            head=new_node;
            return;
        }
        new_node->nxt=cur->nxt;
        cur->nxt=new_node;
        if(new_node->nxt== nullptr)tail=new_node;
    }
    void push_front(int v){
        if(sz==0)insert(head,v);
        else {
            sz++;
            node*new_node=new node(v);
            new_node->nxt=head;
            head=new_node;
        }
    }
    void push_back(int v){
        insert(tail,v);
    }
    void pop_front(){
        if(sz==0)return;
        sz--;
        if(head==tail){
            delete tail;
            tail=head=nullptr;
            return;
        }
        node*tmp=head;
        head=head->nxt;
        delete tmp;
    }
    void pop_back(){
        if(sz==0)return;
        sz--;
        if(head==tail){
            delete tail;
            head=tail= nullptr;
            return;
        }
        node*tmp=head;
        while (tmp->nxt!=tail){
            tmp=tmp->nxt;
        }
        delete tail;
        tail=tmp;
    }
    void clear(){
        while (sz>0){
            pop_front();
        }
        head=tail= nullptr;
    }
    bool empty(){
        return sz==0;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    node*get_head() const{
        return head;
    }
    int size(){
        return sz;
    }
};
int main() {
    fast
    int t = 1;
//    cin >> t;
    while (t--) {

    }
}