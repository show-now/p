def implies(p, q):
	return (not p) or q

def biconditional(p, q):
	return p == q

def evaluate(p, q, expr):
	if expr == "p&q":
		return p and q
	elif expr == "p|q":
		return p or q
	elif expr == "~p":
		return not p
	elif expr == "~q":
		return not q
	elif expr == "p->q":
		return implies(p, q)
	elif expr == "p<->q":
		return biconditional(p, q)
	else:
		return "Invalid expression"

def truth_table(expr):
	print("p\t q\t ", expr)
	for p in [True, False]:
		for q in [True, False]:
			result = evaluate(p, q, expr)
			print(p, "\t", q, "\t", result)

expr = input("Enter the expression (p&q) (p|q) (~p) (~q) (p->q) (p<->q): ")
print("Result\n")
truth_table(expr)
