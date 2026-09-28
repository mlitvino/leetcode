function isAnagram(s: string, t: string): boolean {
  const map = new Map<string, number>();

  if (s.length !== t.length) {
    return false;
  }

  for (const ch of s) {
    const newCount = map.has(ch) ? map.get(ch)! + 1 : 1
    map.set(ch, newCount);
  };

  for (const ch of t) {
    if (!map.has(ch)) {
      return false;
    }

    const newCount = map.get(ch)! - 1;
    if (newCount < 1) {
      map.delete(ch);
    } else {
      map.set(ch, newCount);
    }
  };

  return true;
};
