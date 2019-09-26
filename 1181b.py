"""
	cut the string into half and handle it with two cases -- string len odd and even
	move the pos to seperate back and front till the digit is not zero
	print the smaller one
	be careful handling the string when the seprated string is empty
"""
i = input()
l = input()

l = str(l)
pos = len(l) - (len(l) / 2)
p1 = 0
p2 = 0

if i % 2 == 0 :
	while pos + p1 < i and l[pos + p1] == '0' :
		p1 += 1
	while l[pos - p2] == '0' :
		p2 += 1
	
	if p2 == pos :
		ans = min(int(l[pos-p2:]) , int(l[pos+p1:]) + int(l[:pos+p1])) 
	elif p1 + pos == i :
		ans = min(int(l[pos-p2:]) + int(l[:pos-p2]) , int(l[:pos+p1])) 
	else :
		ans = min(int(l[pos-p2:]) + int(l[:pos-p2]) , int(l[pos+p1:]) + int(l[:pos+p1])) 

	print (ans)
else :

	while pos + p1 < i and l[pos + p1] == '0' :
		p1 += 1
	while l[pos - p2] == '0' :
		p2 += 1

	if p2 == pos :
		ans1 = min(int(l[pos-p2:]) , int(l[pos+p1:]) + int(l[:pos+p1])) 
	elif p1 + pos == i :
		ans1 = min(int(l[pos-p2:]) + int(l[:pos-p2]) , int(l[:pos+p1])) 
	else :
		ans1 = min(int(l[pos-p2:]) + int(l[:pos-p2]) , int(l[pos+p1:]) + int(l[:pos+p1])) 
	pos -= 1
	p1 = 0
	p2 = 0

	while pos + p1 < i and l[pos + p1] == '0' :
		p1 += 1
	while l[pos - p2] == '0' :
		p2 += 1
	if p2 == pos :
		ans2 = min(int(l[pos-p2:]) , int(l[pos+p1:]) + int(l[:pos+p1])) 
	elif p1 + pos == i :
		ans2 = min(int(l[pos-p2:]) + int(l[:pos-p2]) , int(l[:pos+p1])) 
	else :
		ans2 = min(int(l[pos-p2:]) + int(l[:pos-p2]) , int(l[pos+p1:]) + int(l[:pos+p1])) 
	print (min(ans1,ans2))
