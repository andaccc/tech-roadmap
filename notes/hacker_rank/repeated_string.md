# Repeated String

'''python
def repeatedString(s, n):
    # Write your code here
    # add up string
    count = 0
    a_count = 0
    
    for ch in s:
        if ch == 'a':
            a_count += 1
    
    str_count = n // len(s)
    remain = n % len(s)
    
    count = str_count * a_count
    
    for ch in s[:remain]:
        if ch == 'a':
            count += 1
    
    return count
'''
