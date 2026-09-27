function isIsomorphic(s: string, t: string): boolean {
  const Smap = new Map<string, string>();
  const Tmap = new Map<string, string>();

  if (s.length !== t.length) {
    return false;
  }

  for (let i = 0; i < s.length; i++) {
    if (!Smap.has(s[i])) {
      Smap.set(s[i], t[i]);
    } else if (Smap.get(s[i]) !== t[i]) {
      return false;
    }

    if (!Tmap.has(t[i])) {
      Tmap.set(t[i], s[i]);
    } else if (Tmap.get(t[i]) !== s[i]) {
      return false;
    }
  }

  return true;
};
