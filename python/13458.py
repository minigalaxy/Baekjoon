from collections import deque
import sys
import math

input = sys.stdin.readline

input()

people = deque(map(int,input().split()))

m_observer,s_observer = map(int,input().split())

c = 0

while len(people):
    p = people.popleft()
    
    p -= m_observer
    c += 1
    
    if p > 0:
        c += math.ceil(p / s_observer)
        
print(c)
    
    