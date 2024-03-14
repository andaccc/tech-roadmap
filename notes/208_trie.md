# 208. Implement Trie (Prefix Tree)
Search for prefix match

## dict
prefix search: O(n * length of word)

```python
class Trie:

    def __init__(self):
        self.words = {}

    def insert(self, word: str) -> None:
        self.words[word] = 1

    def search(self, word: str) -> bool:
        if word in self.words:
            return True
        return False

    def startsWith(self, prefix: str) -> bool:
        for key, val in self.words.items():
            if key.startswith(prefix):
                return True
        return False

```

## Linked List
prefix search: O(n)

```python
class TrieNode:
    def __init__(self):
        self.children = {}
        self.endOfWord = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word: str) -> None:
        cur = self.root

        for c in word:
            if c not in cur.children:
                cur.children[c] = TrieNode()
            cur = cur.children[c]
        cur.endOfWord = True

    def search(self, word: str) -> bool:
        cur = self.root

        for c in word:
            if c not in cur.children:
                return False
            cur = cur.children[c]
        return cur.endOfWord

    def startsWith(self, prefix: str) -> bool:
        cur = self.root

        for c in prefix:
            if c not in cur.children:
                return False
            cur = cur.children[c]

        return True

```
