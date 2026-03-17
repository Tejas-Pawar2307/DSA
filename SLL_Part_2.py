# Q.1 Write a function that count nodes after a given value.

def count_node_after_value(self,value):
    count = 0
    temp = self.start
    found = False

    while temp is not None:
        if temp.data == value and not found:
            temp = temp.next

            while temp is not None:
                count += 1
                temp = temp.next

        else:
            temp = temp.next

    return count

# Q.2 Write a function that Find a middle Element of SLL.

def find_middle_element(self):
    count = 0
    temp = self.start

    while temp is not None:
        count += 1
        temp = temp.next

    mid = count // 2

    temp = self.start
    i = 0

    while i < mid:
        temp = temp.next
        i += 1

    return temp.data
