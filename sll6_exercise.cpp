#include<iostream>
using namespace std;

class node{
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    node(){
        this->data = 0;
        this->next = NULL;
    }

    friend class sll;
};

class sll{
    node *head;

public:
    sll(){
        head = NULL;
    }

    void insert_node(int data){
        node *newNode = new node(data);

        if(head == NULL){
            head = newNode;
            cout << "list is empty, first node inserted" << endl;
        }
        else{
            node *curr = head;

            while(curr ->next != NULL){
                curr = curr->next;
            }

            curr->next = newNode;

        }
    }

    void print_list(){
        node *curr = head;
        cout << curr->data;
        curr = curr->next;

        while(curr != NULL){
            cout << " -> " << curr->data;
            curr = curr->next;
        }
        cout << endl;
    }

    bool is_data_present(int data){
        node *curr = head;

        while(curr != NULL){
            if(curr->data == data){
                return true;
            }
            curr = curr->next;
        }

        return false;
    }

    void delete_first_occurence(int data){      //occurs for sure
        node *curr = head, *prev = NULL;

        while(curr != NULL){
            if(curr->data == data){
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
                cout << "deleted 1st occurrence" << endl;
                break;
            }
            prev = curr;
            curr = curr->next;
        }
    }

    void delete_all_occurences(int data){   //occurs for sure
        node *curr = head, *prev = NULL;

        while(curr != NULL){
            if(curr->data == data){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        cout << "deleted all occurrences" << endl;
    }

    void delete_last_occurrence(int data){
        node *curr = head, *prev = NULL, *special = NULL, *special_prev = NULL;

        while(curr != NULL){
            if(curr->data == data){
                special = curr;
                special_prev = prev;
            }
            prev = curr;
            curr = curr->next;
        }

        special_prev->next = special->next;
        special->next = NULL;
        delete special;
    }

    int number_of_occurrences(int data){
        node *curr = head;
        int length = 0;

        while(curr != NULL){
            if(curr->data == data){
                length++;
            }
            curr = curr->next;
        }
        return length;
    }

    int get_position_of_data(int data){
        node *curr = head;
        int pos = 0;

        while(curr != NULL){
            if(curr->data == data){
                return pos;
            }
            curr = curr->next;
            pos++;
        }
        return -1;
    }

    void get_all_position_of_data(int data){
        cout << "all positions of data is: " << endl;

        node *curr = head;
        int pos = 0;
        sll list2;

        while(curr != NULL){
            if(curr->data == data){
                list2.insert_node(pos);
            }
            curr = curr->next;
            pos++;
        }

        list2.print_list();
    }

    sll merge_two_lists(sll list2){
        node *curr1 = this->head, *curr2 = list2.head;
        sll list3;


        while(curr1 != NULL){
            list3.insert_node(curr1->data);
            curr1 = curr1->next;
        }

        while(curr2 != NULL){
            list3.insert_node(curr2->data);
            curr2 = curr2->next;
        }

        return list3;
    }

    void add_to_the_elements(int to_be_added){
        node *curr = head;

        while(curr != NULL){
            curr->data = curr->data + to_be_added;
            curr = curr->next;
        }
    }

    bool check_if_the_list_is_in_ascending_order(){
        node *curr = head;

        while(curr->next != NULL){
            if(curr->data > curr->next->data){
                return false;
            }
            curr = curr->next;
        }

        return true;
    }



};




int main(){

    sll list1;
    list1.insert_node(1);
    list1.insert_node(3);
    list1.insert_node(7);
    list1.insert_node(4);
    list1.insert_node(3);
    list1.insert_node(7);
    list1.insert_node(2);

    list1.print_list();

    cout << list1.is_data_present(2) << endl;
    cout << list1.is_data_present(6) << endl;

    sll list2;
    list2.insert_node(2);
    list2.insert_node(5);
    list2.insert_node(8);

    //list1.delete_first_occurence(7);
    //list1.print_list();

    //list1.delete_all_occurences(7);
    //list1.print_list();

    //list1.delete_last_occurrence(7);
    //list1.print_list();

    cout << "number of occurrences is " << list1.number_of_occurrences(7) << endl;

    cout << "position is " << list1.get_position_of_data(7) << endl;
    cout << "position is " << list1.get_position_of_data(10) << endl;

    list1.get_all_position_of_data(7);

    sll list3 = list1.merge_two_lists(list2);

    list3.print_list();

    list3.add_to_the_elements(20);
    list3.print_list();

    cout << list3.check_if_the_list_is_in_ascending_order() << endl;

    sll list4;
    list4.insert_node(1);
    list4.insert_node(2);
    list4.insert_node(3);
    list4.insert_node(4);

    cout << list4.check_if_the_list_is_in_ascending_order() << endl;

    return 0;
}
