# 232. Implement Queue using Stacks

class MyQueue:

    def __init__(self):
        self.queue = []        

    def push(self, x: int) -> None:
        self.queue.append(x)        

    def pop(self) -> int:
        ret = self.queue[0]

        t = []
        for i in range(1, len(self.queue)):
            t.append(self.queue[i])

        self.queue = t

        return ret

    def peek(self) -> int:
        return self.queue[0]

    def empty(self) -> bool:
        return len(self.queue) == 0


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
