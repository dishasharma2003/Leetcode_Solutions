class MyLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    
public:
    Node* Head;

    MyLinkedList() {
        Head = nullptr;
    }

    int get(int index) {
        Node* temp = Head;
        int count = 0;
        while (temp != nullptr && count < index) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr) {
            return -1; // Index out of bounds
        } else {
            return temp->data;
        }
    }

    void addAtHead(int val) {
        Node* ptr = new Node(val);
        ptr->next = Head;
        Head = ptr;
    }

    void addAtTail(int val) {
        Node* ptr = new Node(val);
        if (Head == nullptr) {
            Head = ptr;
            return;
        }
        Node* temp = Head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = ptr;
    }

  void addAtIndex(int index, int val) {
    if (index < 0) {
        return; // Invalid index
    }
    if (index == 0) {
        addAtHead(val);
        return;
    }
    Node* ptr = new Node(val);
    Node* temp = Head;
    Node* prev = nullptr;
    int count = 0;
    while (temp != nullptr && count < index) {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (count == index) {
        prev->next = ptr;
        ptr->next = temp;
    } else {
        delete ptr; // Clean up the memory
    }
}



    void deleteAtIndex(int index) {
        if (Head == nullptr ) {
            return; // No nodes in the list or invalid index
        }
        if (index == 0) {
            Node* temp = Head;
            Head = Head->next;
            delete temp;
            return;
        }
        Node* temp = Head;
        Node* prev = nullptr;
        int count = 0;
        while (temp != nullptr && count < index) {
            prev = temp;
            temp = temp->next;
            count++;
        }
        if (temp == nullptr) {
            // Index out of bounds
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
};
