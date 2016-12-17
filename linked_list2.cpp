#include <iostream>
using namespace std;
void menu(){
	cout << "[1] Insert into Linked List \n"
		 << "[2] Pop \n"
		 << "[3] Exit \n"
		 << "[4] Display contents of the linked list \n"
		 << "Enter choice: ";
}
class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head; 
};

int main() {
    LinkedList list;
while (true){
	int choice,num;
	menu();
	cin >> choice;
	switch (choice){
		case 1:{
			cout << "Enter number ";
			cin >> num;
			list.addValue(num);
			break;
		}
		case 2:{
			list.popValue();
			break;
		}
		case 3:{
			exit(1);
			break;
		}
	} 
}
    return 0;
}
