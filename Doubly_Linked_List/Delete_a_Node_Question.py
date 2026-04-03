# Q.1 Delete the Node for Given Value

def delete_Node(self,X):
    temp = self.start
    while temp is not None:
        if temp.item == X:
            next_node = temp.next
             
            # first Node
            if temp is not None and temp.item == X:
                self.start = temp.next
                if self.start is not None:
                    self.start.prev = None
            
            # last Node
            elif temp.next is None:
                temp.prev.next = None

            # Middle Node
            
            else:
                temp.prev.next = temp.next
                temp.next.prev = temp.prev
            
            temp = next_node
        else:
            temp = temp.next
