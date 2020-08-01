
ugoostaleyibe solution with python2
***********************************


d = {}

def f(n):
    if n:
        s = n.value + f(n.left) + f(n.right)
        d[s] = d.get(s, 0)+1
        return s
    return 0

f(*eval(dir()[0]))
if d: m = max(d.values())

return sorted(s for s in d if d[s] == m)

