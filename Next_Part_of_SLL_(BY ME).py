def search(self,data):
        temp = self.start
        while temp is not None:
            if temp.item == data:
                return data
            temp = temp.next
        return None
    def insert_after(self,temp,data):
        if temp is not None:
            n = Node(data,temp.next)
            temp.next = n
    def print_list(self):
        temp = self.start
        while temp is not None:
            print(temp.item , end=" ")
            temp = temp.next
    def delete_first(self):
        if self.start is not None:
            self.satrt = self.start.next
    def delete_last(self):
        if self.start is None:
            pass
        elif self.start.next is None:
            self.start = None
        else:
            temp = self.start 
            while temp.next.next is not None:
                temp = temp.next
            temp.next = None
