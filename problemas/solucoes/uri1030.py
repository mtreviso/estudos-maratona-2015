"""
URI 1030 - A Lenda de Flavious Josephus
---
Execute: python uri1030.py < texto
"""


import sys
sys.setrecursionlimit(100000)



'''
complexidade: O(n^2)
'''
def josephusQuadratica(n, k):
	
	l = range(1, n+1)
	c = 0
	while(len(l) > 1):
		c = (c+k-1)%len(l)
		l.pop(c)	

	return l[0]


'''
complexidade: O(n)
'''
def josephusLinear(n, k):
	if n == 1:
		return 0
	return (jos(n-1, k)+k)%n
		


t = int(raw_input())
for i in xrange(t):

	n, k = map(int, raw_input().split())

	# result = josephusLinear(n, k)+1
	result = josephusQuadratica(n, k)

	print "Case %d: %d" % (i+1, result)