#include "OrderList.h"
#include <iostream>
#include <algorithm> // For copy
#include <new>       // For bad_alloc

// Task 5.1
OrderList::OrderList(): head(nullptr){
    
}

// Task 5.2
OrderList::~OrderList() {
    while (head != nullptr) {
        OrderNode* current = head;
        head = head->next;
        delete current;
    }

}

// Task 5.3
void OrderList::addOrder(const Order& order) {
    OrderNode* newNode = new OrderNode(order);
    if(head == nullptr){
        head = newNode;
    }else{
        OrderNode* current = head;
        while(current->next!= nullptr){
            current = current->next;
        }
        current->next = newNode;
    }
}

// Task 5.4
bool OrderList::removeOrder(int orderId) {
    if(head == nullptr){
        return false;
    }
    if(head->order.getOrderId() == orderId){
        OrderNode* remove_order = head;
        head = head->next;
        delete remove_order;
        return true;
    }
    OrderNode* previous = head;
    OrderNode* current = head->next;
    while(current != nullptr){
        if(current->order.getOrderId() == orderId ){
            previous->next = current->next;
            delete current;
            return true;
        }
        previous = current;
        current = current->next;
    }
    return false;
}

// Task 5.5
Order* OrderList::findOrder(int orderId) const {
    OrderNode* current = head;
    while(current != nullptr){
        if(current->order.getOrderId() == orderId){
            return &current->order;
        }
        current = current->next;
    }
    return nullptr;
}

// Task 5.6
bool OrderList::isEmpty() const {
  return head == nullptr;
}

// Task 5.7
void OrderList::displayOrderList() const {
// ---------------------- provided code: DO NOT MODIFY --------------------------
    cout << "Order List:" << endl;
    if (head == nullptr) {
        cout << "The order list is empty." << endl;
        return;
    }

// ------------Write your code here to complete this task-----------------
    OrderNode* current = head;
    while(current != nullptr){
        current->order.displayOrder();
        current = current->next;
    }
}

// Task 5.8
void OrderList::displayOrdersForBuyer(int buyerId) const {

// ------------Write your code here to complete this task-----------------
    bool found = false;
    OrderNode* current = head;
    while(current != nullptr){
        if(current->order.getBuyer().getBuyerId() == buyerId){
            current->order.displayOrder();
            found = true;
        }
        current = current->next;
    }

// ---------------------- provided code: DO NOT MODIFY --------------------------
    if (!found) {
        cout << "No orders found for Buyer ID: " << buyerId << endl;
    }
}


