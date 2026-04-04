# Q.1 Write a function that counts how many nodes are in the linked list.

def count_node(self):
    temp = self.start
    count = 0

    while temp is not None:
        count += 1 
        temp = temp.next

    return count

# Q.2 Write a Function that Print the SLL in Reverse.

def Reverse_SLL(self):
    temp = self.start
    num = []

    while temp is not None:
        num.append(temp.data)
        temp = temp.next

    num.reverse()

    for value in num:
        print(value)


# Q.3 Write a Function that Print the Maximun value in SLL.

def max_value(self):
    temp = self.start
    max_val = temp.data

    while temp is not None:
        if temp.data > max_val:
            max_val = temp.data
        temp = temp.next

    return max_val

        
# Q.4 Write a Function to search a element in SLL.

def search_element(self,value):
    temp = self.start
    while temp is not None:
        
        if temp.data == value:
            return "Found"
        temp = temp.next

    return "Not Found"    
        
# Q.5 Write a Function to get sum of Node.

def get_sum(self):
    temp = self.start
    total = 0

    while temp is not None:
        total += temp.data
        temp = temp.next

    return total
