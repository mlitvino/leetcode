function canConstruct(ransomNote: string, magazine: string): boolean {
  const map: Map<string, number> = new Map();

  for (const ch of magazine) {
    if (map.has(ch)) {
      map.set(ch, getCount(map, ch) + 1);
    } else {
      map.set(ch, 1);
    }
  }

  for (const ch of ransomNote) {
    if (!map.has(ch)) {
      return false;
    }

    const count = getCount(map, ch) - 1;

    if (count <= 0) {
      const is = map.delete(ch);
    } else {
      map.set(ch, count);
    }
  }

  return true;
};

function getCount(map: Map<string, number>, ch: string): number {
  const count = map.get(ch);
  return count === undefined ? 0 : count;
}
