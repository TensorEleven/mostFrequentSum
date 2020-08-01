// Binary trees are already defined with this interface:
// function Tree(x) {
//   this.value = x;
//   this.left = null;
//   this.right = null;
// }

/*
Kov solution with javascript
****************************
*/

a = [[]]
f = t => t ? g(f[s = t.value + f(t.left) + f(t.right)] = -~f[s], s) : 0
g = (i, v) => (a[i] ? a[i].push(v) : a[i] = [v], v)
mostFrequentSum = t => a.pop(f(t)).sort((a, b) => a - b)


