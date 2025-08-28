#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        string val;
        Node* next;
        Node* prev;

        Node(string val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insert_node(Node* &head, Node* &tail, string val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_list(Node* head){
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    while (cin >> val && val != "end")
    {
        insert_node(head, tail, val);
    }

    Node* current = NULL;
    int q; cin >> q;
    cin.ignore();
    while (q--)
    {
        string query;
        getline(cin, query);
        if(query.substr(0,5) == "visit"){
            string site = query.substr(6);
            Node* temp = head;
            bool isFound = false;

            while (temp != NULL)
            {
                if(temp->val == site){
                    current = temp;
                    cout << temp->val << endl;
                    isFound = true;
                    break;
                }
                
                temp = temp->next;
            }

            if(!isFound){
                cout << "Not Available" << endl;
            }
            
        }
        else if(query == "prev"){
            if(current!= NULL && current->prev != NULL){
                current = current->prev;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(query == "next"){
            if(current!= NULL && current->next != NULL){
                current = current->next;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}