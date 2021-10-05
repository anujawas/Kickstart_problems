t=int(input())
for z in range(t):
	n,c=map(int, input().split())
	lower=[0]*n
	higher=[0]*n
	l=10e15
	h=-1
	for i in range(n):
		lower[i],higher[i]=map(int, input().split())
		if lower[i]<l:
			l=lower[i] 
		if higher[i]>h:
			h=higher[i]
	A=[]
	for j in range(l+1,h):
		p=0
		for i in range(len(lower)):
			if (lower[i]<j<higher[i]):
				
				p+=1
		A.append(p)
	A.sort(reverse=True)
	if len(A)>c:
		A=A[:c]
	else:
		for i in  range(len(A),c):
			A.append(0)
	ans=n
	for i in range(c):
		ans+=A[i]
	print(ans)





