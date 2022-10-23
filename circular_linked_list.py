#Circular Linked List

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class circ_lnk_lst: 
    def __init__(self):
        self.head = None #this is static and contains the address of the root node
        self.tail = None #this should get updated all the time with new node address
    def create(self): #conditional statements outside the class (so as to not call create again and again)
        new_node = Node(input("Enter data: "))
        if new_node.next == None:
            self.head = new_node #defining the starting node
            new_node.next = self.head #making this circular by pointing the node to itself
            self.tail = new_node      

    def insertion(self):
        new_node = Node(input("Enter data: "))
        new_node.next = self.head
        if self.head == None: #when list's completely empty then to add new elements from starting (same as create)
            self.head = new_node #defining the starting node
            new_node.next = self.head #making this circular by pointing the node to itself
            self.tail = new_node
        elif self.head == self.tail:
            self.head.next = new_node
        else:
            self.tail.next = new_node
        self.tail = new_node


    def deletion(self):
        #at last
        if self.head == None:
            print("-----------There are no elements present to delete from-----------")
        else:
            if self.head.next == self.head:
                del self.head
                self.head = None
            else:
                curr_node = self.head
                while curr_node.next.next != self.head:
                    curr_node = curr_node.next
                #current node is the last but one node
                last_node = curr_node.next.next
                curr_node.next = self.head # link has been removed
                del last_node
                #update the latest node
                self.tail = curr_node
    def traversal(self):
        pass

    def Display(self): #or traversal
        if self.head == None:
            print("-----------No elements are present to display-----------")
        else:
            curr_node = self.head
            print("-----------Elements are:", end = " ")
            while curr_node.next != self.head:
                print(curr_node.data, end = " ")
                curr_node = curr_node.next
            print(curr_node.data)


circ = circ_lnk_lst()
cnd = True
circ.create()
while cnd:
    print("Menu\n\t1. insert\n\t2. Display\n\t3. Delete\n\t4. Quit")
    query = int(input("Enter selected option: "))
    if query == 1:
        circ.insertion()
    elif query == 2:
        circ.Display()
    elif query == 3:
        circ.deletion()
    elif query == 4:
        print("Quitting...")
        cnd = False
    else:
        print("Select a valid option from menu")
