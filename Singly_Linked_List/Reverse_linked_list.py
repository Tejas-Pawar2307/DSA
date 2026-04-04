# Q. Reverse the given linked list

def reverse(self):
    prev = None
    temp = self.start

    while temp is not None:
        next_node = temp.next
        temp.next = prev
        prev = temp
        temp = next_node

    self.start = prev
