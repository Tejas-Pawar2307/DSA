def delete_first(self):
        if self.start is not None:
            self.start = self.start.next
            if self.start is not None:
                self.start.prev = None

    def delete_last(self):
        if self.start is None:
            pass
        elif self.start.next is None:
            self.start = None
        else:
            temp = self.start
            while temp is not None:
                temp = temp.next
            temp.prev.next = None
        
    def delete_item(self,data):
        if self.start is None:
            pass
        else:
            temp = self.start
            while temp is not None:
                if temp.item == data:
                    if temp.next is not None:
                        temp.next.prev = temp.prev
                    if temp.prev is not None:
                        temp.prev.next = temp.next
                    else:
                        self.start = temp.next
                    break
            temp = temp.next
    
    def __iter__(self):
        return DLLIterator(self.start)
    
class DLLIterator:

    def __init__(self,start):
        self.current = start
    def __iter__(self):
        return self
    def __next__(self):
        if not self.current:
            raise StopIteration
        data = self.current.item 
        self.current = self.current.next
        return data
    
Mylist = DLL()
Mylist.insert_at_start(10)
Mylist.insert_at_last(20)
Mylist.insert_after(Mylist.search(10),15)
for x in Mylist:
    print(x,end=' ')
print()
