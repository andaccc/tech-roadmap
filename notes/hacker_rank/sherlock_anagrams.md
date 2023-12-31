# Sherlock and Anagrams

Check number of substrings anagram pairs

```python
def sherlockAndAnagrams(s):
    count = 0

    # scan through string 
    for i in range(len(s)):
        # get substring with current index
        for j in range(i+1, len(s)):
            substr = ''.join(sorted(s[i:j]))

            # check anagram substring 
            for k in range(i+1, len(s)):
                if k + len(substr) > len(s):
                    break

                # length should be same with target substring                
                substr2 = ''.join(sorted(s[k:k+len(substr)]))
            
                if substr == substr2:
                    count +=1
    
    return count
```
