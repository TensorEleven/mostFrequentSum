
/*
birderite solution with c++
***************************
*/

int f(Tree<int> *t, map<int, int> &c) {
  int r = 0;
  if (t) {
    r = t->value + f(t->left, c) + f(t->right, c);
    auto h = c.find(r);
    if (h == c.end()) {
      c[r] = 0;
    }
    c[r]++;
  }
  return r;
}
vector<int> mostFrequentSum(Tree<int> *t) {
  vector<int> r;
  map<int, int> c;
    if (t) {
    f(t, c);
    int m = 0;
    for (auto p: c) if (p.second > m) m = p.second;
    for (auto i : c)
      if (i.second == m)
        r.push_back(i.first);
    sort(r.begin(), r.end());
  }
  return r;
}



