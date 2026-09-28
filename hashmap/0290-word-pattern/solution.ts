function wordPattern(pattern: string, s: string): boolean {
  const Pmap = new Map<string, string>();
  const Smap = new Map<string, string>();
  const split = s.split(' ');

  if (split.length !== pattern.length) {
    return false;
  }

  let i = 0;
  for (const word of split) {
    if (!Pmap.has(pattern[i])) {
      Pmap.set(pattern[i], word);
    } else {
      if (Pmap.get(pattern[i]) !== word) {
        return false;
      }
    }

    if (!Smap.has(word)) {
      Smap.set(word, pattern[i]);
    } else {
      if (Smap.get(word) !== pattern[i]) {
        return false;
      }
    }

    i++;
  }

  return true;
};
