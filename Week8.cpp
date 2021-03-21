#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
    public: 
        int id; 
        string name;
        string dob;
    Node* next; 
}; 

void print_list(Node* n) {
    cout << "\nPrinting new list ..." << endl;
    while (n != nullptr) {
        cout << "Student ID: " << n->id << endl;
        cout << "Student Name: " << n->name << endl;
        cout << "Student DOB: " << n->dob<< endl;
        n = n->next;
    }
}

Node* search_id(Node* head, int id_key){
    Node* curr = head;
    while (curr != nullptr){
        if (curr->id == id_key){
            cout<<"Successful search of id: "<< id_key << endl;
            return curr;
        }
        curr = curr->next;
    }
    cout<<"Unsuccessful search of id:"<< id_key << endl;
    return curr;
}

Node* search_name(Node* head, string name_key){
    Node* curr = head;
    while (curr != nullptr){
        if (curr->name == name_key){
            cout<<"Successful search of name: "<< name_key << endl;
            return curr;
        }
        curr = curr->next;
    }
    cout<<"Unsuccessful search of name: "<< name_key << endl;
    return curr;
}

Node* search_dob(Node* head, string dob_key){
    Node* curr = head;
    while (curr != nullptr){
        if (curr->dob == dob_key){
            cout<<"Successful search of dob: "<< dob_key << endl;
            return curr;
        }
        curr = curr->next;
    }
    cout<<"Unsuccessful search of dob: "<< dob_key << endl;
    return curr;
}

void insert(Node** head_ptr, int id, string name, string dob){
    Node* new_node = new Node();
    new_node->id = id;
    new_node->name = name;
    new_node->dob = dob;
    new_node->next = (*head_ptr);
    (*head_ptr) = new_node;
};

int main()
{
    Node* head = new Node();
    head->id = 125324;
    head->name= "Harrison";
    head->dob="25 May 1234";
    search_id(head, 125324);
    search_name(head, "Harrison");
    search_dob(head, "25 May 1234");
    print_list(head);
    insert(&head, 987632, "Larry", "12 January 1345");
    print_list(head);
}
