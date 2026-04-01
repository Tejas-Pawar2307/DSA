def count_after_give_node(self,X):
    count = 0
    temp = self.start
    
    while temp is not None:
        if temp.item == X:
            temp = temp.next
            while temp is not None:
                count += 1
                temp = temp.next
            return count
        temp = temp.next
    return 0
    

def count_at_even_position(self):
    count = 0
    temp = self.start
    pos = 1   

    while temp is not None:
        if pos % 2 == 0:
            count += 1
        temp = temp.next
        pos += 1

    return count
