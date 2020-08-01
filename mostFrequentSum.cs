/*
chuck3 solution with c#
***********************
*/

//
// Binary trees are already defined with this interface:
// class Tree<T> {
//   public T value { get; set; }
//   public Tree<T> left { get; set; }
//   public Tree<T> right { get; set; }
// }

Func<dynamic, int> S;

object mostFrequentSum(dynamic t) {
    var D = new Dictionary<int, int>();
    S = (t) => {
        int s = 0;
        if (t is {})
            D[s = t.value + S(t.left) + S(t.right)] = D.ContainsKey(s) ? D[s]+1 : 1;
        return s;
    };
    S(t);
    return D.Keys.Where(k => D[k] == D.Values.Max()).OrderBy(k => k);
}
